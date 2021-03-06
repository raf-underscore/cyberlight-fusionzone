// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Properties/SMGraphProperty_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphProperty_Base() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Runtime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime;
class UScriptStruct* FSMGraphProperty_Base_Runtime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty_Base_Runtime"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty_Base_Runtime>()
{
	return FSMGraphProperty_Base_Runtime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphEvaluator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultValueOnly_MetaData[];
#endif
		static void NewProp_bIsDefaultValueOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultValueOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base graph properties containing the bare essentials for run-time.\n * Any run-time graph property types should inherit from this.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The base graph properties containing the bare essentials for run-time.\nAny run-time graph property types should inherit from this." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty_Base_Runtime>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_Inner = { "GraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator = { "GraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base_Runtime, GraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_MetaData)) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base_Runtime, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid_MetaData[] = {
		{ "Comment", "/** The graph property owner. If this struct is defined within a node class and instanced\n\x09 * to a state machine then the guid of class CDO is the owner. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The graph property owner. If this struct is defined within a node class and instanced\nto a state machine then the guid of class CDO is the owner." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid = { "OwnerGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base_Runtime, OwnerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_bIsDefaultValueOnly_MetaData[] = {
		{ "Comment", "/** If only a default value is assigned (no variable connected) */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "If only a default value is assigned (no variable connected)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_bIsDefaultValueOnly_SetBit(void* Obj)
	{
		((FSMGraphProperty_Base_Runtime*)Obj)->bIsDefaultValueOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_bIsDefaultValueOnly = { "bIsDefaultValueOnly", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMGraphProperty_Base_Runtime), &Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_bIsDefaultValueOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_bIsDefaultValueOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_bIsDefaultValueOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_bIsDefaultValueOnly,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMGraphProperty_Base_Runtime",
		sizeof(FSMGraphProperty_Base_Runtime),
		alignof(FSMGraphProperty_Base_Runtime),
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime()
	{
		if (!Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMGraphProperty_Runtime>() == std::is_polymorphic<FSMGraphProperty_Base_Runtime>(), "USTRUCT FSMGraphProperty_Runtime cannot be polymorphic unless super FSMGraphProperty_Base_Runtime is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime;
class UScriptStruct* FSMGraphProperty_Runtime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty_Runtime, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty_Runtime"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty_Runtime>()
{
	return FSMGraphProperty_Runtime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Graph properties which represent a variable exposed on a node. Only for run-time use.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Graph properties which represent a variable exposed on a node. Only for run-time use." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty_Runtime>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime,
		&NewStructOps,
		"SMGraphProperty_Runtime",
		sizeof(FSMGraphProperty_Runtime),
		alignof(FSMGraphProperty_Runtime),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Runtime()
	{
		if (!Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner;
class UScriptStruct* FSMGraphPropertyTemplateOwner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphPropertyTemplateOwner"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphPropertyTemplateOwner>()
{
	return FSMGraphPropertyTemplateOwner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGraphProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableGraphProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariableGraphProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper so templates can be mapped to their graph properties and stored in a UPROPERTY.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Wrapper so templates can be mapped to their graph properties and stored in a UPROPERTY." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphPropertyTemplateOwner>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewProp_VariableGraphProperties_Inner = { "VariableGraphProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime, METADATA_PARAMS(nullptr, 0) }; // 123409840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewProp_VariableGraphProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewProp_VariableGraphProperties = { "VariableGraphProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphPropertyTemplateOwner, VariableGraphProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewProp_VariableGraphProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewProp_VariableGraphProperties_MetaData)) }; // 123409840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewProp_VariableGraphProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewProp_VariableGraphProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMGraphPropertyTemplateOwner",
		sizeof(FSMGraphPropertyTemplateOwner),
		alignof(FSMGraphPropertyTemplateOwner),
		Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner()
	{
		if (!Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMGraphProperty_Base>() == std::is_polymorphic<FSMGraphProperty_Base_Runtime>(), "USTRUCT FSMGraphProperty_Base cannot be polymorphic unless super FSMGraphProperty_Base_Runtime is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphProperty_Base;
class UScriptStruct* FSMGraphProperty_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphProperty_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphProperty_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty_Base, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty_Base"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphProperty_Base.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty_Base>()
{
	return FSMGraphProperty_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInArray_MetaData[];
#endif
		static void NewProp_bIsInArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadOnly_MetaData[];
#endif
		static void NewProp_bReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RealDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphSchemaClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphSchemaClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphModuleClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GraphModuleClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedGraphClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CachedGraphClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSchemaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CachedSchemaClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuidUnmodified_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GuidUnmodified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuidIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GuidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * EDITOR: The base struct for graph properties exposed on a node. Contains additional properties for configuration and compilation.\n * Any graph property types should inherit from this.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "EDITOR: The base struct for graph properties exposed on a node. Contains additional properties for configuration and compilation.\nAny graph property types should inherit from this." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty_Base>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** The node variable name to override. */" },
		{ "ExposeOverrideOnly", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The node variable name to override." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, VariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, VariableType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType_MetaData)) }; // 3872468109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference = { "MemberReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, MemberReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference_MetaData)) }; // 3380895081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_SetBit(void* Obj)
	{
		((FSMGraphProperty_Base*)Obj)->bIsInArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray = { "bIsInArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMGraphProperty_Base), &Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bReadOnly_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Display the variable as read only on the node. */" },
		{ "ExposeOverrideOnly", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Display the variable as read only on the node." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((FSMGraphProperty_Base*)Obj)->bReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMGraphProperty_Base), &Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Prevent the variable from being displayed on the node. The property graph is still created and this variable will evaluate\n\x09 * with EvaluateGraphProperties regardless of hidden status. */" },
		{ "ExposeOverrideOnly", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Prevent the variable from being displayed on the node. The property graph is still created and this variable will evaluate\nwith EvaluateGraphProperties regardless of hidden status." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FSMGraphProperty_Base*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMGraphProperty_Base), &Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bHidden_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName_MetaData[] = {
		{ "Comment", "/** Set when loaded in a graph node. */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Set when loaded in a graph node." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName = { "RealDisplayName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, RealDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Set when loaded in a graph node in the event this is stored within an array. */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Set when loaded in a graph node in the event this is stored within an array." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName = { "GraphClassName", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GraphClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName = { "GraphSchemaClassName", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GraphSchemaClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName = { "GraphModuleClassName", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GraphModuleClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass = { "CachedGraphClass", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, CachedGraphClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass = { "CachedSchemaClass", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, CachedSchemaClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified_MetaData[] = {
		{ "Comment", "/** The guid without the template. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The guid without the template." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified = { "GuidUnmodified", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GuidUnmodified), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid_MetaData[] = {
		{ "Comment", "/** The guid of the template this belongs to. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The guid of the template this belongs to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid = { "TemplateGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, TemplateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex = { "GuidIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GuidIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bHidden,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime,
		&NewStructOps,
		"SMGraphProperty_Base",
		sizeof(FSMGraphProperty_Base),
		alignof(FSMGraphProperty_Base),
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_SMGraphProperty_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphProperty_Base.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphProperty_Base.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMGraphProperty>() == std::is_polymorphic<FSMGraphProperty_Base>(), "USTRUCT FSMGraphProperty cannot be polymorphic unless super FSMGraphProperty_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphProperty;
class UScriptStruct* FSMGraphProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphProperty.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty>()
{
	return FSMGraphProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * EDITOR: Graph properties which represent a variable exposed on a node. Contains additional properties for configuration and compilation.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "EDITOR: Graph properties which represent a variable exposed on a node. Contains additional properties for configuration and compilation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Customize the appearance of the node property widget. */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Customize the appearance of the node property widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo = { "WidgetInfo", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty, WidgetInfo), Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo_MetaData)) }; // 392407362
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base,
		&NewStructOps,
		"SMGraphProperty",
		sizeof(FSMGraphProperty),
		alignof(FSMGraphProperty),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_SMGraphProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphProperty.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphProperty.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Properties_SMGraphProperty_Base_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Properties_SMGraphProperty_Base_h_Statics::ScriptStructInfo[] = {
		{ FSMGraphProperty_Base_Runtime::StaticStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewStructOps, TEXT("SMGraphProperty_Base_Runtime"), &Z_Registration_Info_UScriptStruct_SMGraphProperty_Base_Runtime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphProperty_Base_Runtime), 123409840U) },
		{ FSMGraphProperty_Runtime::StaticStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::NewStructOps, TEXT("SMGraphProperty_Runtime"), &Z_Registration_Info_UScriptStruct_SMGraphProperty_Runtime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphProperty_Runtime), 282538438U) },
		{ FSMGraphPropertyTemplateOwner::StaticStruct, Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner_Statics::NewStructOps, TEXT("SMGraphPropertyTemplateOwner"), &Z_Registration_Info_UScriptStruct_SMGraphPropertyTemplateOwner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphPropertyTemplateOwner), 2977899703U) },
		{ FSMGraphProperty_Base::StaticStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewStructOps, TEXT("SMGraphProperty_Base"), &Z_Registration_Info_UScriptStruct_SMGraphProperty_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphProperty_Base), 3026511958U) },
		{ FSMGraphProperty::StaticStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewStructOps, TEXT("SMGraphProperty"), &Z_Registration_Info_UScriptStruct_SMGraphProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphProperty), 1950418506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Properties_SMGraphProperty_Base_h_605421210(TEXT("/Script/SMSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Properties_SMGraphProperty_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Properties_SMGraphProperty_Base_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
