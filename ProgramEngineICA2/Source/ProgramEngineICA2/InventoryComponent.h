// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlotStruct.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROGRAMENGINEICA2_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	// Blueprintable properties

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 InventorySize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	bool bIsStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 MaxStackSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TMap<FString, FSlotStruct> SlotMap;


	// Blueprintable functions
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddItem(UItem* NewItem, int32 Amount,bool& AllItemsStacked, int32& Remainder);

	UFUNCTION(BlueprintCallable,Category = "Inventory")
	bool GetItemAmount(UItem* Item, int32& Amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool GetItemAmountByName(FString ItemName, int32& Amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	TArray<FSlotStruct> GetAllItems();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveItem(UItem* Item, int32 AmountToRemove);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveItemByName(FString ItemName, int32 AmountToRemove);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveAllItems();


	// Helper functions
	UFUNCTION()
	int32 AddItemStackable(UItem* NewItem, FString ItemString, int32 Amount, int32& Remainder);

	UFUNCTION()
	void AddNewItem(UItem* NewItem, FString ItemString, int32 Amount);

	UFUNCTION()
	bool FoundInMap(UItem* Item);

	UFUNCTION()
	int32 GetFirstEmptySlotIndex();

	UFUNCTION()
	TArray<FString> FindItemSerializedNamesFromItemName(FString ItemName);

	UFUNCTION()
	TMap<FString, int32> FindItemCountsFromItemName(FString ItemName);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
