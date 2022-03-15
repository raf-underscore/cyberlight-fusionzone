// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMTestHelpers.h"
#include "SMTestContext.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Utilities/SMNodeInstanceUtils.h"
#include "Blueprints/SMBlueprintFactory.h"
#include "Construction/SMEditorConstructionManager.h"
#include "Construction/SMEditorInstance.h"
#include "Graph/SMGraph.h"
#include "Graph/SMStateGraph.h"
#include "Graph/SMTextPropertyGraph.h"
#include "Graph/Schema/SMGraphK2Schema.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h"

#include "Blueprints/SMBlueprint.h"
#include "SMUtils.h"

#include "Kismet2/KismetEditorUtilities.h"
#include "K2Node_FunctionEntry.h"

#if WITH_DEV_AUTOMATION_TESTS

#if PLATFORM_DESKTOP

/**
 * Unit test construction behavior.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeInstanceConstructionScriptManagerTest, "SMTests.NodeInstanceConstructionScriptManager", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FNodeInstanceConstructionScriptManagerTest::RunTest(const FString& Parameters)
{
	TestFalse("No pending construction scripts", FSMEditorConstructionManager::GetInstance()->HasPendingConstructionScripts());

	USMProjectEditorSettings* Settings = FSMBlueprintEditorUtils::GetMutableProjectEditorSettings();
	const auto CurrentCSSetting = Settings->EditorNodeConstructionScriptSetting;
	Settings->EditorNodeConstructionScriptSetting = ESMEditorConstructionScriptProjectSetting::SM_Standard;

	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	FSMEditorConstructionManager* Manager = FSMEditorConstructionManager::GetInstance();

	Manager->Tick(0.f); // Make sure construction scripts cleared out.
	
	TestFalse("No pending construction scripts", Manager->HasPendingConstructionScripts());
	Manager->RunAllConstructionScriptsForBlueprint(NewBP);
	TestTrue("Has pending construction scripts", Manager->HasPendingConstructionScripts());

	Manager->Tick(0.f);
	TestFalse("No pending construction scripts", Manager->HasPendingConstructionScripts());
	
	FSMEditorStateMachine& StateMachine = Manager->RebuildEditorStateMachine(NewBP);
	TestNotNull("Root state machine node instance assigned", StateMachine.StateMachineEditorInstance->GetRootStateMachine().GetNodeInstance());

	for (const auto& Node : StateMachine.EditorInstanceNodeStorage)
	{
		TestNotNull("Node instance assigned", Node->GetNodeInstance());
	}

	Manager->CleanupEditorStateMachine(NewBP);
	
	Settings->EditorNodeConstructionScriptSetting = CurrentCSSetting;
	
	return true;
}

/**
 * Test construction script editor and runtime optimizations for graphs and on compile.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeInstanceConstructionScriptOptimizationTest, "SMTests.NodeInstanceConstructionScriptOptimization", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FNodeInstanceConstructionScriptOptimizationTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewNodeAsset;
	if (!TestHelpers::TryCreateNewNodeAsset(this, NewNodeAsset, USMStateInstance::StaticClass(), false))
	{
		return false;
	}
	
	USMNodeBlueprint* NewNodeBP = NewNodeAsset.GetObjectAs<USMNodeBlueprint>();

	auto GetNodeInstanceClass = [NewNodeBP]()
	{
		USMNodeInstance* NodeInstance = CastChecked<USMNodeInstance>(NewNodeBP->GeneratedClass->GetDefaultObject());
		return NodeInstance->GetClass();
	};
	
	auto NodeHasConstructionScripts = [NewNodeBP](ESMExecutionEnvironment Environment)
	{
		USMNodeInstance* NodeInstance = CastChecked<USMNodeInstance>(NewNodeBP->GeneratedClass->GetDefaultObject());

		const FString FieldName = Environment == ESMExecutionEnvironment::EditorExecution ? "bHasEditorConstructionScripts" : "bHasGameConstructionScripts";
		
		FBoolProperty* HasConstructionScriptsProperty = FindFProperty<FBoolProperty>(NodeInstance->GetClass(), *FieldName);
        check(HasConstructionScriptsProperty);

        uint8* CDOContainer = HasConstructionScriptsProperty->ContainerPtrToValuePtr<uint8>(NodeInstance);
        return HasConstructionScriptsProperty->GetPropertyValue(CDOContainer);
	};
	
	UEdGraph* ConstructionScriptGraph = nullptr;
	for (UEdGraph* FunctionGraph : NewNodeBP->FunctionGraphs)
	{
		if (FunctionGraph->GetFName() == USMNodeInstance::GetConstructonScriptFunctionName())
		{
			ConstructionScriptGraph = FunctionGraph;
			break;
		}
	}

	check(ConstructionScriptGraph);

	// Find and verify default nodes.
	// FunctionEntry -> Parent -> ExecutionEnvironment
	
	UK2Node_FunctionEntry* EntryNode = FSMBlueprintEditorUtils::GetFirstNodeOfClassNested<UK2Node_FunctionEntry>(ConstructionScriptGraph);
	check(EntryNode);

	UEdGraphPin* EntryThenPin = EntryNode->FindPinChecked(UEdGraphSchema_K2::PN_Then);
	check(EntryThenPin->LinkedTo.Num() == 1);

	UK2Node_CallParentFunction* ParentCall = CastChecked<UK2Node_CallParentFunction>(EntryThenPin->LinkedTo[0]->GetOwningNode());
	UK2Node_CallFunction* ExecutionEnvironmentFunction = CastChecked<UK2Node_CallFunction>(ParentCall->GetThenPin()->LinkedTo[0]->GetOwningNode());

	UEdGraphPin* EditorExecutionPin = ExecutionEnvironmentFunction->FindPinChecked(TEXT("EditorExecution"), EGPD_Output);
	UEdGraphPin* GameExecutionPin = ExecutionEnvironmentFunction->FindPinChecked(TEXT("GameExecution"), EGPD_Output);
	
	TestEqual("No connections from editor execution", EditorExecutionPin->LinkedTo.Num(), 0);
	TestEqual("No connections from game execution", GameExecutionPin->LinkedTo.Num(), 0);
	
	// Test default behavior, should be optimized.
	{
		const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
		TestFalse("No construction scripts for default behavior", bHasEditorConstructionScripts);
		TestFalse("No construction scripts for default behavior", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));
		
		const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
		TestFalse("No construction scripts for default behavior", bHasGameConstructionScripts);
		TestFalse("No construction scripts for default behavior", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
	}

	// Function to use test optimizations.
	UFunction* DummyFunction = USMNodeInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMNodeInstance, EvaluateGraphProperties));
	check(DummyFunction);

	// Test from environment pins.
	UEdGraphNode* CreatedFunctionNode = nullptr;
	check(FSMBlueprintEditorUtils::PlaceFunctionOnGraph(ConstructionScriptGraph, DummyFunction, nullptr, &CreatedFunctionNode, nullptr, 256.f, 48.f))

	UK2Node* CreatedK2Node = CastChecked<UK2Node>(CreatedFunctionNode);
	// 1 editor 0 game
	{
		ConstructionScriptGraph->GetSchema()->TryCreateConnection(EditorExecutionPin, CreatedK2Node->GetExecPin());
		FKismetEditorUtilities::CompileBlueprint(NewNodeBP);
		
		const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
		TestTrue("Has construction scripts", bHasEditorConstructionScripts);
		TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));

		const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
		TestFalse("No construction scripts", bHasGameConstructionScripts);
		TestFalse("No construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
	}
	
	// 1 editor 1 game
	{
		ConstructionScriptGraph->GetSchema()->TryCreateConnection(GameExecutionPin, CreatedK2Node->GetExecPin());
		FKismetEditorUtilities::CompileBlueprint(NewNodeBP);
		
		const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
		TestTrue("Has construction scripts", bHasEditorConstructionScripts);
		TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));

		const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
		TestTrue("Has construction scripts", bHasGameConstructionScripts);
		TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
	}

	// 0 editor 1 game
	{
		EditorExecutionPin->BreakAllPinLinks();
		FKismetEditorUtilities::CompileBlueprint(NewNodeBP);
		
		const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
		TestFalse("No construction scripts", bHasEditorConstructionScripts);
		TestFalse("No construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));

		const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
		TestTrue("Has construction scripts", bHasGameConstructionScripts);
		TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
	}

	// Test from parent function.
	{
		ParentCall->GetThenPin()->BreakAllPinLinks();

		// No pins -- optimized.
		{
			FKismetEditorUtilities::CompileBlueprint(NewNodeBP);
			
			const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
			TestFalse("No construction scripts for default behavior", bHasEditorConstructionScripts);
			TestFalse("No construction scripts for default behavior", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));
			
			const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
			TestFalse("No construction scripts for default behavior", bHasGameConstructionScripts);
			TestFalse("No construction scripts for default behavior", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
		}

		// Connected to a non environment function, all scripts present.
		{
			ConstructionScriptGraph->GetSchema()->TryCreateConnection(ParentCall->GetThenPin(), CreatedK2Node->GetExecPin());
			FKismetEditorUtilities::CompileBlueprint(NewNodeBP);

			const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
			TestTrue("Has construction scripts", bHasEditorConstructionScripts);
			TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));

			const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
			TestTrue("Has construction scripts", bHasGameConstructionScripts);
			TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
		}
	}

	// Test from entry function.
	{
		EntryThenPin->BreakAllPinLinks();

		// No pins -- optimized.
		{
			FKismetEditorUtilities::CompileBlueprint(NewNodeBP);
			
			const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
			TestFalse("No construction scripts for default behavior", bHasEditorConstructionScripts);
			TestFalse("No construction scripts for default behavior", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));
			
			const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
			TestFalse("No construction scripts for default behavior", bHasGameConstructionScripts);
			TestFalse("No construction scripts for default behavior", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
		}

		// Connected to a non environment function, all scripts present.
		{
			ConstructionScriptGraph->GetSchema()->TryCreateConnection(EntryThenPin, CreatedK2Node->GetExecPin());
			FKismetEditorUtilities::CompileBlueprint(NewNodeBP);

			const bool bHasEditorConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::EditorExecution);
			TestTrue("Has construction scripts", bHasEditorConstructionScripts);
			TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::EditorExecution));

			const bool bHasGameConstructionScripts = FSMNodeInstanceUtils::DoesNodeClassPossiblyHaveConstructionScripts(GetNodeInstanceClass(), ESMExecutionEnvironment::GameExecution);
			TestTrue("Has construction scripts", bHasGameConstructionScripts);
			TestTrue("Has construction scripts", NodeHasConstructionScripts(ESMExecutionEnvironment::GameExecution));
		}
	}

	return true;
}

/**
 * Check construction script behavior when using standard behavior.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeInstanceConstructionScriptStandardTest, "SMTests.NodeInstanceConstructionScriptStandard", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FNodeInstanceConstructionScriptStandardTest::RunTest(const FString& Parameters)
{
	TestFalse("No pending construction scripts", FSMEditorConstructionManager::GetInstance()->HasPendingConstructionScripts());
	
	USMProjectEditorSettings* Settings = FSMBlueprintEditorUtils::GetMutableProjectEditorSettings();
	const auto CurrentCSSetting = Settings->EditorNodeConstructionScriptSetting;
	Settings->EditorNodeConstructionScriptSetting = ESMEditorConstructionScriptProjectSetting::SM_Standard;
	
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	USMGraphNode_StateNode* InitialStateGraphNode;
	USMStateConstructionTestInstance* InitialStateGraphNodeNodeInstance;
	// Total states to test.
	const int32 TotalStates = 2;
	const int32 NumPasses = 2;
	
	auto CalculatedVal = [](int32 Suffix, const FString& Prefix = "Test_") ->FString
	{
		return Prefix + FString::FromInt(Suffix);
	};

	int32 ConstructionScriptTimesPreviouslyRan = 0;
	{
		UEdGraphPin* LastStatePin = nullptr;
		//Verify default instances load correctly.
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateConstructionTestInstance::StaticClass(), USMTransitionConstructionTestInstance::StaticClass());

		InitialStateGraphNode = CastChecked<USMGraphNode_StateNode>(CastChecked<USMGraphNode_StateNode>(LastStatePin->GetOwningNode())->GetPreviousNode());

		const FStateStackContainer NewStateStackText(USMStateConstructionTestInstance::StaticClass());
		InitialStateGraphNode->StateStack.Add(NewStateStackText);
		InitialStateGraphNode->InitStateStack();
		InitialStateGraphNode->CreateGraphPropertyGraphs();
		
		InitialStateGraphNodeNodeInstance = CastChecked<USMStateConstructionTestInstance>(InitialStateGraphNode->GetNodeTemplate());
		TestEqual("Editor construction has not run yet", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, 0);

		TestTrue("Has pending construction scripts", FSMEditorConstructionManager::GetInstance()->HasPendingConstructionScripts());
		
		FSMEditorConstructionManager::GetInstance()->Tick(0.f);

		// Stack
		{
			USMStateConstructionTestInstance* StackTemplate = CastChecked<USMStateConstructionTestInstance>(InitialStateGraphNode->GetTemplateFromIndex(0));
			TestTrue("Editor construction script ran", StackTemplate->ConstructionScriptHit.Count > ConstructionScriptTimesPreviouslyRan);
			TestEqual("Outgoing states found", StackTemplate->CanReadNextStates, 1);
		}
		
		TestEqual("Editor construction script ran", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, ConstructionScriptTimesPreviouslyRan + NumPasses);
		ConstructionScriptTimesPreviouslyRan = InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count;
		
		TestEqual("Outgoing states found", InitialStateGraphNodeNodeInstance->CanReadNextStates, 1);
		
		FKismetEditorUtilities::CompileBlueprint(NewBP);  // 2nd construction script

		// Stack
		{
			USMStateConstructionTestInstance* StackTemplate = CastChecked<USMStateConstructionTestInstance>(InitialStateGraphNode->GetTemplateFromIndex(0));
			TestEqual("Editor construction script ran", StackTemplate->ConstructionScriptHit.Count, ConstructionScriptTimesPreviouslyRan + NumPasses);
			TestEqual("Outgoing states found", StackTemplate->CanReadNextStates, 1);
		}
		
		TestEqual("Editor construction script ran", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, ConstructionScriptTimesPreviouslyRan + NumPasses);
		ConstructionScriptTimesPreviouslyRan = InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count;
		
		USMInstance* TestInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, NewObject<USMTestContext>()); // 3rd construction script
		USMStateConstructionTestInstance* InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());

		// Verify hit on initialize.
		TestEqual("Construction script run", InitialNode->SetByConstructionScript, CalculatedVal(0)); // initial.
		TestEqual("Construction script run", InitialNode->ConstructionScriptHit.Count, 1);

		TestEqual("Outgoing states found", InitialStateGraphNodeNodeInstance->CanReadNextStates, 1);
		
		TArray<USMTransitionInstance*> OutgoingTransitions;
		check(InitialNode->GetOutgoingTransitions(OutgoingTransitions));

		const int32 PriorityOrder = 5;
		
		USMTransitionConstructionTestInstance* TransitionNode = CastChecked<USMTransitionConstructionTestInstance>(OutgoingTransitions[0]);
		TestEqual("Construction script run", TransitionNode->ConstructionScriptHit.Count, 1);
		TestEqual("Priority Set", TransitionNode->GetPriorityOrder(), PriorityOrder);
		TestEqual("Node Priority Set", TransitionNode->GetOwningNodeAs<FSMTransition>()->Priority, PriorityOrder);
		
		int32 A, B, C;
		TestInstance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C);

		// Verify values unchanged.
		InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
		TestEqual("Construction script run", InitialNode->SetByConstructionScript, CalculatedVal(0));
		TestEqual("Construction script run", InitialNode->ConstructionScriptHit.Count, 1);

		check(InitialNode->GetOutgoingTransitions(OutgoingTransitions));
		
		TransitionNode = CastChecked<USMTransitionConstructionTestInstance>(OutgoingTransitions[0]);
		TestEqual("Construction script run", TransitionNode->ConstructionScriptHit.Count, 1);
		TestEqual("Priority Set", TransitionNode->GetPriorityOrder(), PriorityOrder);
		TestEqual("Node Priority Set", TransitionNode->GetOwningNodeAs<FSMTransition>()->Priority, PriorityOrder);
	}
	
	// Verify pin value for editor state machine next states updated.
	{
		USMGraphK2Node_PropertyNode_Base* GraphPropertyReadNode = InitialStateGraphNode->GetGraphPropertyNode(
			GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, CanReadNextStates));
		check(GraphPropertyReadNode);

		UEdGraphPin* ResultPin = GraphPropertyReadNode->GetResultPinChecked();
		const FString DefaultValue = ResultPin->GetDefaultAsString();
		TestEqual("Default value changed by construction script", DefaultValue, CalculatedVal(1, ""));
	}
	
	// Verify the pin value has updated.
	{
		USMGraphK2Node_PropertyNode_Base* GraphPropertyReadNode = InitialStateGraphNode->GetGraphPropertyNode(
			GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, SetByConstructionScript));
		check(GraphPropertyReadNode);

		UEdGraphPin* ResultPin = GraphPropertyReadNode->GetResultPinChecked();
		FString DefaultValue = ResultPin->GetDefaultAsString();
		TestEqual("Default value changed by construction script", DefaultValue, CalculatedVal(0));

		USMGraphK2Node_PropertyNode_Base* GraphPropertyWriteNode = InitialStateGraphNode->GetGraphPropertyNode(
			GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, ExposedInt));
		check(GraphPropertyReadNode);

		{
			// Verify setting a new write value updates the read value from the construction script.

			int32 NewValue = 5001;

			const UEdGraphSchema_K2* Schema = CastChecked<UEdGraphSchema_K2>(GraphPropertyWriteNode->GetSchema());
			Schema->TrySetDefaultValue(*GraphPropertyWriteNode->GetResultPinChecked(), FString::FromInt(NewValue)); // 4th construction script

			TestEqual("Editor construction script ran after pin modify, stayed the same value because of property reset", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, ConstructionScriptTimesPreviouslyRan + NumPasses);
			ConstructionScriptTimesPreviouslyRan = InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count;

			TestEqual("PostEditChange Fired", InitialStateGraphNodeNodeInstance->PostEditChangeHit.Count, 1);
			
			FSMEditorConstructionManager::GetInstance()->Tick(0.f);
			
			// Tick regenerated the graphs.
			GraphPropertyReadNode = InitialStateGraphNode->GetGraphPropertyNode(
				GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, SetByConstructionScript));
			check(GraphPropertyReadNode);

			ResultPin = GraphPropertyReadNode->GetResultPinChecked();
			
			DefaultValue = ResultPin->GetDefaultAsString();
			TestEqual("Default value changed by construction script", DefaultValue, CalculatedVal(NewValue));

			// Test run-time
			int32 A, B, C;
			USMInstance* TestInstance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C);

			USMStateConstructionTestInstance* InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
			TestEqual("Construction script run", InitialNode->SetByConstructionScript, CalculatedVal(NewValue));
			TestEqual("Construction script run", InitialNode->ConstructionScriptHit.Count, 1);
		}
	}

	Settings->EditorNodeConstructionScriptSetting = CurrentCSSetting;
	
	return true;
}

/**
 * Check construction script behavior when using compile only behavior.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeInstanceConstructionScriptCompileTest, "SMTests.NodeInstanceConstructionScriptCompile", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FNodeInstanceConstructionScriptCompileTest::RunTest(const FString& Parameters)
{
	USMProjectEditorSettings* Settings = FSMBlueprintEditorUtils::GetMutableProjectEditorSettings();
	const auto CurrentCSSetting = Settings->EditorNodeConstructionScriptSetting;
	Settings->EditorNodeConstructionScriptSetting = ESMEditorConstructionScriptProjectSetting::SM_Compile;
	
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}
	
	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	USMGraphNode_StateNode* InitialStateGraphNode;
	USMStateConstructionTestInstance* InitialStateGraphNodeNodeInstance;
	// Total states to test.
	const int32 TotalStates = 2;
	const int32 NumPasses = 2;
	
	auto CalculatedVal = [](int32 Suffix) ->FString
	{
		return "Test_" + FString::FromInt(Suffix);
	};

	int32 ConstructionScriptTimesPreviouslyRan = 0;
	{
		UEdGraphPin* LastStatePin = nullptr;
		//Verify default instances load correctly.
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateConstructionTestInstance::StaticClass(), USMTransitionConstructionTestInstance::StaticClass());

		InitialStateGraphNode = CastChecked<USMGraphNode_StateNode>(CastChecked<USMGraphNode_StateNode>(LastStatePin->GetOwningNode())->GetPreviousNode());

		InitialStateGraphNodeNodeInstance = CastChecked<USMStateConstructionTestInstance>(InitialStateGraphNode->GetNodeTemplate());
		TestEqual("Editor construction has not run yet", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, 0);

		FSMEditorConstructionManager::GetInstance()->Tick(0.f);
		
		TestEqual("Editor construction has not run yet", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, 0);
		ConstructionScriptTimesPreviouslyRan = InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count;
		
		FKismetEditorUtilities::CompileBlueprint(NewBP);  // 2nd construction script

		TestEqual("Editor construction script ran after compile, value increased", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, ConstructionScriptTimesPreviouslyRan + NumPasses);
		ConstructionScriptTimesPreviouslyRan = InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count;
		
		USMInstance* TestInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, NewObject<USMTestContext>()); // 3rd construction script
		USMStateConstructionTestInstance* InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());

		// Verify hit on initialize.
		TestEqual("Construction script run", InitialNode->SetByConstructionScript, CalculatedVal(0)); // initial.
		TestEqual("Construction script run", InitialNode->ConstructionScriptHit.Count, 1);
		
		TArray<USMTransitionInstance*> OutgoingTransitions;
		check(InitialNode->GetOutgoingTransitions(OutgoingTransitions));

		const int32 PriorityOrder = 5;
		
		USMTransitionConstructionTestInstance* TransitionNode = CastChecked<USMTransitionConstructionTestInstance>(OutgoingTransitions[0]);
		TestEqual("Construction script run", TransitionNode->ConstructionScriptHit.Count, 1);
		TestEqual("Priority Set", TransitionNode->GetPriorityOrder(), PriorityOrder);
		TestEqual("Node Priority Set", TransitionNode->GetOwningNodeAs<FSMTransition>()->Priority, PriorityOrder);
		
		int32 A, B, C;
		TestInstance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C);

		// Verify values unchanged.
		InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
		TestEqual("Construction script run", InitialNode->SetByConstructionScript, CalculatedVal(0));
		TestEqual("Construction script run", InitialNode->ConstructionScriptHit.Count, 1);

		check(InitialNode->GetOutgoingTransitions(OutgoingTransitions));
		
		TransitionNode = CastChecked<USMTransitionConstructionTestInstance>(OutgoingTransitions[0]);
		TestEqual("Construction script run", TransitionNode->ConstructionScriptHit.Count, 1);
		TestEqual("Priority Set", TransitionNode->GetPriorityOrder(), PriorityOrder);
		TestEqual("Node Priority Set", TransitionNode->GetOwningNodeAs<FSMTransition>()->Priority, PriorityOrder);
	}

	// Verify the pin value has updated.
	
	USMGraphK2Node_PropertyNode_Base* GraphPropertyReadNode = InitialStateGraphNode->GetGraphPropertyNode(
		GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, SetByConstructionScript));
	check(GraphPropertyReadNode);

	UEdGraphPin* ResultPin = GraphPropertyReadNode->GetResultPinChecked();
	FString DefaultValue = ResultPin->GetDefaultAsString();
	TestEqual("Default value changed by construction script", DefaultValue, CalculatedVal(0));

	USMGraphK2Node_PropertyNode_Base* GraphPropertyWriteNode = InitialStateGraphNode->GetGraphPropertyNode(
		GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, ExposedInt));
	check(GraphPropertyReadNode);

	{
		// Verify setting a new write value updates the read value from the construction script.
		
		int32 NewValue = 5001;

		ConstructionScriptTimesPreviouslyRan = InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count;
		
		const UEdGraphSchema_K2* Schema = CastChecked<UEdGraphSchema_K2>(GraphPropertyWriteNode->GetSchema());
		Schema->TrySetDefaultValue(*GraphPropertyWriteNode->GetResultPinChecked(), FString::FromInt(NewValue)); // 4th construction script

		TestTrue("Editor construction script ran after pin modify, stayed the same value", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count == ConstructionScriptTimesPreviouslyRan);
		ConstructionScriptTimesPreviouslyRan = InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count;
		TestEqual("PostEditChange Fired", InitialStateGraphNodeNodeInstance->PostEditChangeHit.Count, 1);
		
		FSMEditorConstructionManager::GetInstance()->Tick(0.f);
		
		DefaultValue = ResultPin->GetDefaultAsString();
		TestNotEqual("Default value not changed by construction script yet", DefaultValue, CalculatedVal(NewValue));

		FKismetEditorUtilities::CompileBlueprint(NewBP);

		ResultPin = GraphPropertyReadNode->GetResultPinChecked();
		
		DefaultValue = ResultPin->GetDefaultAsString();
		TestEqual("Default value changed by construction script yet", DefaultValue, CalculatedVal(NewValue));
		
		// Test run-time
		int32 A, B, C;
		USMInstance* TestInstance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C);

		USMStateConstructionTestInstance* InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
		TestEqual("Construction script run", InitialNode->SetByConstructionScript, CalculatedVal(NewValue));
		TestEqual("Construction script run", InitialNode->ConstructionScriptHit.Count, 1);
	}

	Settings->EditorNodeConstructionScriptSetting = CurrentCSSetting;
	
	return true;
}

/**
 * Check construction script behavior when using legacy behavior.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeInstanceConstructionScriptLegacyTest, "SMTests.NodeInstanceConstructionScriptLegacy", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FNodeInstanceConstructionScriptLegacyTest::RunTest(const FString& Parameters)
{
	USMProjectEditorSettings* Settings = FSMBlueprintEditorUtils::GetMutableProjectEditorSettings();
	const auto CurrentCSSetting = Settings->EditorNodeConstructionScriptSetting;
	Settings->EditorNodeConstructionScriptSetting = ESMEditorConstructionScriptProjectSetting::SM_Legacy;
	
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}
	
	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	USMGraphNode_StateNode* InitialStateGraphNode;
	USMStateConstructionTestInstance* InitialStateGraphNodeNodeInstance;
	// Total states to test.
	int32 TotalStates = 1;

	auto CalculatedVal = [](int32 Suffix) ->FString
	{
		return "Test_" + FString::FromInt(Suffix);
	};

	{
		UEdGraphPin* LastStatePin = nullptr;
		//Verify default instances load correctly.
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateConstructionTestInstance::StaticClass(), USMTransitionInstance::StaticClass());

		InitialStateGraphNode = CastChecked<USMGraphNode_StateNode>(LastStatePin->GetOwningNode());

		InitialStateGraphNodeNodeInstance = CastChecked<USMStateConstructionTestInstance>(InitialStateGraphNode->GetNodeTemplate());
		TestEqual("Editor construction script ran once", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, 1);

		FKismetEditorUtilities::CompileBlueprint(NewBP);

		TestEqual("Editor construction script did not run because of legacy settings", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, 1);
		
		USMInstance* TestInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, NewObject<USMTestContext>());
		USMStateConstructionTestInstance* InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());

		// Verify hit on initialize.
		TestEqual("Construction script not run", InitialNode->SetByConstructionScript, CalculatedVal(0)); // initial.
		TestEqual("Construction script not run", InitialNode->ConstructionScriptHit.Count, 1);

		int32 A, B, C;
		TestInstance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C, 1000, false);

		// Verify values unchanged.
		InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
		TestEqual("Construction script not run.", InitialNode->SetByConstructionScript, CalculatedVal(0)); // May change if we change how default graph vals executes.
		TestEqual("Construction script not run", InitialNode->ConstructionScriptHit.Count, 1);
	}

	// Verify the pin value has updated.
	
	USMGraphK2Node_PropertyNode_Base* GraphPropertyReadNode = InitialStateGraphNode->GetGraphPropertyNode(
		GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, SetByConstructionScript));
	check(GraphPropertyReadNode);

	UEdGraphPin* ResultPin = GraphPropertyReadNode->GetResultPinChecked();
	FString DefaultValue = ResultPin->GetDefaultAsString();
	TestEqual("Default value not changed by legacy construction script", DefaultValue, CalculatedVal(0));

	USMGraphK2Node_PropertyNode_Base* GraphPropertyWriteNode = InitialStateGraphNode->GetGraphPropertyNode(
		GET_MEMBER_NAME_CHECKED(USMStateConstructionTestInstance, ExposedInt));
	check(GraphPropertyReadNode);

	{
		// Verify setting a new write value updates the read value from the construction script.
		
		int32 NewValue = 5001;

		const UEdGraphSchema_K2* Schema = CastChecked<UEdGraphSchema_K2>(GraphPropertyWriteNode->GetSchema());
		Schema->TrySetDefaultValue(*GraphPropertyWriteNode->GetResultPinChecked(), FString::FromInt(NewValue));

		TestEqual("Editor construction script did not run after pin modify because of legacy, stayed the same value because of property reset", InitialStateGraphNodeNodeInstance->ConstructionScriptHit.Count, 1);
		TestEqual("PostEditChange Fired", InitialStateGraphNodeNodeInstance->PostEditChangeHit.Count, 1);
		
		DefaultValue = ResultPin->GetDefaultAsString();
		TestEqual("Default value not changed by legacy construction script", DefaultValue, CalculatedVal(0));

		// Test run-time
		int32 A, B, C;
		USMInstance* TestInstance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C);

		USMStateConstructionTestInstance* InitialNode = CastChecked<USMStateConstructionTestInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
		TestEqual("Construction script not run", InitialNode->SetByConstructionScript, CalculatedVal(0));
		TestEqual("Construction script not run", InitialNode->ConstructionScriptHit.Count, 1);
	}

	Settings->EditorNodeConstructionScriptSetting = CurrentCSSetting;
	
	return true;
}

#endif

#endif //WITH_DEV_AUTOMATION_TESTS