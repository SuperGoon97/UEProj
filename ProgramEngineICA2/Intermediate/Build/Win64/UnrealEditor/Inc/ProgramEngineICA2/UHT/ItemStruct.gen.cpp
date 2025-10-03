// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgramEngineICA2/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemStruct() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
PROGRAMENGINEICA2_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
UPackage* Z_Construct_UPackage__Script_ProgramEngineICA2();
// End Cross Module References

// Begin ScriptStruct FItemStruct
static_assert(std::is_polymorphic<FItemStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStruct;
class UScriptStruct* FItemStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct, (UObject*)Z_Construct_UPackage__Script_ProgramEngineICA2(), TEXT("ItemStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton;
}
template<> PROGRAMENGINEICA2_API UScriptStruct* StaticStruct<FItemStruct>()
{
	return FItemStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static void NewProp_bIsStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
void Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((FItemStruct*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemStruct), &Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProgramEngineICA2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemStruct",
	Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers),
	sizeof(FItemStruct),
	alignof(FItemStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton, Z_Construct_UScriptStruct_FItemStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton;
}
// End ScriptStruct FItemStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ItemStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemStruct::StaticStruct, Z_Construct_UScriptStruct_FItemStruct_Statics::NewStructOps, TEXT("ItemStruct"), &Z_Registration_Info_UScriptStruct_ItemStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStruct), 2924732459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ItemStruct_h_2286902754(TEXT("/Script/ProgramEngineICA2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ItemStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ItemStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
