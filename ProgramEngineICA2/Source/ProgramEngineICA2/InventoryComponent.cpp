// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	InventorySize = 20; // Default inventory size
	bIsStackable = true; // Default stackable
	MaxStackSize = 10; // Default max stack size
	// ...
}

bool UInventoryComponent::AddItem(UItem* NewItem, int32 Amount)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Attempting to add item: %s (Amount: %d)"), *NewItem->ItemData.ItemName, Amount));

	if (NewItem != nullptr) 
	{
		float FSlotsRequired = ceilf((float)Amount / (float)MaxStackSize);
		int32 ISlotsRequired = (int32)FSlotsRequired;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Slots required: %i"), ISlotsRequired));

		FString ItemName = NewItem->ItemData.ItemName;
		FString ItemSerializedName = ItemName;
		ItemSerializedName.Append(FString::FromInt(0));

		bool bIsItemStackable = NewItem->ItemData.bIsStackable;

		int32 StackAmount;
		int32 Remainder = 0;

		for (int32 i = 0; i < ISlotsRequired; i++)
		{
			Remainder = 0;
			StackAmount = Amount;
			if (Amount <= 0) { return true; } // Item amount invalid break
			if (Amount > MaxStackSize) { StackAmount = MaxStackSize; }

			if (bIsStackable && bIsItemStackable) { Remainder = AddItemStackable(NewItem, ItemName, ItemSerializedName, StackAmount); }
			else if (ItemCountMap.Num() < InventorySize)
			{
				StackAmount = 1; // Non-stackable items can only be added one at a time
				AddNewItem(NewItem, ItemSerializedName, StackAmount);

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added item: %s"), *NewItem->ItemData.ItemName));
			}
			else 
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Inventory Full!"));
			}

			Amount -= StackAmount;
			Amount += Remainder;
		}

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added items successfully")));
		return true; // Items added successfully
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Invalid item!"));
	return false; // Invalid item
}

int32 UInventoryComponent::AddItemStackable(UItem* NewItem, FString ItemName, FString ItemSerializedName,int32 Amount)
{
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Attempting to stack item: %s (Amount: %d)"), *ItemName, Amount));

	if (FoundInMap(ItemName))
	{
		int32 Remainder = Amount;

		TMap<FString, int32> MapOfStackSerializedNamesWithInt = TMap<FString, int32>();
		MapOfStackSerializedNamesWithInt = FindItemCountsFromItemName(ItemName);
		// Issue is its finding item0 needs to check all instances of item[n] to find one that has room to stack, make function for this tmrrw
		
		for (TPair<FString,int32>& Map : MapOfStackSerializedNamesWithInt)
		{
			GEngine->AddOnScreenDebugMessage(-1, 500.f, FColor::Purple, FString::Printf(TEXT("Checking stack: %s (Count: %d)"), *Map.Key, Map.Value));
			if (ItemCountMap.Contains(*Map.Key)) { GEngine->AddOnScreenDebugMessage(-1, 500.f, FColor::Purple, FString::Printf(TEXT("Map contains %s"),*Map.Key)); }
			Amount = Remainder;
			if (Map.Value < MaxStackSize)
			{
				int32 countspace = MaxStackSize - ItemCountMap[*Map.Key];
				if ((Amount - countspace) >= 0) { Remainder = Amount - countspace; } // calculate remainder if amount exceeds available space in stack
				if (Remainder < 0) { Remainder = 0; } // no negative remainder
				if (Amount > countspace) { Amount = countspace; } // limit amount to available space in stack
				ItemCountMap[*Map.Key] += Amount;

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Stacked item: %s (Count: %d)"), *ItemName, ItemCountMap[*Map.Key]));
			}
		}

		if (Remainder <= 0) 
		{ 
			return 0; // All items stacked successfully
		}

		if (ItemCountMap.Num() < InventorySize)
		{
			for (int32 i = 1; i <= InventorySize; i++)
			{
				ItemSerializedName = ItemName;
				ItemSerializedName.Append(FString::FromInt(i));

				if (!ItemCountMap.Contains(ItemSerializedName))
				{
					AddNewItem(NewItem, ItemSerializedName, Amount);

					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added new stack for item: %s"), *ItemSerializedName));
					return 0; // New stack created successfully
				}
			}
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error finding stack slot!"));
			return Remainder; // No available stack slot or error
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Max stack size reached for item: %s"), *ItemName));
		return Remainder; // Inventory Full
	}
	else if (ItemCountMap.Num() < InventorySize)
	{
		AddNewItem(NewItem, ItemSerializedName, Amount);
	}
	return 0;
}

bool UInventoryComponent::FoundInMap(FString ItemName)
{
	FString ItemSerializedName;
	for (int32 i = 0; i < InventorySize; i++) 
	{
		ItemSerializedName = ItemName;
		ItemSerializedName.Append(FString::FromInt(i));
		if (ItemCountMap.Contains(ItemSerializedName)) 
		{
			return true;
		}
	}
	return false;
}

TArray<FString> UInventoryComponent::FindItemSerializedNamesFromItemName(FString ItemName)
{
	TArray<FString> FoundItemSerializedNames;
	FString ItemSerializedName;

	for (int32 i = 0; i < InventorySize; i++) 
	{
		ItemSerializedName = ItemName;
		ItemSerializedName.Append(FString::FromInt(i));

		if (ItemCountMap.Contains(ItemSerializedName)) 
		{
			FoundItemSerializedNames.Add(ItemSerializedName);
		}
	}
	return FoundItemSerializedNames;
}

TMap<FString,int32> UInventoryComponent::FindItemCountsFromItemName(FString ItemName)
{
	TMap<FString, int32> FoundItemCounts;
	FString ItemSerializedName;
	for (int32 i = 0; i < InventorySize; i++)
	{
		ItemSerializedName = ItemName;
		ItemSerializedName.Append(FString::FromInt(i));

		if (ItemCountMap.Contains(ItemSerializedName))
		{
			FoundItemCounts.Add(ItemSerializedName, ItemCountMap[ItemSerializedName]);
		}
	}
	return FoundItemCounts;
}

void UInventoryComponent::AddNewItem(UItem* NewItem, FString ItemSerializedName, int32 Amount)
{
	ItemCountMap.Add(ItemSerializedName, Amount);
	ItemMap.Add(ItemSerializedName, NewItem);
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

