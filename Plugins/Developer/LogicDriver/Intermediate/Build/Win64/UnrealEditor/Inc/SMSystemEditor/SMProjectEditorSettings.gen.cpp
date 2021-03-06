// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Configuration/SMProjectEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMProjectEditorSettings() {}
// Cross Module References
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMPinOverride();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMProjectEditorSettings_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMProjectEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMConduitInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMPinOverride;
	static UEnum* ESMPinOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMPinOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMPinOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystemEditor_ESMPinOverride, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("ESMPinOverride"));
		}
		return Z_Registration_Info_UEnum_ESMPinOverride.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMPinOverride>()
	{
		return ESMPinOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::Enumerators[] = {
		{ "ESMPinOverride::None", (int64)ESMPinOverride::None },
		{ "ESMPinOverride::LogicDriverOnly", (int64)ESMPinOverride::LogicDriverOnly },
		{ "ESMPinOverride::AllBlueprints", (int64)ESMPinOverride::AllBlueprints },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::Enum_MetaDataParams[] = {
		{ "AllBlueprints.Comment", "/** Override is for all blueprint types. */" },
		{ "AllBlueprints.Name", "ESMPinOverride::AllBlueprints" },
		{ "AllBlueprints.ToolTip", "Override is for all blueprint types." },
		{ "LogicDriverOnly.Comment", "/** Override is only for Logic Driver assets. */" },
		{ "LogicDriverOnly.Name", "ESMPinOverride::LogicDriverOnly" },
		{ "LogicDriverOnly.ToolTip", "Override is only for Logic Driver assets." },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "None.Comment", "/** Override is disabled for all assets. Restart required. */" },
		{ "None.Name", "ESMPinOverride::None" },
		{ "None.ToolTip", "Override is disabled for all assets. Restart required." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystemEditor,
		nullptr,
		"ESMPinOverride",
		"ESMPinOverride",
		Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystemEditor_ESMPinOverride()
	{
		if (!Z_Registration_Info_UEnum_ESMPinOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMPinOverride.InnerSingleton, Z_Construct_UEnum_SMSystemEditor_ESMPinOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMPinOverride.InnerSingleton;
	}
	void USMProjectEditorSettings::StaticRegisterNativesUSMProjectEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMProjectEditorSettings);
	UClass* Z_Construct_UClass_USMProjectEditorSettings_NoRegister()
	{
		return USMProjectEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USMProjectEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstalledVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstalledVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateAssetsOnStartup_MetaData[];
#endif
		static void NewProp_bUpdateAssetsOnStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateAssetsOnStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAssetUpdateProgress_MetaData[];
#endif
		static void NewProp_bDisplayAssetUpdateProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAssetUpdateProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayUpdateNotification_MetaData[];
#endif
		static void NewProp_bDisplayUpdateNotification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayUpdateNotification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayMemoryLimitsOnCompile_MetaData[];
#endif
		static void NewProp_bDisplayMemoryLimitsOnCompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayMemoryLimitsOnCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysDisplayStructMemoryUsage_MetaData[];
#endif
		static void NewProp_bAlwaysDisplayStructMemoryUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDisplayStructMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructMemoryLimitWarningThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StructMemoryLimitWarningThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInputEventNotes_MetaData[];
#endif
		static void NewProp_bDisplayInputEventNotes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInputEventNotes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictInvalidCharacters_MetaData[];
#endif
		static void NewProp_bRestrictInvalidCharacters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictInvalidCharacters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateInstanceOnCompile_MetaData[];
#endif
		static void NewProp_bValidateInstanceOnCompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateInstanceOnCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarnIfChildrenAreOutOfDate_MetaData[];
#endif
		static void NewProp_bWarnIfChildrenAreOutOfDate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnIfChildrenAreOutOfDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinkerLoadHandling_MetaData[];
#endif
		static void NewProp_bLinkerLoadHandling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkerLoadHandling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultNewTransitionsToTrue_MetaData[];
#endif
		static void NewProp_bDefaultNewTransitionsToTrue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultNewTransitionsToTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConfigureNewConduitsAsTransitions_MetaData[];
#endif
		static void NewProp_bConfigureNewConduitsAsTransitions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConfigureNewConduitsAsTransitions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditorNodeConstructionScriptSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorNodeConstructionScriptSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorNodeConstructionScriptSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultStateClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStateMachineClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultStateMachineClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConduitClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultConduitClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultTransitionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReferenceTemplatesByDefault_MetaData[];
#endif
		static void NewProp_bEnableReferenceTemplatesByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReferenceTemplatesByDefault;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideActorSoftReferencePins_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideActorSoftReferencePins_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideActorSoftReferencePins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePreviewMode_MetaData[];
#endif
		static void NewProp_bEnablePreviewMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMProjectEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Configuration/SMProjectEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion = { "InstalledVersion", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, InstalledVersion), METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "Comment", "/**\n\x09 * Automatically update assets saved by older versions to the most current version. It is strongly recommended to leave this on.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Automatically update assets saved by older versions to the most current version. It is strongly recommended to leave this on." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bUpdateAssetsOnStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup = { "bUpdateAssetsOnStartup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "Comment", "/**\n\x09 * Display a progress bar when updating assets to a new version.\n\x09 */" },
		{ "EditCondition", "bUpdateAssetsOnStartup" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Display a progress bar when updating assets to a new version." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDisplayAssetUpdateProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress = { "bDisplayAssetUpdateProgress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_MetaData[] = {
		{ "Category", "Version Updates" },
		{ "Comment", "/**\n\x09 * Display a popup with a link to the patch notes when a new version is detected.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Display a popup with a link to the patch notes when a new version is detected." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDisplayUpdateNotification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification = { "bDisplayUpdateNotification", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_MetaData[] = {
		{ "Category", "Validation|Memory" },
		{ "Comment", "/**\n\x09 * Warn if approaching Blueprint memory limits on a compile.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Warn if approaching Blueprint memory limits on a compile." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDisplayMemoryLimitsOnCompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile = { "bDisplayMemoryLimitsOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_MetaData[] = {
		{ "Category", "Validation|Memory" },
		{ "Comment", "/**\n\x09 * Display the used struct memory as an info message on compile. \n\x09 */" },
		{ "EditCondition", "bDisplayMemoryLimitsOnCompile" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Display the used struct memory as an info message on compile." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bAlwaysDisplayStructMemoryUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage = { "bAlwaysDisplayStructMemoryUsage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold_MetaData[] = {
		{ "Category", "Validation|Memory" },
		{ "Comment", "/**\n\x09 * The percent of used struct memory that must be reached before a warning is triggered.\n\x09 */" },
		{ "EditCondition", "bDisplayMemoryLimitsOnCompile" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "The percent of used struct memory that must be reached before a warning is triggered." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold = { "StructMemoryLimitWarningThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, StructMemoryLimitWarningThreshold), METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayInputEventNotes_MetaData[] = {
		{ "Category", "Validation|Input" },
		{ "Comment", "/**\n\x09* Display a note in the compiler log when input events are used.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Display a note in the compiler log when input events are used." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayInputEventNotes_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDisplayInputEventNotes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayInputEventNotes = { "bDisplayInputEventNotes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayInputEventNotes_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayInputEventNotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayInputEventNotes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bRestrictInvalidCharacters_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09 * Restrict invalid characters in state names. When false any character is allowed, but certain operations can cause Unreal to crash, such\n\x09 * as copying and pasting states. Only set to false if you know what you are doing.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Restrict invalid characters in state names. When false any character is allowed, but certain operations can cause Unreal to crash, such\nas copying and pasting states. Only set to false if you know what you are doing." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bRestrictInvalidCharacters_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bRestrictInvalidCharacters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bRestrictInvalidCharacters = { "bRestrictInvalidCharacters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bRestrictInvalidCharacters_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bRestrictInvalidCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bRestrictInvalidCharacters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09 * Perform additional validation when compiling the state machine default object by attempting a low level instantiation.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Perform additional validation when compiling the state machine default object by attempting a low level instantiation." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bValidateInstanceOnCompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile = { "bValidateInstanceOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09 * Children which reference a parent state machine graph risk being out of date if a package the parent references is modified.\n\x09 * Compiling the package will signal that affected state machine children need to be compiled, however if you start a PIE session\n\x09 * instead of pressing the compile button, the children may not be updated. In this case the state machine compiler will attempt to warn you.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Children which reference a parent state machine graph risk being out of date if a package the parent references is modified.\nCompiling the package will signal that affected state machine children need to be compiled, however if you start a PIE session\ninstead of pressing the compile button, the children may not be updated. In this case the state machine compiler will attempt to warn you." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bWarnIfChildrenAreOutOfDate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate = { "bWarnIfChildrenAreOutOfDate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bLinkerLoadHandling_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09* Perform special compile handling when linker load is detected to avoid possible crashes and improve sub-object packaging.\n\x09* This should remain on.\n\x09*\n\x09* This setting exists primarily for troubleshooting and will likely be removed in a future update.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Perform special compile handling when linker load is detected to avoid possible crashes and improve sub-object packaging.\nThis should remain on.\n\nThis setting exists primarily for troubleshooting and will likely be removed in a future update." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bLinkerLoadHandling_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bLinkerLoadHandling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bLinkerLoadHandling = { "bLinkerLoadHandling", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bLinkerLoadHandling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bLinkerLoadHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bLinkerLoadHandling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDefaultNewTransitionsToTrue_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/**\n\x09 * Newly placed transitions will default to true if they do not have a node class assigned.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Newly placed transitions will default to true if they do not have a node class assigned." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDefaultNewTransitionsToTrue_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bDefaultNewTransitionsToTrue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDefaultNewTransitionsToTrue = { "bDefaultNewTransitionsToTrue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDefaultNewTransitionsToTrue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDefaultNewTransitionsToTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDefaultNewTransitionsToTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_MetaData[] = {
		{ "Category", "Conduits" },
		{ "Comment", "/**\n\x09 * Newly placed conduits will automatically be configured as transitions.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Newly placed conduits will automatically be configured as transitions." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bConfigureNewConduitsAsTransitions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions = { "bConfigureNewConduitsAsTransitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_EditorNodeConstructionScriptSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_EditorNodeConstructionScriptSetting_MetaData[] = {
		{ "Category", "Node Instances" },
		{ "Comment", "/**\n\x09 * Configure the editor-time construction script behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Configure the editor-time construction script behavior." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_EditorNodeConstructionScriptSetting = { "EditorNodeConstructionScriptSetting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, EditorNodeConstructionScriptSetting), Z_Construct_UEnum_SMSystemEditor_ESMEditorConstructionScriptProjectSetting, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_EditorNodeConstructionScriptSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_EditorNodeConstructionScriptSetting_MetaData)) }; // 1408986972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateClass_MetaData[] = {
		{ "Category", "Node Instances" },
		{ "Comment", "/**\n\x09 * Default class to be assigned when placing a new state node.\n\x09 * A setting of None will use the system default classes.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Default class to be assigned when placing a new state node.\nA setting of None will use the system default classes." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateClass = { "DefaultStateClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, DefaultStateClass), Z_Construct_UClass_USMStateInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateMachineClass_MetaData[] = {
		{ "Category", "Node Instances" },
		{ "Comment", "/**\n\x09 * Default class to be assigned when placing a new state machine node.\n\x09 * A setting of None will use the system default classes.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Default class to be assigned when placing a new state machine node.\nA setting of None will use the system default classes." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateMachineClass = { "DefaultStateMachineClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, DefaultStateMachineClass), Z_Construct_UClass_USMStateMachineInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateMachineClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultConduitClass_MetaData[] = {
		{ "Category", "Node Instances" },
		{ "Comment", "/**\n\x09 * Default class to be assigned when placing a new conduit node.\n\x09 * A setting of None will use the system default classes.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Default class to be assigned when placing a new conduit node.\nA setting of None will use the system default classes." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultConduitClass = { "DefaultConduitClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, DefaultConduitClass), Z_Construct_UClass_USMConduitInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultConduitClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultConduitClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultTransitionClass_MetaData[] = {
		{ "Category", "Node Instances" },
		{ "Comment", "/**\n\x09 * Default class to be assigned when placing a new transition.\n\x09 * A setting of None will use the system default classes.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Default class to be assigned when placing a new transition.\nA setting of None will use the system default classes." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultTransitionClass = { "DefaultTransitionClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, DefaultTransitionClass), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultTransitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultTransitionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableReferenceTemplatesByDefault_MetaData[] = {
		{ "Category", "Node Instances" },
		{ "Comment", "/**\n\x09 * Newly placed state machine references will have their templates enabled by default.\n\x09 * This allows custom node classes to be supported with references.\n\x09 *\n\x09 * State machine blueprints that have a custom state machine class assigned by default\n\x09 * will always default to using a template.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Newly placed state machine references will have their templates enabled by default.\nThis allows custom node classes to be supported with references.\n\nState machine blueprints that have a custom state machine class assigned by default\nwill always default to using a template." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableReferenceTemplatesByDefault_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bEnableReferenceTemplatesByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableReferenceTemplatesByDefault = { "bEnableReferenceTemplatesByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableReferenceTemplatesByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableReferenceTemplatesByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableReferenceTemplatesByDefault_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Logic Driver can add support to select soft actor references from UEdGraphPins. Unreal by default does not support this.\n\x09 * You can add support only to Logic Driver assets, to all blueprint assets, or disable completely.\n\x09 *\n\x09 * Switching to None or from None requires an editor restart.\n\x09 **/" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Logic Driver can add support to select soft actor references from UEdGraphPins. Unreal by default does not support this.\nYou can add support only to Logic Driver assets, to all blueprint assets, or disable completely.\n\nSwitching to None or from None requires an editor restart." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins = { "OverrideActorSoftReferencePins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMProjectEditorSettings, OverrideActorSoftReferencePins), Z_Construct_UEnum_SMSystemEditor_ESMPinOverride, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_MetaData)) }; // 1341780341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnablePreviewMode_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/**\n\x09 * Enable the preview mode as an available editor mode.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Configuration/SMProjectEditorSettings.h" },
		{ "ToolTip", "Enable the preview mode as an available editor mode." },
	};
#endif
	void Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnablePreviewMode_SetBit(void* Obj)
	{
		((USMProjectEditorSettings*)Obj)->bEnablePreviewMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnablePreviewMode = { "bEnablePreviewMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMProjectEditorSettings), &Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnablePreviewMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnablePreviewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnablePreviewMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMProjectEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_InstalledVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bUpdateAssetsOnStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayAssetUpdateProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayUpdateNotification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayMemoryLimitsOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bAlwaysDisplayStructMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_StructMemoryLimitWarningThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDisplayInputEventNotes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bRestrictInvalidCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bValidateInstanceOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bWarnIfChildrenAreOutOfDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bLinkerLoadHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bDefaultNewTransitionsToTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bConfigureNewConduitsAsTransitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_EditorNodeConstructionScriptSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_EditorNodeConstructionScriptSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultStateMachineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultConduitClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_DefaultTransitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnableReferenceTemplatesByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_OverrideActorSoftReferencePins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMProjectEditorSettings_Statics::NewProp_bEnablePreviewMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMProjectEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMProjectEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMProjectEditorSettings_Statics::ClassParams = {
		&USMProjectEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMProjectEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USMProjectEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMProjectEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMProjectEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USMProjectEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMProjectEditorSettings.OuterSingleton, Z_Construct_UClass_USMProjectEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMProjectEditorSettings.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMProjectEditorSettings>()
	{
		return USMProjectEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMProjectEditorSettings);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_Statics::EnumInfo[] = {
		{ ESMPinOverride_StaticEnum, TEXT("ESMPinOverride"), &Z_Registration_Info_UEnum_ESMPinOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1341780341U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMProjectEditorSettings, USMProjectEditorSettings::StaticClass, TEXT("USMProjectEditorSettings"), &Z_Registration_Info_UClass_USMProjectEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMProjectEditorSettings), 3754786856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_2718735426(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Configuration_SMProjectEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
