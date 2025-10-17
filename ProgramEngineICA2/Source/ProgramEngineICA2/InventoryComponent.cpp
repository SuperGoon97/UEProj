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

void UInventoryComponent::AddItem(UItem* NewItem, int32 Amount, bool& AllItemsStacked, int32& Remainder)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Attempting to add item: %s (Amount: %d)"), *NewItem->ItemData.ItemName, Amount));

	Remainder = Amount;

	if (NewItem != nullptr) 
	{
		float FSlotsRequired = ceilf((float)Amount / (float)MaxStackSize);
		int32 ISlotsRequired = (int32)FSlotsRequired;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Slots required: %i"), ISlotsRequired));

		FString ItemName = NewItem->ItemData.ItemName;
		FString ItemSerializedName = ItemName;

		ItemSerializedName.Append(FString::FromInt(0));

		int32 AmountToTryAdd;

		for (int32 i = 0; i < ISlotsRequired; i++)
		{
			if (Amount <= 0) { AllItemsStacked = true; return; } // Item amount is zero or less, nothing to add. Remainder already set to Amount at start of function

			if (Amount > MaxStackSize) { AmountToTryAdd = MaxStackSize; }
			else { AmountToTryAdd = Amount; }

			if (bIsStackable && NewItem->ItemData.bIsStackable) { Amount -= AddItemStackable(NewItem, ItemName, ItemSerializedName, AmountToTryAdd, Remainder); }
			else if (ItemCountMap.Num() < InventorySize)
			{
				AmountToTryAdd = 1; // Non-stackable items can only be added one at a time
				for (int32 j = 1; j <= InventorySize; j++)
				{
					ItemSerializedName = ItemName;
					ItemSerializedName.Append(FString::FromInt(j));

					if (!ItemCountMap.Contains(ItemSerializedName))
					{
						AddNewItem(NewItem, ItemSerializedName, AmountToTryAdd);

						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added new stack for item: %s"), *ItemSerializedName));
					}
					Amount -= AmountToTryAdd;
					Remainder = Amount;
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added item: %s"), *NewItem->ItemData.ItemName));
				}
			}
			else 
			{
				AllItemsStacked = false;
				Remainder = Amount;
				GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Yellow, TEXT("Inventory Full!"));
				return;
			}

		}

		FString RemainderTxt = FString::FromInt(Remainder);

		GEngine->AddOnScreenDebugMessage(-1, 200.f, FColor::Emerald, FString::Printf(TEXT("Remainder = %s"), *RemainderTxt));
		AllItemsStacked = true;
		Remainder = 0;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added items successfully")));
		return; // Items added successfully
	}
	AllItemsStacked = false;
	Remainder = Amount;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Invalid item!"));
	return ; // Invalid item
}

int32 UInventoryComponent::AddItemStackable(UItem* NewItem, FString ItemName, FString ItemSerializedName,int32 Amount, int32& Remainder)
{
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Attempting to stack item: %s (Amount: %d)"), *ItemName, Amount));

	if (FoundInMap(ItemName))
	{
		TMap<FString, int32> MapOfStackSerializedNamesWithInt = TMap<FString, int32>();
		MapOfStackSerializedNamesWithInt = FindItemCountsFromItemName(ItemName);
		
		int32 ItterationRemainder = 0;
		for (TPair<FString,int32>& Map : MapOfStackSerializedNamesWithInt)
		{
			if (Map.Value < MaxStackSize)
			{
				Amount += ItterationRemainder; // add itterationremainder from last itteration to amount to try and stack again
				ItterationRemainder = 0; // reset itterationremainder

				int32 Countspace = MaxStackSize - ItemCountMap[*Map.Key];
				int32 Difference = Amount - Countspace;
				if (Difference >= 0) { ItterationRemainder = Amount - Countspace; } // calculate remainder if amount exceeds available space in stack
				if (ItterationRemainder < 0) { ItterationRemainder = 0; } // no negative itterationremainder
				if (Amount > Countspace) { Amount = Countspace; } // limit amount to available space in stack
				if (Amount < Countspace) { ItterationRemainder = 0; } // if amount is less than available space in stack no itterationremainder
				ItemCountMap[*Map.Key] += Amount;

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Stacked item: %s (Count: %d)"), *ItemName, ItemCountMap[*Map.Key]));
			}
		}

		if (ItterationRemainder <= 0) 
		{ 
			return Amount; // All items stacked successfully
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
					return Amount; // New stack created successfully
				}
			}
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error finding stack slot!"));
			return 0; // No available stack slot or error
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Max stack size reached for item: %s"), *ItemName));
		return 0; // Inventory Full
	}
	else if (ItemCountMap.Num() < InventorySize)
	{
		AddNewItem(NewItem, ItemSerializedName, Amount);
	}
	return Amount;
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

