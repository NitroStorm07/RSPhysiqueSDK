// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpawnableData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawnableData() {}

// ********** Begin Cross Module References ********************************************************
DOWNSHOT_SDK_RUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableData();
UPackage* Z_Construct_UPackage__Script_DOWNSHOT_SDK_Runtime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSpawnableData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpawnableData;
class UScriptStruct* FSpawnableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpawnableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpawnableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnableData, (UObject*)Z_Construct_UPackage__Script_DOWNSHOT_SDK_Runtime(), TEXT("SpawnableData"));
	}
	return Z_Registration_Info_UScriptStruct_FSpawnableData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpawnableData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpawnableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SpawnableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftClassRefrence_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SpawnableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SpawnableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SpawnableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SoftClassRefrence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnableData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_SoftClassRefrence = { "SoftClassRefrence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableData, SoftClassRefrence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftClassRefrence_MetaData), NewProp_SoftClassRefrence_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableData, Bounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableData, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_SoftClassRefrence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableData_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnableData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DOWNSHOT_SDK_Runtime,
	nullptr,
	&NewStructOps,
	"SpawnableData",
	Z_Construct_UScriptStruct_FSpawnableData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableData_Statics::PropPointers),
	sizeof(FSpawnableData),
	alignof(FSpawnableData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnableData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnableData()
{
	if (!Z_Registration_Info_UScriptStruct_FSpawnableData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpawnableData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnableData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpawnableData.InnerSingleton;
}
// ********** End ScriptStruct FSpawnableData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_SpawnableData_h__Script_DOWNSHOT_SDK_Runtime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnableData::StaticStruct, Z_Construct_UScriptStruct_FSpawnableData_Statics::NewStructOps, TEXT("SpawnableData"), &Z_Registration_Info_UScriptStruct_FSpawnableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnableData), 3749979880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_SpawnableData_h__Script_DOWNSHOT_SDK_Runtime_231290744(TEXT("/Script/DOWNSHOT_SDK_Runtime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_SpawnableData_h__Script_DOWNSHOT_SDK_Runtime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DSModMenu_Plugins_DOWNSHOT_SDK_Source_DOWNSHOT_SDK_Runtime_Public_SpawnableData_h__Script_DOWNSHOT_SDK_Runtime_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
