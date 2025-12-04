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
					OnInventoryUpdated.Broadcast();
					//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Yellow, TEXT("Inventory Full!"));
					return; 
				}
				Amount -= ItemsAdded;
				//FString AmountTxt = FString::FromInt(Amount);
				//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Black, FString::Printf(TEXT("Amount = %s"), *AmountTxt));
			}
			
			else if (SlotMap.Num() < InventorySize)
			{
				AmountToTryAdd = 1; // Non-stackable items can only be added one at a time

				ItemSerializedName = ItemName;
				ItemSerializedName.Append(FString::FromInt(GetFirstEmptySlotIndex()));
					
				if (!SlotMap.Contains(ItemSerializedName))
				{
					AddNewItem(NewItem, ItemSerializedName, AmountToTryAdd);

					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added new stack for item: %s"), *ItemSerializedName));
				}
				
				Amount -= AmountToTryAdd;
				Remainder = Amount;
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added item: %s"), *NewItem->ItemData.ItemName));
			}
			else 
			{
				AllItemsStacked = false;
				Remainder = Amount;
				OnInventoryUpdated.Broadcast();
				//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Yellow, TEXT("Inventory Full!"));
				return;
			}

		}

		FString RemainderTxt = FString::FromInt(Remainder);

		//GEngine->AddOnScreenDebugMessage(-1, 200.f, FColor::Emerald, FString::Printf(TEXT("Remainder = %s"), *RemainderTxt));
		AllItemsStacked = true;
		Remainder = 0;
		OnInventoryUpdated.Broadcast();
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added items successfully")));
		return; // Items added successfully
	}
	AllItemsStacked = false;
	Remainder = Amount;
	OnInventoryUpdated.Broadcast();
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

int32 UInventoryComponent::TryCombineSlots(int32 Slot1, int32 Slot2)
{
	FSlotStruct SlotStruct1 = GetSlot(Slot1);
	FSlotStruct SlotStruct2 = GetSlot(Slot2);

	if (SlotStruct1.SlotIndex == SlotStruct2.SlotIndex) { return -1; } // Same slot, do nothing

	if (SlotStruct1.Item != nullptr && SlotStruct2.Item != nullptr)
	{
		if (SlotStruct1.Item->ItemData.ItemName == SlotStruct2.Item->ItemData.ItemName)
		{
			int32 TotalQuantity = SlotStruct1.Quantity + SlotStruct2.Quantity;
			if (TotalQuantity <= MaxStackSize)
			{
				ClearSlotFromIndex(Slot1);
				SlotMap[SlotStruct2.Item->ItemData.ItemName + FString::FromInt(SlotStruct2.SlotIndex)].Quantity = TotalQuantity;
				OnSlotChanged.Broadcast(Slot1);
				OnSlotChanged.Broadcast(Slot2);
				OnInventoryUpdated.Broadcast();
				return 0; // All items combined, no remainder
			}
			else
			{
				int32 Remainder = TotalQuantity - MaxStackSize;
				SlotMap[SlotStruct2.Item->ItemData.ItemName + FString::FromInt(SlotStruct2.SlotIndex)].Quantity = MaxStackSize;
				SlotMap[SlotStruct1.Item->ItemData.ItemName + FString::FromInt(SlotStruct1.SlotIndex)].Quantity = Remainder;
				OnSlotChanged.Broadcast(Slot1);
				OnSlotChanged.Broadcast(Slot2);
				OnInventoryUpdated.Broadcast();
				return Remainder; // Some items combined, return remainder
			}
		}
		OnInventoryUpdated.Broadcast();
		return -1; // Different items, cannot combine
	}
	OnInventoryUpdated.Broadcast();
	return -1; // One or both slots are empty, cannot combine
}

void UInventoryComponent::TryCombineAllSlots()
{
	TArray<FString> ProcessedItemNames = TArray<FString>();
	for (TPair<FString, FSlotStruct>& Key1 : SlotMap)
	{
		FString ItemName1 = Key1.Value.Item->ItemData.ItemName;
		int32 SlotIndex1 = Key1.Value.SlotIndex;
		int32 Remainder = 0;
		if (!ProcessedItemNames.Contains(ItemName1))
		{
			for (TPair<FString, FSlotStruct>& Key2 : SlotMap)
			{
				FString ItemName2 = Key2.Value.Item->ItemData.ItemName;
				if (ItemName1 == ItemName2 && Key1.Value.SlotIndex != Key2.Value.SlotIndex)
				{
					Remainder = TryCombineSlots(SlotIndex1, Key2.Value.SlotIndex);
					OnSlotChanged.Broadcast(SlotIndex1);
					OnSlotChanged.Broadcast(Key2.Value.SlotIndex);
					if (Remainder == 0)
					{
						SlotIndex1 = Key2.Value.SlotIndex; // Update SlotIndex1 to the slot that now contains the combined items
					}
				}
			}
			ProcessedItemNames.Add(ItemName1);
		}
	}
}

bool UInventoryComponent::TryMoveFromSlotToSlot(int32 FromSlotIndex, int32 ToSlotIndex)
{
	if (FromSlotIndex == ToSlotIndex) { return false; } // Same slot, do nothing

	FSlotStruct FromSlot = GetSlot(FromSlotIndex);
	if (FromSlot.Item == nullptr) { return false; }
	FSlotStruct ToSlot = GetSlot(ToSlotIndex);
	if (ToSlot.Item == nullptr)
	{
		// Move item to empty slot
		SlotMap.Remove(FromSlot.Item->ItemData.ItemName + FString::FromInt(FromSlot.SlotIndex));
		FString NewKey = FromSlot.Item->ItemData.ItemName + FString::FromInt(ToSlotIndex);
		FromSlot.SlotIndex = ToSlotIndex;
		SlotMap.Add(NewKey, FromSlot);
		OnSlotChanged.Broadcast(FromSlotIndex);
		OnSlotChanged.Broadcast(ToSlotIndex);
		OnInventoryUpdated.Broadcast();
		return true;
	}
	else if (FromSlot.Item->ItemData.ItemName == ToSlot.Item->ItemData.ItemName)
	{
		TryCombineSlots(FromSlotIndex, ToSlotIndex);
	}
	else 
	{
		SwapSlots(FromSlotIndex, ToSlotIndex);
	}
	return false;
}

bool UInventoryComponent::TryMoveAmountFromSlotToSlot(int32 FromSlotIndex, int32 ToSlotIndex, int32 AmountToMove, int32& Remainder)
{
	if (FromSlotIndex == ToSlotIndex) { Remainder = AmountToMove; return false; } // Same slot, do nothing

	FSlotStruct FromSlot = GetSlot(FromSlotIndex);
	if (FromSlot.Item == nullptr) { Remainder = AmountToMove; return false; }
	FSlotStruct ToSlot = GetSlot(ToSlotIndex);
	if (ToSlot.Item == nullptr)
	{
		// Move item to empty slot
		if (AmountToMove >= FromSlot.Quantity)
		{
			SlotMap.Remove(FromSlot.Item->ItemData.ItemName + FString::FromInt(FromSlot.SlotIndex));
			FString NewKey = FromSlot.Item->ItemData.ItemName + FString::FromInt(ToSlotIndex);
			FromSlot.SlotIndex = ToSlotIndex;
			SlotMap.Add(NewKey, FromSlot);
		}
		else
		{
			FromSlot.Quantity -= AmountToMove;
			SlotMap[FromSlot.Item->ItemData.ItemName + FString::FromInt(FromSlot.SlotIndex)] = FromSlot;
			FSlotStruct NewSlot;
			NewSlot.Item = FromSlot.Item;
			NewSlot.Quantity = AmountToMove;
			NewSlot.SlotIndex = ToSlotIndex;
			FString NewKey = NewSlot.Item->ItemData.ItemName + FString::FromInt(ToSlotIndex);
			SlotMap.Add(NewKey, NewSlot);
		}

		if (FromSlot.Quantity <= 0)
		{
			ClearSlotFromIndex(FromSlotIndex);
		}

		Remainder = 0;
		OnSlotChanged.Broadcast(FromSlotIndex);
		OnSlotChanged.Broadcast(ToSlotIndex);
		OnInventoryUpdated.Broadcast();
		return true;
	}
	else if (ToSlot.Item->ItemData.ItemName == FromSlot.Item->ItemData.ItemName)
	{
		int32 AvailableSpace = MaxStackSize - ToSlot.Quantity;

		ToSlot.Quantity += AmountToMove;
		FromSlot.Quantity -= AmountToMove;
		SlotMap[ToSlot.Item->ItemData.ItemName + FString::FromInt(ToSlot.SlotIndex)] = ToSlot;
		SlotMap[FromSlot.Item->ItemData.ItemName + FString::FromInt(FromSlot.SlotIndex)] = FromSlot;
		if (FromSlot.Quantity <= 0)
		{
			ClearSlotFromIndex(FromSlotIndex);
		}

		if (AvailableSpace >= AmountToMove)
		{
			Remainder = 0;
		}
		else
		{
			Remainder = AmountToMove - AvailableSpace;
		}
		OnSlotChanged.Broadcast(FromSlotIndex);
		OnSlotChanged.Broadcast(ToSlotIndex);
		OnInventoryUpdated.Broadcast();
		return true;
	}
	return false;
}

void UInventoryComponent::SwapSlots(int32 Slot1, int32 Slot2)
{
	FSlotStruct SlotStruct1 = GetSlot(Slot1);
	FSlotStruct SlotStruct2 = GetSlot(Slot2);

	if (SlotStruct1.SlotIndex == SlotStruct2.SlotIndex) { return; } // Same slot, do nothing

	FString Key1 = SlotStruct1.Item->ItemData.ItemName + FString::FromInt(Slot1);
	FString Key2 = SlotStruct2.Item->ItemData.ItemName + FString::FromInt(Slot2);

	SlotStruct1.SlotIndex = Slot2;
	SlotStruct2.SlotIndex = Slot1;

	SlotMap.Remove(Key1);
	SlotMap.Remove(Key2);

	SlotMap.Add(SlotStruct1.Item->ItemData.ItemName + FString::FromInt(Slot2), SlotStruct1);
	SlotMap.Add(SlotStruct2.Item->ItemData.ItemName + FString::FromInt(Slot1), SlotStruct2);

	OnSlotChanged.Broadcast(Slot1);
	OnSlotChanged.Broadcast(Slot2);
	OnInventoryUpdated.Broadcast();
}

void UInventoryComponent::RemoveAllItems() 
{
	SlotMap.Empty();
	for (int32 i = 0; i < InventorySize; i++)
	{
		OnSlotChanged.Broadcast(i);
	}
	OnInventoryUpdated.Broadcast();
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
		OnSlotChanged.Broadcast(SlotMap[*Map.Key].SlotIndex);
	}
	OnInventoryUpdated.Broadcast();
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
				OnSlotChanged.Broadcast(SlotMap[*Map.Key].SlotIndex);
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Stacked item: %s (Count: %d)"), *ItemName, ItemCountMap[*Map.Key]));
			}
		}
		if (Amount <= 0) 
		{ 
			OnInventoryUpdated.Broadcast();
			return InitialAmount; // All items stacked successfully
		}
		if (SlotMap.Num() < InventorySize)
		{
			ItemSerializedName = NewItem->ItemData.ItemName;
			ItemSerializedName.Append(FString::FromInt(GetFirstEmptySlotIndex()));

			if (!SlotMap.Contains(ItemSerializedName))
			{
				AddNewItem(NewItem, ItemSerializedName, Amount);

				OnInventoryUpdated.Broadcast();
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Added new stack for item: %s"), *ItemSerializedName));
				return Amount; // New stack created successfully
			}
			OnInventoryUpdated.Broadcast();
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error finding stack slot!"));
			return 0; // No available stack slot or error
		}
		OnInventoryUpdated.Broadcast();
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Max stack size reached for item: %s"), *ItemName));
		return 0; // Inventory Full
	}
	else if (SlotMap.Num() < InventorySize)
	{
		ItemSerializedName = NewItem->ItemData.ItemName;
		ItemSerializedName.Append(FString::FromInt(GetFirstEmptySlotIndex()));
		AddNewItem(NewItem, ItemSerializedName, Amount);
	}
	OnInventoryUpdated.Broadcast();
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
	if (SlotMap.Num() == 0) 
	{
		ReturnIndex = 0; // Inventory empty, return first slot index
	}
	else
	{
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
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("First empty slot index: %d"), ReturnIndex));
	return ReturnIndex;
}

FSlotStruct UInventoryComponent::GetSlot(int32 SlotIndex)
{
	for (TPair<FString, FSlotStruct>& Map : SlotMap)
	{
		if (Map.Value.SlotIndex == SlotIndex)
		{
			return Map.Value;
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Slot index %d not found!"), SlotIndex));
	return FSlotStruct();
}

bool UInventoryComponent::IsSlotEmpty(int32 SlotIndex)
{
	for (TPair<FString, FSlotStruct>& Map : SlotMap)
	{
		if (Map.Value.SlotIndex == SlotIndex)
		{
			return false;
		}
	}
	return true;
}

void UInventoryComponent::SortInventory(EInventorySortEnum SortType)
{
	switch (SortType)
	{
	case EInventorySortEnum::Name:
		// Sort by Name
		break;
	case EInventorySortEnum::Quantity:
		// Sort by Quantity
		break;
	case EInventorySortEnum::Weight:
		// Sort by Weight
		break;
	case EInventorySortEnum::Rarity:
		// Sort by Rarity
		break;
	case EInventorySortEnum::Value:
		// Sort by Value
		break;
	default:
		break;
	}
}

void UInventoryComponent::ClearSlotFromIndex(int32 SlotIndex)
{
	for (TPair<FString, FSlotStruct>& Map : SlotMap)
	{
		if (Map.Value.SlotIndex == SlotIndex)
		{
			SlotMap.Remove(*Map.Key);
			OnSlotChanged.Broadcast(SlotIndex);
			OnInventoryUpdated.Broadcast();
			return;
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Slot index %d not found!"), SlotIndex));
}

void UInventoryComponent::ClearSlotFromSlotStruct(FSlotStruct SlotStruct)
{
	ClearSlotFromIndex(SlotStruct.SlotIndex);
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
	OnSlotChanged.Broadcast(NewSlot.SlotIndex);
	OnInventoryUpdated.Broadcast();
	//GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Green, FString::Printf(TEXT("Added new item: %s (Amount: %d) to slot: %d"), *NewItem->ItemData.ItemName, Amount, NewSlot.SlotIndex));
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
