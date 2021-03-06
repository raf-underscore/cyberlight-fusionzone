// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/SMPropertyGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMPropertyGraph() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraph_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraph();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base_NoRegister();
// End Cross Module References
	void USMPropertyGraph::StaticRegisterNativesUSMPropertyGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMPropertyGraph);
	UClass* Z_Construct_UClass_USMPropertyGraph_NoRegister()
	{
		return USMPropertyGraph::StaticClass();
	}
	struct Z_Construct_UClass_USMPropertyGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingGraphToEdit_MetaData[];
#endif
		static void NewProp_bUsingGraphToEdit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingGraphToEdit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVariableIsReadOnly_MetaData[];
#endif
		static void NewProp_bVariableIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVariableIsReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMPropertyGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPropertyGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/SMPropertyGraph.h" },
		{ "ModuleRelativePath", "Private/Graph/SMPropertyGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_ResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMPropertyGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPropertyGraph, ResultNode), Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_ResultNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_ResultNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bUsingGraphToEdit_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMPropertyGraph.h" },
	};
#endif
	void Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bUsingGraphToEdit_SetBit(void* Obj)
	{
		((USMPropertyGraph*)Obj)->bUsingGraphToEdit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bUsingGraphToEdit = { "bUsingGraphToEdit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMPropertyGraph), &Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bUsingGraphToEdit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bUsingGraphToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bUsingGraphToEdit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bVariableIsReadOnly_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMPropertyGraph.h" },
	};
#endif
	void Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bVariableIsReadOnly_SetBit(void* Obj)
	{
		((USMPropertyGraph*)Obj)->bVariableIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bVariableIsReadOnly = { "bVariableIsReadOnly", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMPropertyGraph), &Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bVariableIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bVariableIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bVariableIsReadOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMPropertyGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_ResultNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bUsingGraphToEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPropertyGraph_Statics::NewProp_bVariableIsReadOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMPropertyGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMPropertyGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMPropertyGraph_Statics::ClassParams = {
		&USMPropertyGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMPropertyGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMPropertyGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMPropertyGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMPropertyGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMPropertyGraph()
	{
		if (!Z_Registration_Info_UClass_USMPropertyGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMPropertyGraph.OuterSingleton, Z_Construct_UClass_USMPropertyGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMPropertyGraph.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMPropertyGraph>()
	{
		return USMPropertyGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMPropertyGraph);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USMPropertyGraph)
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMPropertyGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMPropertyGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMPropertyGraph, USMPropertyGraph::StaticClass, TEXT("USMPropertyGraph"), &Z_Registration_Info_UClass_USMPropertyGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMPropertyGraph), 4290012076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMPropertyGraph_h_3538153003(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMPropertyGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_SMPropertyGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
