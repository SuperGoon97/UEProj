// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgramEngineICA2/InventorySortEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySortEnum() {}

// Begin Cross Module References
PROGRAMENGINEICA2_API UEnum* Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum();
UPackage* Z_Construct_UPackage__Script_ProgramEngineICA2();
// End Cross Module References

// Begin Enum EInventorySortEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInventorySortEnum;
static UEnum* EInventorySortEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInventorySortEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInventorySortEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum, (UObject*)Z_Construct_UPackage__Script_ProgramEngineICA2(), TEXT("EInventorySortEnum"));
	}
	return Z_Registration_Info_UEnum_EInventorySortEnum.OuterSingleton;
}
template<> PROGRAMENGINEICA2_API UEnum* StaticEnum<EInventorySortEnum>()
{
	return EInventorySortEnum_StaticEnum();
}
struct Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InventorySortEnum.h" },
		{ "Name.DisplayName", "Name" },
		{ "Name.Name", "EInventorySortEnum::Name" },
		{ "Quantity.DisplayName", "Quantity" },
		{ "Quantity.Name", "EInventorySortEnum::Quantity" },
		{ "Rarity.DisplayName", "Rarity" },
		{ "Rarity.Name", "EInventorySortEnum::Rarity" },
		{ "Value.DisplayName", "Value" },
		{ "Value.Name", "EInventorySortEnum::Value" },
		{ "Weight.DisplayName", "Weight" },
		{ "Weight.Name", "EInventorySortEnum::Weight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInventorySortEnum::Name", (int64)EInventorySortEnum::Name },
		{ "EInventorySortEnum::Quantity", (int64)EInventorySortEnum::Quantity },
		{ "EInventorySortEnum::Weight", (int64)EInventorySortEnum::Weight },
		{ "EInventorySortEnum::Rarity", (int64)EInventorySortEnum::Rarity },
		{ "EInventorySortEnum::Value", (int64)EInventorySortEnum::Value },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProgramEngineICA2,
	nullptr,
	"EInventorySortEnum",
	"EInventorySortEnum",
	Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum()
{
	if (!Z_Registration_Info_UEnum_EInventorySortEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInventorySortEnum.InnerSingleton, Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInventorySortEnum.InnerSingleton;
}
// End Enum EInventorySortEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventorySortEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInventorySortEnum_StaticEnum, TEXT("EInventorySortEnum"), &Z_Registration_Info_UEnum_EInventorySortEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1446434626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventorySortEnum_h_248667418(TEXT("/Script/ProgramEngineICA2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventorySortEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventorySortEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
