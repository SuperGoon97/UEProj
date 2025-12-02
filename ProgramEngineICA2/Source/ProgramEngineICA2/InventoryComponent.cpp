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
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Attempting to add item: %s (Amount: %d)"), *NewItem->ItemData.ItemName, Amount));

	Remainder = Amount;

	if (NewItem != nullptr) 
	{
		float FSlotsRequired = ceilf((float)Amount / (float)MaxStackSize);
		int32 ISlotsRequired = (int32)FSlotsRequired;

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Slots required: %i"), ISlotsRequired));

		FString ItemName = NewItem->ItemData.ItemName;
		FString ItemSerializedName = ItemName;

		ItemSerializedName.Append(FString::FromInt(0));

		int32 AmountToTryAdd;

		for (int32 i = 0; i < ISlotsRequired; i++)
		{
			if (Amount <= 0) { AllItemsStacked = true; return; } // Item amount is zero or less, nothing to add. Remainder already set to Amount at start of function

			if (Amount > MaxStackSize) { AmountToTryAdd = MaxStackSize; }
			else { AmountToTryAdd = Amount; }

			if (bIsStackable && NewItem->ItemData.bIsStackable) 
			{	
				int32 ItemsAdded = AddItemStackable(NewItem, ItemSerializedName, AmountToTryAdd, Remainder);
				if (ItemsAdded == 0)
				{ 
					AllItemsStacked = false; 
					Remainder = Amount; 
					//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Yellow, TEXT("Inventory Full!"));
					return; 
				}
				Amount -= ItemsAdded;
				FString AmountTxt = FString::FromInt(Amount);
				//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Black, FString::Printf(TEXT("Amount = %s"), *AmountTxt));
			}
			
			else if (SlotMap.Num() < InventorySize)
			{
				AmountToTryAdd = 1; // Non-stackable items can only be added one at a time
				for (int32 j = 1; j <= InventorySize; j++)
				{
					ItemSerializedName = ItemName;
					ItemSerializedName.Append(FString::FromInt(j));
					
					if (!SlotMap.Contains(ItemSerializedName))
					{
						AddNewItem(NewItem, ItemSerializedName, AmountToTryAdd);

						//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added new stack for item: %s"), *ItemSerializedName));
					}
				}
				Amount -= AmountToTryAdd;
				Remainder = Amount;
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added item: %s"), *NewItem->ItemData.ItemName));
			}
			else 
			{
				AllItemsStacked = false;
				Remainder = Amount;
				//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Yellow, TEXT("Inventory Full!"));
				return;
			}

		}

		FString RemainderTxt = FString::FromInt(Remainder);

		//GEngine->AddOnScreenDebugMessage(-1, 200.f, FColor::Emerald, FString::Printf(TEXT("Remainder = %s"), *RemainderTxt));
		AllItemsStacked = true;
		Remainder = 0;
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added items successfully")));
		return; // Items added successfully
	}
	AllItemsStacked = false;
	Remainder = Amount;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Invalid item!"));
	return ; // Invalid item
}

bool UInventoryComponent::GetItemAmount(UItem* Item, int32& Amount)
{
	if (GetItemAmountByName(Item->ItemData.ItemName, Amount)) 
	{
		return true;
	}
	return false;
}

bool UInventoryComponent::GetItemAmountByName(FString ItemName, int32& Amount)
{
	TMap<FString, int32> MapOfStackSerializedNamesWithInt = TMap<FString, int32>();
	MapOfStackSerializedNamesWithInt = FindItemCountsFromItemName(ItemName);
	Amount = 0;
	if (MapOfStackSerializedNamesWithInt.Num() > 0)
	{
		for (TPair<FString, int32>& Map : MapOfStackSerializedNamesWithInt)
		{
			Amount += Map.Value;
		}
		return true;
	}
	return false;
}

TArray<FSlotStruct> UInventoryComponent::GetAllItems()
{
	if (SlotMap.Num() > 0)
	{
		TArray<FSlotStruct> ArrayOfSlots;
		SlotMap.GenerateValueArray(ArrayOfSlots);
		return ArrayOfSlots;
	}
	return TArray<FSlotStruct>();
}

void UInventoryComponent::RemoveAllItems() {
	SlotMap.Empty();
}

void UInventoryComponent::RemoveItem(UItem* Item, int32 AmountToRemove)
{
	RemoveItemByName(Item->ItemData.ItemName, AmountToRemove);
}

void UInventoryComponent::RemoveItemByName(FString ItemName, int32 AmountToRemove)
{
	TMap<FString, int32> MapOfStackSerializedNamesWithInt = TMap<FString, int32>();
	MapOfStackSerializedNamesWithInt = FindItemCountsFromItemName(ItemName);
	for (TPair<FString, int32>& Map : MapOfStackSerializedNamesWithInt)
	{
		if (AmountToRemove <= 0) { return; } // No more items to remove
		int32 CurrentCount = SlotMap[*Map.Key].Quantity;
		if (CurrentCount <= AmountToRemove)
		{
			AmountToRemove -= CurrentCount;
			SlotMap.Remove(*Map.Key);
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Removed item stack: %s"), *Map.Key));
		}
		else
		{
			SlotMap[*Map.Key].Item -= AmountToRemove;
			AmountToRemove = 0;
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Removed %d items from stack: %s"), AmountToRemove, *Map.Key));
		}
	}
}

int32 UInventoryComponent::AddItemStackable(UItem* NewItem, FString ItemSerializedName,int32 Amount, int32& Remainder)
{
	int32 InitialAmount = Amount;
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Attempting to stack item: %s (Amount: %d)"), *ItemName, Amount));

	if (FoundInMap(NewItem))
	{
		TMap<FString, int32> MapOfStackSerializedNamesWithInt = TMap<FString, int32>();
		MapOfStackSerializedNamesWithInt = FindItemCountsFromItemName(NewItem->ItemData.ItemName);
		
		int32 ItterationRemainder = 0;
		for (TPair<FString,int32>& Map : MapOfStackSerializedNamesWithInt)
		{
			if (Map.Value < MaxStackSize)
			{
				Amount += ItterationRemainder; // add itterationremainder from last itteration to amount to try and stack again
				ItterationRemainder = 0; // reset itterationremainder

				int32 Countspace = MaxStackSize - SlotMap[*Map.Key].Quantity;
				int32 Difference = Amount - Countspace;
				if (Difference >= 0) { ItterationRemainder = Amount - Countspace; } // calculate remainder if amount exceeds available space in stack
				if (ItterationRemainder < 0) { ItterationRemainder = 0; } // no negative itterationremainder
				if (Amount > Countspace) { Amount = Countspace; } // limit amount to available space in stack
				if (Amount < Countspace) { ItterationRemainder = 0; } // if amount is less than available space in stack no itterationremainder
				SlotMap[*Map.Key].Quantity += Amount;

				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Stacked item: %s (Count: %d)"), *ItemName, ItemCountMap[*Map.Key]));
			}
		}

		if (Amount <= 0) 
		{ 
			return InitialAmount; // All items stacked successfully
		}

		if (SlotMap.Num() < InventorySize)
		{
			for (int32 i = 1; i <= InventorySize; i++)
			{
				ItemSerializedName = NewItem->ItemData.ItemName;
				ItemSerializedName.Append(FString::FromInt(i));

				if (!SlotMap.Contains(ItemSerializedName))
				{
					AddNewItem(NewItem, ItemSerializedName, Amount);

					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added new stack for item: %s"), *ItemSerializedName));
					return Amount; // New stack created successfully
				}
			}
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error finding stack slot!"));
			return 0; // No available stack slot or error
		}
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Max stack size reached for item: %s"), *ItemName));
		return 0; // Inventory Full
	}
	else if (SlotMap.Num() < InventorySize)
	{
		AddNewItem(NewItem, ItemSerializedName, Amount);
	}
	return Amount;
}

bool UInventoryComponent::FoundInMap(UItem* Item)
{
	FString ItemSerializedName;
	for (int32 i = 0; i < InventorySize; i++) 
	{
		ItemSerializedName = Item->ItemData.ItemName;
		ItemSerializedName.Append(FString::FromInt(i));
		if (SlotMap.Contains(ItemSerializedName)) 
		{
			return true;
		}
	}
	return false;
}

int32 UInventoryComponent::GetFirstEmptySlotIndex()
{
	int32 ReturnIndex = -1;
	TArray<int32> SlotArrayIndices;
	for (TPair<FString, FSlotStruct>& Map : SlotMap)
	{
		SlotArrayIndices.Add(Map.Value.SlotIndex);
	}
	for (int32 i = 0; i < InventorySize; i++)
	{
		if (!SlotArrayIndices.Contains(i))
		{
			ReturnIndex = i;
			break;
		}
	}
	return ReturnIndex;
}

TArray<FString> UInventoryComponent::FindItemSerializedNamesFromItemName(FString ItemName)
{
	TArray<FString> FoundItemSerializedNames;
	FString ItemSerializedName;

	for (int32 i = 0; i < InventorySize; i++) 
	{
		ItemSerializedName = ItemName;
		ItemSerializedName.Append(FString::FromInt(i));

		if (SlotMap.Contains(ItemSerializedName))
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

		if (SlotMap.Contains(ItemSerializedName))
		{
			FoundItemCounts.Add(ItemSerializedName, SlotMap[ItemSerializedName].Quantity);
		}
	}
	return FoundItemCounts;
}

void UInventoryComponent::AddNewItem(UItem* NewItem, FString ItemSerializedName, int32 Amount)
{
	FSlotStruct NewSlot = FSlotStruct();
	NewSlot.SlotIndex = GetFirstEmptySlotIndex();
	NewSlot.Quantity = Amount;
	NewSlot.Item = NewItem;
	SlotMap.Add(ItemSerializedName,NewSlot);
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

