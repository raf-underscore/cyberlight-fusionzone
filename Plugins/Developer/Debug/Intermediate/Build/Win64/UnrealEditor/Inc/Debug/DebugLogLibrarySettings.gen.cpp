// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/Public/DebugLogLibrarySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugLogLibrarySettings() {}
// Cross Module References
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogType();
	UPackage* Z_Construct_UPackage__Script_Debug();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_ELoggingOptions();
	DEBUG_API UClass* Z_Construct_UClass_UDebugLogLibrarySettings_NoRegister();
	DEBUG_API UClass* Z_Construct_UClass_UDebugLogLibrarySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDebugLogType;
	static UEnum* EDebugLogType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDebugLogType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDebugLogType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogType, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogType"));
		}
		return Z_Registration_Info_UEnum_EDebugLogType.OuterSingleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogType>()
	{
		return EDebugLogType_StaticEnum();
	}
	struct Z_Construct_UEnum_Debug_EDebugLogType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Debug_EDebugLogType_Statics::Enumerators[] = {
		{ "DL_Info", (int64)DL_Info },
		{ "DL_Success", (int64)DL_Success },
		{ "DL_Warning", (int64)DL_Warning },
		{ "DL_Error", (int64)DL_Error },
		{ "DL_Fatal", (int64)DL_Fatal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Debug_EDebugLogType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DL_Error.DisplayName", "Error" },
		{ "DL_Error.Name", "DL_Error" },
		{ "DL_Fatal.DisplayName", "Fatal" },
		{ "DL_Fatal.Name", "DL_Fatal" },
		{ "DL_Info.DisplayName", "Info" },
		{ "DL_Info.Name", "DL_Info" },
		{ "DL_Success.DisplayName", "Success" },
		{ "DL_Success.Name", "DL_Success" },
		{ "DL_Warning.DisplayName", "Warning" },
		{ "DL_Warning.Name", "DL_Warning" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Debug_EDebugLogType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Debug,
		nullptr,
		"EDebugLogType",
		"EDebugLogType",
		Z_Construct_UEnum_Debug_EDebugLogType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Debug_EDebugLogType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Debug_EDebugLogType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Debug_EDebugLogType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Debug_EDebugLogType()
	{
		if (!Z_Registration_Info_UEnum_EDebugLogType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDebugLogType.InnerSingleton, Z_Construct_UEnum_Debug_EDebugLogType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDebugLogType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoggingOptions;
	static UEnum* ELoggingOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoggingOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoggingOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Debug_ELoggingOptions, Z_Construct_UPackage__Script_Debug(), TEXT("ELoggingOptions"));
		}
		return Z_Registration_Info_UEnum_ELoggingOptions.OuterSingleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<ELoggingOptions>()
	{
		return ELoggingOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_Debug_ELoggingOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Debug_ELoggingOptions_Statics::Enumerators[] = {
		{ "LO_Viewport", (int64)LO_Viewport },
		{ "LO_Console", (int64)LO_Console },
		{ "LO_Both", (int64)LO_Both },
		{ "LO_NoLog", (int64)LO_NoLog },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Debug_ELoggingOptions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LO_Both.DisplayName", "Viewport and Console" },
		{ "LO_Both.Name", "LO_Both" },
		{ "LO_Console.DisplayName", "Console" },
		{ "LO_Console.Name", "LO_Console" },
		{ "LO_NoLog.DisplayName", "Disabled" },
		{ "LO_NoLog.Name", "LO_NoLog" },
		{ "LO_Viewport.DisplayName", "Viewport" },
		{ "LO_Viewport.Name", "LO_Viewport" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Debug_ELoggingOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Debug,
		nullptr,
		"ELoggingOptions",
		"ELoggingOptions",
		Z_Construct_UEnum_Debug_ELoggingOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Debug_ELoggingOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Debug_ELoggingOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Debug_ELoggingOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Debug_ELoggingOptions()
	{
		if (!Z_Registration_Info_UEnum_ELoggingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoggingOptions.InnerSingleton, Z_Construct_UEnum_Debug_ELoggingOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoggingOptions.InnerSingleton;
	}
	void UDebugLogLibrarySettings::StaticRegisterNativesUDebugLogLibrarySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugLogLibrarySettings);
	UClass* Z_Construct_UClass_UDebugLogLibrarySettings_NoRegister()
	{
		return UDebugLogLibrarySettings::StaticClass();
	}
	struct Z_Construct_UClass_UDebugLogLibrarySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData[];
#endif
		static void NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrashGameInShippingBuildConfiguration_MetaData[];
#endif
		static void NewProp_bCrashGameInShippingBuildConfiguration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrashGameInShippingBuildConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InfoColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarningColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessColor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ViewportLogKeys_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportLogKeys_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportLogKeys_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ViewportLogKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpecifiers_MetaData[];
#endif
		static void NewProp_bEnableSpecifiers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpecifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySpecifiersIn_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplaySpecifiersIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LogCategorySpecifiers_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogCategorySpecifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogCategorySpecifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LogCategorySpecifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogContext_MetaData[];
#endif
		static void NewProp_bLogContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayContextIn_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayContextIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugLogLibrarySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DebugLogLibrarySettings.h" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Should we use Two's Compliment when converting a decimal number to a hexadecimal value on negative numbers?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Should we use Two's Compliment when converting a decimal number to a hexadecimal value on negative numbers?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers = { "bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Should the game crash if any ULog functions are called in a shipping build configuration?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Should the game crash if any ULog functions are called in a shipping build configuration?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bCrashGameInShippingBuildConfiguration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration = { "bCrashGameInShippingBuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a standard message\n" },
		{ "DisplayName", "Default Color" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a standard message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor = { "InfoColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, InfoColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a error message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a error message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor = { "ErrorColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, ErrorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a warning message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a warning message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor = { "WarningColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, WarningColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The color to use when logging a success message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a success message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor = { "SuccessColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, SuccessColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_ValueProp = { "ViewportLogKeys", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_Key_KeyProp = { "ViewportLogKeys_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// The key to use when calling any logging functions that specify its corresponding name (case-insensitive)\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The key to use when calling any logging functions that specify its corresponding name (case-insensitive)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys = { "ViewportLogKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, ViewportLogKeys), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_MetaData[] = {
		{ "Category", "Specifiers" },
		{ "Comment", "// If true, add a specifier text before the final output log message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "If true, add a specifier text before the final output log message" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bEnableSpecifiers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers = { "bEnableSpecifiers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn_MetaData[] = {
		{ "Category", "Specifiers" },
		{ "Comment", "// The place to display the category specifier text along side the final log message\n" },
		{ "EditCondition", "bEnableSpecifiers" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The place to display the category specifier text along side the final log message" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn = { "DisplaySpecifiersIn", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, DisplaySpecifiersIn), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn_MetaData)) }; // 748614807
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_ValueProp = { "LogCategorySpecifiers", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_Key_KeyProp = { "LogCategorySpecifiers_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Debug_EDebugLogType, METADATA_PARAMS(nullptr, 0) }; // 3378774514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_MetaData[] = {
		{ "Category", "Specifiers" },
		{ "Comment", "// The tag specifers to use when logging in these categories\n" },
		{ "EditCondition", "bEnableSpecifiers" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The tag specifers to use when logging in these categories" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers = { "LogCategorySpecifiers", nullptr, (EPropertyFlags)0x0010000000004041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, LogCategorySpecifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_MetaData)) }; // 3378774514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "// Display the context of a log message?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Display the context of a log message?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bLogContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext = { "bLogContext", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "// The place to display the context along side the final log message\n" },
		{ "EditCondition", "bLogContext" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The place to display the context along side the final log message" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn = { "DisplayContextIn", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, DisplayContextIn), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn_MetaData)) }; // 748614807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ViewportLogKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bEnableSpecifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplaySpecifiersIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_LogCategorySpecifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bLogContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_DisplayContextIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugLogLibrarySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugLogLibrarySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::ClassParams = {
		&UDebugLogLibrarySettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugLogLibrarySettings()
	{
		if (!Z_Registration_Info_UClass_UDebugLogLibrarySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugLogLibrarySettings.OuterSingleton, Z_Construct_UClass_UDebugLogLibrarySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDebugLogLibrarySettings.OuterSingleton;
	}
	template<> DEBUG_API UClass* StaticClass<UDebugLogLibrarySettings>()
	{
		return UDebugLogLibrarySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugLogLibrarySettings);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_Statics::EnumInfo[] = {
		{ EDebugLogType_StaticEnum, TEXT("EDebugLogType"), &Z_Registration_Info_UEnum_EDebugLogType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3378774514U) },
		{ ELoggingOptions_StaticEnum, TEXT("ELoggingOptions"), &Z_Registration_Info_UEnum_ELoggingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 748614807U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDebugLogLibrarySettings, UDebugLogLibrarySettings::StaticClass, TEXT("UDebugLogLibrarySettings"), &Z_Registration_Info_UClass_UDebugLogLibrarySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugLogLibrarySettings), 1290781191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_1918694849(TEXT("/Script/Debug"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_Debug_Source_Debug_Public_DebugLogLibrarySettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
