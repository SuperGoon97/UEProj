// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROGRAMENGINEICA2_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 InventorySize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	bool bIsStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 MaxStackSize;



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TArray<UItem*> ItemArray;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TMap<FString, int32> ItemCountMap;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TMap<FString, UItem*> ItemMap;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool AddItem(UItem* NewItem, int32 Amount);

	UFUNCTION()
	int32 AddItemStackable(UItem* NewItem, FString ItemName, FString ItemString, int32 Amount);

	UFUNCTION()
	void AddNewItem(UItem* NewItem, FString ItemString, int32 Amount);

	UFUNCTION()
	bool FoundInMap(FString ItemName);

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
