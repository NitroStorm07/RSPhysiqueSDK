// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/UEFAnimFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUEFAnimFactory() {}

// ********** Begin Cross Module References ********************************************************
UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimFactory();
UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimFactory_NoRegister();
UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimImportOptions_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_UEFormat();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEFAnimFactory ***********************************************************
void UEFAnimFactory::StaticRegisterNativesUEFAnimFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEFAnimFactory;
UClass* UEFAnimFactory::GetPrivateStaticClass()
{
	using TClass = UEFAnimFactory;
	if (!Z_Registration_Info_UClass_UEFAnimFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EFAnimFactory"),
			Z_Registration_Info_UClass_UEFAnimFactory.InnerSingleton,
			StaticRegisterNativesUEFAnimFactory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEFAnimFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UEFAnimFactory_NoRegister()
{
	return UEFAnimFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEFAnimFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/UEFAnimFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/UEFAnimFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsImporter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/UEFAnimFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsImporter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEFAnimFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEFAnimFactory_Statics::NewProp_SettingsImporter = { "SettingsImporter", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEFAnimFactory, SettingsImporter), Z_Construct_UClass_UEFAnimImportOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsImporter_MetaData), NewProp_SettingsImporter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEFAnimFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEFAnimFactory_Statics::NewProp_SettingsImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEFAnimFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_UEFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEFAnimFactory_Statics::ClassParams = {
	&UEFAnimFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEFAnimFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEFAnimFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEFAnimFactory()
{
	if (!Z_Registration_Info_UClass_UEFAnimFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEFAnimFactory.OuterSingleton, Z_Construct_UClass_UEFAnimFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEFAnimFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEFAnimFactory);
UEFAnimFactory::~UEFAnimFactory() {}
// ********** End Class UEFAnimFactory *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h__Script_UEFormat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEFAnimFactory, UEFAnimFactory::StaticClass, TEXT("UEFAnimFactory"), &Z_Registration_Info_UClass_UEFAnimFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEFAnimFactory), 1232268627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h__Script_UEFormat_2992580124(TEXT("/Script/UEFormat"),
	Z_CompiledInDeferFile_FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h__Script_UEFormat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_LyraStarterGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h__Script_UEFormat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
