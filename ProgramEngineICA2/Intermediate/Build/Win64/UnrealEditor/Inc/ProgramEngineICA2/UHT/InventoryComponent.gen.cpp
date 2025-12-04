// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgramEngineICA2/InventoryComponent.h"
#include "ProgramEngineICA2/SlotStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_UInventoryComponent();
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_UItem_NoRegister();
PROGRAMENGINEICA2_API UEnum* Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum();
PROGRAMENGINEICA2_API UFunction* Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature();
PROGRAMENGINEICA2_API UFunction* Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature();
PROGRAMENGINEICA2_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
UPackage* Z_Construct_UPackage__Script_ProgramEngineICA2();
// End Cross Module References

// Begin Delegate FOnInventoryUpdated
struct Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates\n" },
#endif
		{ "ModuleRelativePath", "InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgramEngineICA2, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated)
{
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnInventoryUpdated

// Begin Delegate FOnSlotChanged
struct Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics
{
	struct _Script_ProgramEngineICA2_eventOnSlotChanged_Parms
	{
		int32 SlotNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::NewProp_SlotNumber = { "SlotNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgramEngineICA2_eventOnSlotChanged_Parms, SlotNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::NewProp_SlotNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgramEngineICA2, nullptr, "OnSlotChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::_Script_ProgramEngineICA2_eventOnSlotChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::_Script_ProgramEngineICA2_eventOnSlotChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSlotChanged, int32 SlotNumber)
{
	struct _Script_ProgramEngineICA2_eventOnSlotChanged_Parms
	{
		int32 SlotNumber;
	};
	_Script_ProgramEngineICA2_eventOnSlotChanged_Parms Parms;
	Parms.SlotNumber=SlotNumber;
	OnSlotChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSlotChanged

// Begin Class UInventoryComponent Function AddItem
struct Z_Construct_UFunction_UInventoryComponent_AddItem_Statics
{
	struct InventoryComponent_eventAddItem_Parms
	{
		UItem* NewItem;
		int32 Amount;
		bool AllItemsStacked;
		int32 Remainder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprintable functions\n" },
#endif
		{ "ModuleRelativePath", "InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_AllItemsStacked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllItemsStacked;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remainder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, NewItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_AllItemsStacked_SetBit(void* Obj)
{
	((InventoryComponent_eventAddItem_Parms*)Obj)->AllItemsStacked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_AllItemsStacked = { "AllItemsStacked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventAddItem_Parms), &Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_AllItemsStacked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Remainder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_NewItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_AllItemsStacked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Remainder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddItem)
{
	P_GET_OBJECT(UItem,Z_Param_NewItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_UBOOL_REF(Z_Param_Out_AllItemsStacked);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Remainder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_NewItem,Z_Param_Amount,Z_Param_Out_AllItemsStacked,Z_Param_Out_Remainder);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function AddItem

// Begin Class UInventoryComponent Function AddItemStackable
struct Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics
{
	struct InventoryComponent_eventAddItemStackable_Parms
	{
		UItem* NewItem;
		int32 Amount;
		int32 Remainder;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper functions\n" },
#endif
		{ "ModuleRelativePath", "InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remainder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemStackable_Parms, NewItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemStackable_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemStackable_Parms, Remainder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemStackable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_NewItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_Remainder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItemStackable", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::InventoryComponent_eventAddItemStackable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::InventoryComponent_eventAddItemStackable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddItemStackable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItemStackable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddItemStackable)
{
	P_GET_OBJECT(UItem,Z_Param_NewItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Remainder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddItemStackable(Z_Param_NewItem,Z_Param_Amount,Z_Param_Out_Remainder);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function AddItemStackable

// Begin Class UInventoryComponent Function AddNewItem
struct Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics
{
	struct InventoryComponent_eventAddNewItem_Parms
	{
		UItem* NewItem;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddNewItem_Parms, NewItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddNewItem_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::NewProp_NewItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddNewItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::InventoryComponent_eventAddNewItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::InventoryComponent_eventAddNewItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddNewItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddNewItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddNewItem)
{
	P_GET_OBJECT(UItem,Z_Param_NewItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNewItem(Z_Param_NewItem,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function AddNewItem

// Begin Class UInventoryComponent Function ClearSlotFromIndex
struct Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics
{
	struct InventoryComponent_eventClearSlotFromIndex_Parms
	{
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventClearSlotFromIndex_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ClearSlotFromIndex", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::InventoryComponent_eventClearSlotFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::InventoryComponent_eventClearSlotFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execClearSlotFromIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSlotFromIndex(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function ClearSlotFromIndex

// Begin Class UInventoryComponent Function FoundInMap
struct Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics
{
	struct InventoryComponent_eventFoundInMap_Parms
	{
		UItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFoundInMap_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventFoundInMap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventFoundInMap_Parms), &Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FoundInMap", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::InventoryComponent_eventFoundInMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::InventoryComponent_eventFoundInMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_FoundInMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FoundInMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execFoundInMap)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FoundInMap(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function FoundInMap

// Begin Class UInventoryComponent Function GetAllItems
struct Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics
{
	struct InventoryComponent_eventGetAllItems_Parms
	{
		TArray<FSlotStruct> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(0, nullptr) }; // 2538054010
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2538054010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetAllItems", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::InventoryComponent_eventGetAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::InventoryComponent_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetAllItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSlotStruct>*)Z_Param__Result=P_THIS->GetAllItems();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetAllItems

// Begin Class UInventoryComponent Function GetFirstEmptySlotIndex
struct Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics
{
	struct InventoryComponent_eventGetFirstEmptySlotIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetFirstEmptySlotIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetFirstEmptySlotIndex", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::InventoryComponent_eventGetFirstEmptySlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::InventoryComponent_eventGetFirstEmptySlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetFirstEmptySlotIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFirstEmptySlotIndex();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetFirstEmptySlotIndex

// Begin Class UInventoryComponent Function GetItemAmount
struct Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics
{
	struct InventoryComponent_eventGetItemAmount_Parms
	{
		UItem* Item;
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemAmount_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemAmount_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventGetItemAmount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventGetItemAmount_Parms), &Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemAmount", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::InventoryComponent_eventGetItemAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::InventoryComponent_eventGetItemAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetItemAmount)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetItemAmount(Z_Param_Item,Z_Param_Out_Amount);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetItemAmount

// Begin Class UInventoryComponent Function GetItemAmountFromName
struct Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics
{
	struct InventoryComponent_eventGetItemAmountFromName_Parms
	{
		FString ItemName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemAmountFromName_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemAmountFromName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemAmountFromName", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::InventoryComponent_eventGetItemAmountFromName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::InventoryComponent_eventGetItemAmountFromName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetItemAmountFromName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemAmountFromName(Z_Param_ItemName);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetItemAmountFromName

// Begin Class UInventoryComponent Function GetSlot
struct Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics
{
	struct InventoryComponent_eventGetSlot_Parms
	{
		int32 SlotIndex;
		FSlotStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(0, nullptr) }; // 2538054010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::InventoryComponent_eventGetSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::InventoryComponent_eventGetSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlotStruct*)Z_Param__Result=P_THIS->GetSlot(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetSlot

// Begin Class UInventoryComponent Function IsSlotEmpty
struct Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics
{
	struct InventoryComponent_eventIsSlotEmpty_Parms
	{
		int32 SlotIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventIsSlotEmpty_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventIsSlotEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventIsSlotEmpty_Parms), &Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "IsSlotEmpty", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::InventoryComponent_eventIsSlotEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::InventoryComponent_eventIsSlotEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execIsSlotEmpty)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlotEmpty(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function IsSlotEmpty

// Begin Class UInventoryComponent Function NumberOfSlotsFilledByItemName
struct Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics
{
	struct InventoryComponent_eventNumberOfSlotsFilledByItemName_Parms
	{
		FString ItemName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventNumberOfSlotsFilledByItemName_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventNumberOfSlotsFilledByItemName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "NumberOfSlotsFilledByItemName", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::InventoryComponent_eventNumberOfSlotsFilledByItemName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::InventoryComponent_eventNumberOfSlotsFilledByItemName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execNumberOfSlotsFilledByItemName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NumberOfSlotsFilledByItemName(Z_Param_ItemName);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function NumberOfSlotsFilledByItemName

// Begin Class UInventoryComponent Function RemoveAllItems
struct Z_Construct_UFunction_UInventoryComponent_RemoveAllItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveAllItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveAllItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveAllItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllItems();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveAllItems

// Begin Class UInventoryComponent Function RemoveItem
struct Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics
{
	struct InventoryComponent_eventRemoveItem_Parms
	{
		UItem* Item;
		int32 AmountToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_AmountToRemove = { "AmountToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, AmountToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_AmountToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveItem)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItem(Z_Param_Item,Z_Param_AmountToRemove);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveItem

// Begin Class UInventoryComponent Function RemoveItemByName
struct Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics
{
	struct InventoryComponent_eventRemoveItemByName_Parms
	{
		FString ItemName;
		int32 AmountToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemByName_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::NewProp_AmountToRemove = { "AmountToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemByName_Parms, AmountToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::NewProp_AmountToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItemByName", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::InventoryComponent_eventRemoveItemByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::InventoryComponent_eventRemoveItemByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItemByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItemByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveItemByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemByName(Z_Param_ItemName,Z_Param_AmountToRemove);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveItemByName

// Begin Class UInventoryComponent Function SortByName
struct Z_Construct_UFunction_UInventoryComponent_SortByName_Statics
{
	struct InventoryComponent_eventSortByName_Parms
	{
		int32 ArraySize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArraySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::NewProp_ArraySize = { "ArraySize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSortByName_Parms, ArraySize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::NewProp_ArraySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SortByName", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::InventoryComponent_eventSortByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::InventoryComponent_eventSortByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SortByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SortByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSortByName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ArraySize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortByName(Z_Param_ArraySize);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SortByName

// Begin Class UInventoryComponent Function SortByRarity
struct Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics
{
	struct InventoryComponent_eventSortByRarity_Parms
	{
		int32 ArraySize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArraySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::NewProp_ArraySize = { "ArraySize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSortByRarity_Parms, ArraySize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::NewProp_ArraySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SortByRarity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::InventoryComponent_eventSortByRarity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::InventoryComponent_eventSortByRarity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SortByRarity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SortByRarity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSortByRarity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ArraySize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortByRarity(Z_Param_ArraySize);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SortByRarity

// Begin Class UInventoryComponent Function SortByWeight
struct Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics
{
	struct InventoryComponent_eventSortByWeight_Parms
	{
		int32 ArraySize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArraySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::NewProp_ArraySize = { "ArraySize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSortByWeight_Parms, ArraySize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::NewProp_ArraySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SortByWeight", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::InventoryComponent_eventSortByWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::InventoryComponent_eventSortByWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SortByWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SortByWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSortByWeight)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ArraySize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortByWeight(Z_Param_ArraySize);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SortByWeight

// Begin Class UInventoryComponent Function SortInventory
struct Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics
{
	struct InventoryComponent_eventSortInventory_Parms
	{
		EInventorySortEnum SortType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::NewProp_SortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::NewProp_SortType = { "SortType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSortInventory_Parms, SortType), Z_Construct_UEnum_ProgramEngineICA2_EInventorySortEnum, METADATA_PARAMS(0, nullptr) }; // 1446434626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::NewProp_SortType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::NewProp_SortType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SortInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::InventoryComponent_eventSortInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::InventoryComponent_eventSortInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SortInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SortInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSortInventory)
{
	P_GET_ENUM(EInventorySortEnum,Z_Param_SortType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortInventory(EInventorySortEnum(Z_Param_SortType));
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SortInventory

// Begin Class UInventoryComponent Function SquashInventory
struct Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics
{
	struct InventoryComponent_eventSquashInventory_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSquashInventory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SquashInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::InventoryComponent_eventSquashInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::InventoryComponent_eventSquashInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SquashInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SquashInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSquashInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SquashInventory();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SquashInventory

// Begin Class UInventoryComponent Function SwapSlots
struct Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics
{
	struct InventoryComponent_eventSwapSlots_Parms
	{
		int32 Slot1;
		int32 Slot2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::NewProp_Slot1 = { "Slot1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSwapSlots_Parms, Slot1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::NewProp_Slot2 = { "Slot2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSwapSlots_Parms, Slot2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::NewProp_Slot1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::NewProp_Slot2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SwapSlots", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::InventoryComponent_eventSwapSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::InventoryComponent_eventSwapSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SwapSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SwapSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSwapSlots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot1);
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapSlots(Z_Param_Slot1,Z_Param_Slot2);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SwapSlots

// Begin Class UInventoryComponent Function TryCombineAllSlots
struct Z_Construct_UFunction_UInventoryComponent_TryCombineAllSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_TryCombineAllSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "TryCombineAllSlots", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryCombineAllSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_TryCombineAllSlots_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryComponent_TryCombineAllSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_TryCombineAllSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execTryCombineAllSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryCombineAllSlots();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function TryCombineAllSlots

// Begin Class UInventoryComponent Function TryCombineSlots
struct Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics
{
	struct InventoryComponent_eventTryCombineSlots_Parms
	{
		int32 Slot1;
		int32 Slot2;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::NewProp_Slot1 = { "Slot1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryCombineSlots_Parms, Slot1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::NewProp_Slot2 = { "Slot2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryCombineSlots_Parms, Slot2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryCombineSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::NewProp_Slot1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::NewProp_Slot2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "TryCombineSlots", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::InventoryComponent_eventTryCombineSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::InventoryComponent_eventTryCombineSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_TryCombineSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_TryCombineSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execTryCombineSlots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot1);
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TryCombineSlots(Z_Param_Slot1,Z_Param_Slot2);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function TryCombineSlots

// Begin Class UInventoryComponent Function TryMoveAmountFromSlotToSlot
struct Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics
{
	struct InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms
	{
		int32 FromSlotIndex;
		int32 ToSlotIndex;
		int32 AmountToMove;
		int32 Remainder;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FromSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ToSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToMove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remainder;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_FromSlotIndex = { "FromSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms, FromSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_ToSlotIndex = { "ToSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms, ToSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_AmountToMove = { "AmountToMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms, AmountToMove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms, Remainder), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms), &Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_FromSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_ToSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_AmountToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_Remainder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "TryMoveAmountFromSlotToSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::InventoryComponent_eventTryMoveAmountFromSlotToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execTryMoveAmountFromSlotToSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FromSlotIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ToSlotIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToMove);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Remainder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryMoveAmountFromSlotToSlot(Z_Param_FromSlotIndex,Z_Param_ToSlotIndex,Z_Param_AmountToMove,Z_Param_Out_Remainder);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function TryMoveAmountFromSlotToSlot

// Begin Class UInventoryComponent Function TryMoveFromSlotToSlot
struct Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics
{
	struct InventoryComponent_eventTryMoveFromSlotToSlot_Parms
	{
		int32 FromSlotIndex;
		int32 ToSlotIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FromSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ToSlotIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_FromSlotIndex = { "FromSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryMoveFromSlotToSlot_Parms, FromSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_ToSlotIndex = { "ToSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventTryMoveFromSlotToSlot_Parms, ToSlotIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventTryMoveFromSlotToSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventTryMoveFromSlotToSlot_Parms), &Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_FromSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_ToSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "TryMoveFromSlotToSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::InventoryComponent_eventTryMoveFromSlotToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::InventoryComponent_eventTryMoveFromSlotToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execTryMoveFromSlotToSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FromSlotIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ToSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryMoveFromSlotToSlot(Z_Param_FromSlotIndex,Z_Param_ToSlotIndex);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function TryMoveFromSlotToSlot

// Begin Class UInventoryComponent
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInventoryComponent::execAddItem },
		{ "AddItemStackable", &UInventoryComponent::execAddItemStackable },
		{ "AddNewItem", &UInventoryComponent::execAddNewItem },
		{ "ClearSlotFromIndex", &UInventoryComponent::execClearSlotFromIndex },
		{ "FoundInMap", &UInventoryComponent::execFoundInMap },
		{ "GetAllItems", &UInventoryComponent::execGetAllItems },
		{ "GetFirstEmptySlotIndex", &UInventoryComponent::execGetFirstEmptySlotIndex },
		{ "GetItemAmount", &UInventoryComponent::execGetItemAmount },
		{ "GetItemAmountFromName", &UInventoryComponent::execGetItemAmountFromName },
		{ "GetSlot", &UInventoryComponent::execGetSlot },
		{ "IsSlotEmpty", &UInventoryComponent::execIsSlotEmpty },
		{ "NumberOfSlotsFilledByItemName", &UInventoryComponent::execNumberOfSlotsFilledByItemName },
		{ "RemoveAllItems", &UInventoryComponent::execRemoveAllItems },
		{ "RemoveItem", &UInventoryComponent::execRemoveItem },
		{ "RemoveItemByName", &UInventoryComponent::execRemoveItemByName },
		{ "SortByName", &UInventoryComponent::execSortByName },
		{ "SortByRarity", &UInventoryComponent::execSortByRarity },
		{ "SortByWeight", &UInventoryComponent::execSortByWeight },
		{ "SortInventory", &UInventoryComponent::execSortInventory },
		{ "SquashInventory", &UInventoryComponent::execSquashInventory },
		{ "SwapSlots", &UInventoryComponent::execSwapSlots },
		{ "TryCombineAllSlots", &UInventoryComponent::execTryCombineAllSlots },
		{ "TryCombineSlots", &UInventoryComponent::execTryCombineSlots },
		{ "TryMoveAmountFromSlotToSlot", &UInventoryComponent::execTryMoveAmountFromSlotToSlot },
		{ "TryMoveFromSlotToSlot", &UInventoryComponent::execTryMoveFromSlotToSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprintable properties\n" },
#endif
		{ "ModuleRelativePath", "InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSlotChanged_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotArray_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlotChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySize;
	static void NewProp_bIsStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 3610446830
		{ &Z_Construct_UFunction_UInventoryComponent_AddItemStackable, "AddItemStackable" }, // 1969742252
		{ &Z_Construct_UFunction_UInventoryComponent_AddNewItem, "AddNewItem" }, // 396745377
		{ &Z_Construct_UFunction_UInventoryComponent_ClearSlotFromIndex, "ClearSlotFromIndex" }, // 3815027709
		{ &Z_Construct_UFunction_UInventoryComponent_FoundInMap, "FoundInMap" }, // 1525588262
		{ &Z_Construct_UFunction_UInventoryComponent_GetAllItems, "GetAllItems" }, // 2964330097
		{ &Z_Construct_UFunction_UInventoryComponent_GetFirstEmptySlotIndex, "GetFirstEmptySlotIndex" }, // 1648229975
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemAmount, "GetItemAmount" }, // 2487599492
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemAmountFromName, "GetItemAmountFromName" }, // 2160942067
		{ &Z_Construct_UFunction_UInventoryComponent_GetSlot, "GetSlot" }, // 700908904
		{ &Z_Construct_UFunction_UInventoryComponent_IsSlotEmpty, "IsSlotEmpty" }, // 3388778438
		{ &Z_Construct_UFunction_UInventoryComponent_NumberOfSlotsFilledByItemName, "NumberOfSlotsFilledByItemName" }, // 2929987236
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveAllItems, "RemoveAllItems" }, // 632261554
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItem, "RemoveItem" }, // 1245441958
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItemByName, "RemoveItemByName" }, // 925088112
		{ &Z_Construct_UFunction_UInventoryComponent_SortByName, "SortByName" }, // 82698579
		{ &Z_Construct_UFunction_UInventoryComponent_SortByRarity, "SortByRarity" }, // 3443709093
		{ &Z_Construct_UFunction_UInventoryComponent_SortByWeight, "SortByWeight" }, // 2013979220
		{ &Z_Construct_UFunction_UInventoryComponent_SortInventory, "SortInventory" }, // 1270727192
		{ &Z_Construct_UFunction_UInventoryComponent_SquashInventory, "SquashInventory" }, // 1637148424
		{ &Z_Construct_UFunction_UInventoryComponent_SwapSlots, "SwapSlots" }, // 1761966682
		{ &Z_Construct_UFunction_UInventoryComponent_TryCombineAllSlots, "TryCombineAllSlots" }, // 1824583386
		{ &Z_Construct_UFunction_UInventoryComponent_TryCombineSlots, "TryCombineSlots" }, // 3714259183
		{ &Z_Construct_UFunction_UInventoryComponent_TryMoveAmountFromSlotToSlot, "TryMoveAmountFromSlotToSlot" }, // 3402019426
		{ &Z_Construct_UFunction_UInventoryComponent_TryMoveFromSlotToSlot, "TryMoveFromSlotToSlot" }, // 1550040319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 3995126247
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnSlotChanged = { "OnSlotChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnSlotChanged), Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSlotChanged_MetaData), NewProp_OnSlotChanged_MetaData) }; // 1932130711
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySize_MetaData), NewProp_InventorySize_MetaData) };
void Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((UInventoryComponent*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryComponent), &Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotArray_Inner = { "SlotArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(0, nullptr) }; // 2538054010
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotArray = { "SlotArray", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, SlotArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotArray_MetaData), NewProp_SlotArray_MetaData) }; // 2538054010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnSlotChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProgramEngineICA2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
template<> PROGRAMENGINEICA2_API UClass* StaticClass<UInventoryComponent>()
{
	return UInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// End Class UInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 447053633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventoryComponent_h_660338187(TEXT("/Script/ProgramEngineICA2"),
	Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramEngineICA2_Source_ProgramEngineICA2_InventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
