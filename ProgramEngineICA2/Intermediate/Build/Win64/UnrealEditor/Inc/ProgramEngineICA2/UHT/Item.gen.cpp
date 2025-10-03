// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgramEngineICA2/Item.h"
#include "ProgramEngineICA2/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_UItem();
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_UItem_NoRegister();
PROGRAMENGINEICA2_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
UPackage* Z_Construct_UPackage__Script_ProgramEngineICA2();
// End Cross Module References

// Begin Class UItem
void UItem::StaticRegisterNativesUItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
UClass* Z_Construct_UClass_UItem_NoRegister()
{
	return UItem::StaticClass();
}
struct Z_Construct_UClass_UItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ItemData), Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) }; // 2924732459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProgramEngineICA2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
	&UItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItem()
{
	if (!Z_Registration_Info_UClass_UItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItem.OuterSingleton, Z_Construct_UClass_UItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItem.OuterSingleton;
}
template<> PROGRAMENGINEICA2_API UClass* StaticClass<UItem>()
{
	return UItem::StaticClass();
}
UItem::UItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
UItem::~UItem() {}
// End Class UItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 853489166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_Item_h_2408059521(TEXT("/Script/ProgramEngineICA2"),
	Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
