// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SDKFunctionCalls.h"

#ifdef DOWNSHOT_SDK_EDITOR_SDKFunctionCalls_generated_h
#error "SDKFunctionCalls.generated.h already included, missing '#pragma once' in SDKFunctionCalls.h"
#endif
#define DOWNSHOT_SDK_EDITOR_SDKFunctionCalls_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USDKFunctionCalls ********************************************************
#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInstallToStandaloneHMD); \
	DECLARE_FUNCTION(execInstallToPC); \
	DECLARE_FUNCTION(execGetSDKVersion); \
	DECLARE_FUNCTION(execOpenFileExplorer); \
	DECLARE_FUNCTION(execRestartEditor); \
	DECLARE_FUNCTION(execCopyBlankMap); \
	DECLARE_FUNCTION(execCopyTemplateMap); \
	DECLARE_FUNCTION(execCompileMod); \
	DECLARE_FUNCTION(execGetModIntermidateFolder); \
	DECLARE_FUNCTION(execGetModPakFolder); \
	DECLARE_FUNCTION(execGetModArchiveFolder); \
	DECLARE_FUNCTION(execReadConfigValue); \
	DECLARE_FUNCTION(execIsConfiguredCorrectly); \
	DECLARE_FUNCTION(execWriteConfigValue); \
	DECLARE_FUNCTION(execCreateModFolder); \
	DECLARE_FUNCTION(execConfigureProjectSettings); \
	DECLARE_FUNCTION(execAndroidReneringHotfix);


DOWNSHOT_SDK_EDITOR_API UClass* Z_Construct_UClass_USDKFunctionCalls_NoRegister();

#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDKFunctionCalls(); \
	friend struct Z_Construct_UClass_USDKFunctionCalls_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DOWNSHOT_SDK_EDITOR_API UClass* Z_Construct_UClass_USDKFunctionCalls_NoRegister(); \
public: \
	DECLARE_CLASS2(USDKFunctionCalls, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DOWNSHOT_SDK_Editor"), Z_Construct_UClass_USDKFunctionCalls_NoRegister) \
	DECLARE_SERIALIZER(USDKFunctionCalls)


#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USDKFunctionCalls(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDKFunctionCalls(USDKFunctionCalls&&) = delete; \
	USDKFunctionCalls(const USDKFunctionCalls&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USDKFunctionCalls); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDKFunctionCalls); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USDKFunctionCalls) \
	NO_API virtual ~USDKFunctionCalls();


#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_13_PROLOG
#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_16_INCLASS_NO_PURE_DECLS \
	FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDKFunctionCalls;

// ********** End Class USDKFunctionCalls **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Editor_Public_SDKFunctionCalls_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
