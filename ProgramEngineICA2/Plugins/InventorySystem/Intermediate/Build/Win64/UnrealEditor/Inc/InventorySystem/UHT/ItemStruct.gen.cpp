// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemStruct() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_ERarityEnum();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin ScriptStruct FItemStruct
static_assert(std::is_polymorphic<FItemStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStruct;
class UScriptStruct* FItemStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemStruct>()
{
	return FItemStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemValue_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemRarity = { "ItemRarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemRarity), Z_Construct_UEnum_InventorySystem_ERarityEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRarity_MetaData), NewProp_ItemRarity_MetaData) }; // 4047476964
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemValue = { "ItemValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemValue_MetaData), NewProp_ItemValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemIcon), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
void Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((FItemStruct*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemStruct), &Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemRarity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemRarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_bIsStackable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
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
struct Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemStruct::StaticStruct, Z_Construct_UScriptStruct_FItemStruct_Statics::NewStructOps, TEXT("ItemStruct"), &Z_Registration_Info_UScriptStruct_ItemStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStruct), 2694818014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemStruct_h_1704685109(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
