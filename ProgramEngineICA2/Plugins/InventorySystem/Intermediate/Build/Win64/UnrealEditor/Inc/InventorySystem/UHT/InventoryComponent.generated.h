// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryComponent;
class UItem;
enum class EInventorySortEnum : uint8;
struct FSlotStruct;
#ifdef INVENTORYSYSTEM_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORYSYSTEM_InventoryComponent_generated_h

#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_12_DELEGATE \
INVENTORYSYSTEM_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_14_DELEGATE \
INVENTORYSYSTEM_API void FOnSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSlotChanged, int32 SlotNumber);


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_16_DELEGATE \
INVENTORYSYSTEM_API void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, UItem* Item, int32 Amount);


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortByQuantity); \
	DECLARE_FUNCTION(execSortByValue); \
	DECLARE_FUNCTION(execSortByRarity); \
	DECLARE_FUNCTION(execSortByWeight); \
	DECLARE_FUNCTION(execSortByName); \
	DECLARE_FUNCTION(execSquashInventory); \
	DECLARE_FUNCTION(execNumberOfSlotsFilledByItemName); \
	DECLARE_FUNCTION(execClearSlotFromIndex); \
	DECLARE_FUNCTION(execGetFirstEmptySlotIndex); \
	DECLARE_FUNCTION(execFoundInMap); \
	DECLARE_FUNCTION(execAddNewItem); \
	DECLARE_FUNCTION(execAddItemStackable); \
	DECLARE_FUNCTION(execMoveFromInventoryToInventory); \
	DECLARE_FUNCTION(execSortInventory); \
	DECLARE_FUNCTION(execIsSlotEmpty); \
	DECLARE_FUNCTION(execRemoveAllItems); \
	DECLARE_FUNCTION(execRemoveItemByName); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execSwapSlots); \
	DECLARE_FUNCTION(execTryMoveAmountFromSlotToSlot); \
	DECLARE_FUNCTION(execTryMoveFromSlotToSlot); \
	DECLARE_FUNCTION(execTryCombineAllSlots); \
	DECLARE_FUNCTION(execTryCombineSlots); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGetItemAmountFromName); \
	DECLARE_FUNCTION(execGetItemAmount); \
	DECLARE_FUNCTION(execAddItem);


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_18_PROLOG
#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
