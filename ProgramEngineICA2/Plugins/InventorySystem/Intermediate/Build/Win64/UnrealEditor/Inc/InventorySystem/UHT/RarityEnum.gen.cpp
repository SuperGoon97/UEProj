// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/RarityEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRarityEnum() {}

// Begin Cross Module References
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_ERarityEnum();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Enum ERarityEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERarityEnum;
static UEnum* ERarityEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERarityEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERarityEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_ERarityEnum, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ERarityEnum"));
	}
	return Z_Registration_Info_UEnum_ERarityEnum.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<ERarityEnum>()
{
	return ERarityEnum_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_ERarityEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.DisplayName", "Common" },
		{ "Common.Name", "ERarityEnum::Common" },
		{ "Epic.DisplayName", "Epic" },
		{ "Epic.Name", "ERarityEnum::Epic" },
		{ "Legendary.DisplayName", "Legendary" },
		{ "Legendary.Name", "ERarityEnum::Legendary" },
		{ "ModuleRelativePath", "Public/RarityEnum.h" },
		{ "Rare.DisplayName", "Rare" },
		{ "Rare.Name", "ERarityEnum::Rare" },
		{ "Uncommon.DisplayName", "Uncommon" },
		{ "Uncommon.Name", "ERarityEnum::Uncommon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERarityEnum::Common", (int64)ERarityEnum::Common },
		{ "ERarityEnum::Uncommon", (int64)ERarityEnum::Uncommon },
		{ "ERarityEnum::Rare", (int64)ERarityEnum::Rare },
		{ "ERarityEnum::Epic", (int64)ERarityEnum::Epic },
		{ "ERarityEnum::Legendary", (int64)ERarityEnum::Legendary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_ERarityEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"ERarityEnum",
	"ERarityEnum",
	Z_Construct_UEnum_InventorySystem_ERarityEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_ERarityEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_ERarityEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_ERarityEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_ERarityEnum()
{
	if (!Z_Registration_Info_UEnum_ERarityEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERarityEnum.InnerSingleton, Z_Construct_UEnum_InventorySystem_ERarityEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERarityEnum.InnerSingleton;
}
// End Enum ERarityEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_RarityEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERarityEnum_StaticEnum, TEXT("ERarityEnum"), &Z_Registration_Info_UEnum_ERarityEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4047476964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_RarityEnum_h_1305822956(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_RarityEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_RarityEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
