// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/UEFAnimFactory.h"

#ifdef UEFORMAT_UEFAnimFactory_generated_h
#error "UEFAnimFactory.generated.h already included, missing '#pragma once' in UEFAnimFactory.h"
#endif
#define UEFORMAT_UEFAnimFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEFAnimFactory ***********************************************************
UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimFactory_NoRegister();

#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEFAnimFactory(); \
	friend struct Z_Construct_UClass_UEFAnimFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEFAnimFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEFormat"), Z_Construct_UClass_UEFAnimFactory_NoRegister) \
	DECLARE_SERIALIZER(UEFAnimFactory)


#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEFAnimFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEFAnimFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEFAnimFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEFAnimFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEFAnimFactory(UEFAnimFactory&&) = delete; \
	UEFAnimFactory(const UEFAnimFactory&) = delete; \
	NO_API virtual ~UEFAnimFactory();


#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_10_PROLOG
#define FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_13_INCLASS \
	FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEFAnimFactory;

// ********** End Class UEFAnimFactory *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
