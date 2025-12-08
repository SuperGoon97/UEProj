// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlotStruct.h"
#include "InventorySortEnum.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

//Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotChanged,int32,SlotNumber);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAdded, UItem*, Item, int32, Amount);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYSYSTEM_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	// Blueprintable properties

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnInventoryUpdated OnInventoryUpdated;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnSlotChanged OnSlotChanged;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnItemAdded OnItemAdded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 InventorySize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	bool bIsStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 MaxStackSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TArray <FSlotStruct> SlotArray;

	// Blueprintable functions
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddItem(UItem* NewItem, int32 Amount,bool& AllItemsStacked, int32& Remainder);

	UFUNCTION(BlueprintCallable,Category = "Inventory")
	bool GetItemAmount(UItem* Item, int32& Amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 GetItemAmountFromName(FString ItemName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	TArray<FSlotStruct> GetAllItems();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	FSlotStruct GetSlot(int32 SlotIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 TryCombineSlots(int32 Slot1 , int32 Slot2);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void TryCombineAllSlots();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool TryMoveFromSlotToSlot(int32 FromSlotIndex, int32 ToSlotIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool TryMoveAmountFromSlotToSlot(int32 FromSlotIndex, int32 ToSlotIndex, int32 AmountToMove, int32& Remainder);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SwapSlots(int32 Slot1, int32 Slot2);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveItem(UItem* Item, int32 AmountToRemove);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveItemByName(FString ItemName, int32 AmountToRemove);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveAllItems();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool IsSlotEmpty(int32 SlotIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SortInventory(EInventorySortEnum SortType);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void MoveFromInventoryToInventory(UInventoryComponent* TargetInventory, int32 FromSlotIndex, int32 ToSlotIndex, int32 AmountToMove);

	// Helper functions
	UFUNCTION()
	int32 AddItemStackable(UItem* NewItem, int32 Amount, int32& Remainder);

	UFUNCTION()
	void AddNewItem(UItem* NewItem, int32 Amount);

	UFUNCTION()
	bool FoundInMap(UItem* Item);

	UFUNCTION()
	int32 GetFirstEmptySlotIndex();

	UFUNCTION()
	void ClearSlotFromIndex(int32 SlotIndex);

	UFUNCTION()
	int32 NumberOfSlotsFilledByItemName(FString ItemName);

	UFUNCTION()
	int32 SquashInventory();

	UFUNCTION()
	void SortByName(int32 ArraySize);

	UFUNCTION()
	void SortByWeight(int32 ArraySize);

	UFUNCTION()
	void SortByRarity(int32 ArraySize);

	UFUNCTION()
	void SortByValue(int32 ArraySize);

	UFUNCTION()
	void SortByQuantity(int32 ArraySize);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
