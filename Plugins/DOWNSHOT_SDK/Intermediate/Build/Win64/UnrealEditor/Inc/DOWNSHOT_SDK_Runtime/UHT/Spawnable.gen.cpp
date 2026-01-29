// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spawnable.h"
#include "SpawnableData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawnable() {}

// ********** Begin Cross Module References ********************************************************
DOWNSHOT_SDK_RUNTIME_API UClass* Z_Construct_UClass_ASpawnable();
DOWNSHOT_SDK_RUNTIME_API UClass* Z_Construct_UClass_ASpawnable_NoRegister();
DOWNSHOT_SDK_RUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DOWNSHOT_SDK_Runtime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpawnable Function GetClosestMatch **************************************
struct Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics
{
	struct Spawnable_eventGetClosestMatch_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDK_Spawnable" },
		{ "ModuleRelativePath", "Public/Spawnable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawnable_eventGetClosestMatch_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawnable_eventGetClosestMatch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawnable, nullptr, "GetClosestMatch", Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::Spawnable_eventGetClosestMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::Spawnable_eventGetClosestMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnable_GetClosestMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnable_GetClosestMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnable::execGetClosestMatch)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetClosestMatch(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ASpawnable Function GetClosestMatch ****************************************

// ********** Begin Class ASpawnable Function GetItem **********************************************
struct Z_Construct_UFunction_ASpawnable_GetItem_Statics
{
	struct Spawnable_eventGetItem_Parms
	{
		int32 Index;
		FSpawnableData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SDK_Spawnable" },
		{ "ModuleRelativePath", "Public/Spawnable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnable_GetItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawnable_eventGetItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnable_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawnable_eventGetItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpawnableData, METADATA_PARAMS(0, nullptr) }; // 3749979880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnable_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnable_GetItem_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnable_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnable_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnable_GetItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawnable, nullptr, "GetItem", Z_Construct_UFunction_ASpawnable_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnable_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnable_GetItem_Statics::Spawnable_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnable_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnable_GetItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawnable_GetItem_Statics::Spawnable_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnable_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnable_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnable::execGetItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSpawnableData*)Z_Param__Result=P_THIS->GetItem(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class ASpawnable Function GetItem ************************************************

// ********** Begin Class ASpawnable ***************************************************************
void ASpawnable::StaticRegisterNativesASpawnable()
{
	UClass* Class = ASpawnable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetClosestMatch", &ASpawnable::execGetClosestMatch },
		{ "GetItem", &ASpawnable::execGetItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpawnable;
UClass* ASpawnable::GetPrivateStaticClass()
{
	using TClass = ASpawnable;
	if (!Z_Registration_Info_UClass_ASpawnable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Spawnable"),
			Z_Registration_Info_UClass_ASpawnable.InnerSingleton,
			StaticRegisterNativesASpawnable,
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
	return Z_Registration_Info_UClass_ASpawnable.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpawnable_NoRegister()
{
	return ASpawnable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpawnable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spawnable.h" },
		{ "ModuleRelativePath", "Public/Spawnable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnable_GetClosestMatch, "GetClosestMatch" }, // 3614269935
		{ &Z_Construct_UFunction_ASpawnable_GetItem, "GetItem" }, // 883996606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpawnable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DOWNSHOT_SDK_Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnable_Statics::ClassParams = {
	&ASpawnable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnable_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnable()
{
	if (!Z_Registration_Info_UClass_ASpawnable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnable.OuterSingleton, Z_Construct_UClass_ASpawnable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnable);
ASpawnable::~ASpawnable() {}
// ********** End Class ASpawnable *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h__Script_DOWNSHOT_SDK_Runtime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnable, ASpawnable::StaticClass, TEXT("ASpawnable"), &Z_Registration_Info_UClass_ASpawnable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnable), 1375551864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h__Script_DOWNSHOT_SDK_Runtime_820110872(TEXT("/Script/DOWNSHOT_SDK_Runtime"),
	Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h__Script_DOWNSHOT_SDK_Runtime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_Spawnable_h__Script_DOWNSHOT_SDK_Runtime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
