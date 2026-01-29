// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spawnable.h"

#ifdef DOWNSHOT_SDK_RUNTIME_Spawnable_generated_h
#error "Spawnable.generated.h already included, missing '#pragma once' in Spawnable.h"
#endif
#define DOWNSHOT_SDK_RUNTIME_Spawnable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSpawnableData;

// ********** Begin Class ASpawnable ***************************************************************
#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execGetClosestMatch);


DOWNSHOT_SDK_RUNTIME_API UClass* Z_Construct_UClass_ASpawnable_NoRegister();

#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnable(); \
	friend struct Z_Construct_UClass_ASpawnable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DOWNSHOT_SDK_RUNTIME_API UClass* Z_Construct_UClass_ASpawnable_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpawnable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DOWNSHOT_SDK_Runtime"), Z_Construct_UClass_ASpawnable_NoRegister) \
	DECLARE_SERIALIZER(ASpawnable)


#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpawnable(ASpawnable&&) = delete; \
	ASpawnable(const ASpawnable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnable) \
	NO_API virtual ~ASpawnable();


#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_10_PROLOG
#define FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_13_INCLASS_NO_PURE_DECLS \
	FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpawnable;

// ********** End Class ASpawnable *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
