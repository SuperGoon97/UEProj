// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgramEngineICA2/SlotStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotStruct() {}

// Begin Cross Module References
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_UItem_NoRegister();
PROGRAMENGINEICA2_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
UPackage* Z_Construct_UPackage__Script_ProgramEngineICA2();
// End Cross Module References

// Begin ScriptStruct FSlotStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotStruct;
class UScriptStruct* FSlotStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotStruct, (UObject*)Z_Construct_UPackage__Script_ProgramEngineICA2(), TEXT("SlotStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton;
}
template<> PROGRAMENGINEICA2_API UScriptStruct* StaticStruct<FSlotStruct>()
{
	return FSlotStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlotStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SlotStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "Slot Data" },
		{ "ModuleRelativePath", "SlotStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Slot Data" },
		{ "ModuleRelativePath", "SlotStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Slot Data" },
		{ "ModuleRelativePath", "SlotStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStruct, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStruct, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStruct, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProgramEngineICA2,
	nullptr,
	&NewStructOps,
	"SlotStruct",
	Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers),
	sizeof(FSlotStruct),
	alignof(FSlotStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton, Z_Construct_UScriptStruct_FSlotStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton;
}
// End ScriptStruct FSlotStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_SlotStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlotStruct::StaticStruct, Z_Construct_UScriptStruct_FSlotStruct_Statics::NewStructOps, TEXT("SlotStruct"), &Z_Registration_Info_UScriptStruct_SlotStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotStruct), 402799882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_SlotStruct_h_1586789423(TEXT("/Script/ProgramEngineICA2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_SlotStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_SlotStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
