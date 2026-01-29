// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/UEFModelFactory.h"

#ifdef UEFORMAT_UEFModelFactory_generated_h
#error "UEFModelFactory.generated.h already included, missing '#pragma once' in UEFModelFactory.h"
#endif
#define UEFORMAT_UEFModelFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEFModelFactory **********************************************************
UEFORMAT_API UClass* Z_Construct_UClass_UEFModelFactory_NoRegister();

#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEFModelFactory(); \
	friend struct Z_Construct_UClass_UEFModelFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UEFORMAT_API UClass* Z_Construct_UClass_UEFModelFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEFModelFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEFormat"), Z_Construct_UClass_UEFModelFactory_NoRegister) \
	DECLARE_SERIALIZER(UEFModelFactory)


#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEFModelFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEFModelFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEFModelFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEFModelFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEFModelFactory(UEFModelFactory&&) = delete; \
	UEFModelFactory(const UEFModelFactory&) = delete; \
	NO_API virtual ~UEFModelFactory();


#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_12_PROLOG
#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_15_INCLASS \
	FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEFModelFactory;

// ********** End Class UEFModelFactory ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
