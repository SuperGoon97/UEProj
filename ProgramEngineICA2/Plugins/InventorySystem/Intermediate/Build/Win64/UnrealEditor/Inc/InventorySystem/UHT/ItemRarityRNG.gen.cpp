// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemRarityRNG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemRarityRNG() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemRarityRNG();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemRarityRNG_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_ERarityEnum();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class UItemRarityRNG Function GetRandomRarity
struct Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics
{
	struct ItemRarityRNG_eventGetRandomRarity_Parms
	{
		ERarityEnum ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drop RNG" },
		{ "ModuleRelativePath", "Public/ItemRarityRNG.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemRarityRNG_eventGetRandomRarity_Parms, ReturnValue), Z_Construct_UEnum_InventorySystem_ERarityEnum, METADATA_PARAMS(0, nullptr) }; // 4047476964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemRarityRNG, nullptr, "GetRandomRarity", nullptr, nullptr, Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::ItemRarityRNG_eventGetRandomRarity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::ItemRarityRNG_eventGetRandomRarity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemRarityRNG::execGetRandomRarity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERarityEnum*)Z_Param__Result=P_THIS->GetRandomRarity();
	P_NATIVE_END;
}
// End Class UItemRarityRNG Function GetRandomRarity

// Begin Class UItemRarityRNG Function SetRarityDropRate
struct Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics
{
	struct ItemRarityRNG_eventSetRarityDropRate_Parms
	{
		TMap<ERarityEnum,float> NewDropRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drop RNG" },
		{ "ModuleRelativePath", "Public/ItemRarityRNG.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDropRate_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDropRate_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDropRate_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewDropRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate_ValueProp = { "NewDropRate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate_Key_KeyProp = { "NewDropRate_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InventorySystem_ERarityEnum, METADATA_PARAMS(0, nullptr) }; // 4047476964
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate = { "NewDropRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemRarityRNG_eventSetRarityDropRate_Parms, NewDropRate), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4047476964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::NewProp_NewDropRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemRarityRNG, nullptr, "SetRarityDropRate", nullptr, nullptr, Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::ItemRarityRNG_eventSetRarityDropRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::ItemRarityRNG_eventSetRarityDropRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemRarityRNG::execSetRarityDropRate)
{
	P_GET_TMAP(ERarityEnum,float,Z_Param_NewDropRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRarityDropRate(Z_Param_NewDropRate);
	P_NATIVE_END;
}
// End Class UItemRarityRNG Function SetRarityDropRate

// Begin Class UItemRarityRNG
void UItemRarityRNG::StaticRegisterNativesUItemRarityRNG()
{
	UClass* Class = UItemRarityRNG::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRandomRarity", &UItemRarityRNG::execGetRandomRarity },
		{ "SetRarityDropRate", &UItemRarityRNG::execSetRarityDropRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemRarityRNG);
UClass* Z_Construct_UClass_UItemRarityRNG_NoRegister()
{
	return UItemRarityRNG::StaticClass();
}
struct Z_Construct_UClass_UItemRarityRNG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemRarityRNG.h" },
		{ "ModuleRelativePath", "Public/ItemRarityRNG.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityDropRate_MetaData[] = {
		{ "Category", "Drop RNG" },
		{ "ModuleRelativePath", "Public/ItemRarityRNG.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RarityDropRate_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RarityDropRate_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RarityDropRate_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RarityDropRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemRarityRNG_GetRandomRarity, "GetRandomRarity" }, // 2513995531
		{ &Z_Construct_UFunction_UItemRarityRNG_SetRarityDropRate, "SetRarityDropRate" }, // 3615532662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemRarityRNG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate_ValueProp = { "RarityDropRate", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate_Key_KeyProp = { "RarityDropRate_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InventorySystem_ERarityEnum, METADATA_PARAMS(0, nullptr) }; // 4047476964
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate = { "RarityDropRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemRarityRNG, RarityDropRate), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityDropRate_MetaData), NewProp_RarityDropRate_MetaData) }; // 4047476964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemRarityRNG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemRarityRNG_Statics::NewProp_RarityDropRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRarityRNG_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemRarityRNG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRarityRNG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemRarityRNG_Statics::ClassParams = {
	&UItemRarityRNG::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemRarityRNG_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemRarityRNG_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRarityRNG_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemRarityRNG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemRarityRNG()
{
	if (!Z_Registration_Info_UClass_UItemRarityRNG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemRarityRNG.OuterSingleton, Z_Construct_UClass_UItemRarityRNG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemRarityRNG.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemRarityRNG>()
{
	return UItemRarityRNG::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemRarityRNG);
UItemRarityRNG::~UItemRarityRNG() {}
// End Class UItemRarityRNG

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemRarityRNG, UItemRarityRNG::StaticClass, TEXT("UItemRarityRNG"), &Z_Registration_Info_UClass_UItemRarityRNG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemRarityRNG), 2799169348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_2460611706(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
