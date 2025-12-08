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
	SlotArray = TArray<FSlotStruct>();
	SlotArray.SetNum(InventorySize);
	// ...
}

void UInventoryComponent::AddItem(UItem* NewItem, int32 Amount, bool& AllItemsStacked, int32& Remainder)
{
	Remainder = Amount;

	if (NewItem != nullptr)
	{
		if (bIsStackable && NewItem->ItemData.bIsStackable)
		{
			Remainder = AddItemStackable(NewItem, Amount, Remainder);
		}
		else
		{
			while (Amount > 0)
			{
				int32 EmptySlotIndex = GetFirstEmptySlotIndex();
				if (EmptySlotIndex != -1)
				{
					AddNewItem(NewItem, 1);
					Amount--;
					Remainder = Amount;
				}
				else
				{
					Remainder = Amount;
					break; // No more space
				}
			}
		}
	}

	return;
}

bool UInventoryComponent::GetItemAmount(UItem* Item, int32& Amount)
{
	Amount = GetItemAmountFromName(Item->ItemData.ItemName);
	if (Amount > 0) 
	{
		return true;
	}
	return false;
}

TArray<FSlotStruct> UInventoryComponent::GetAllItems()
{
	return SlotArray;
}

int32 UInventoryComponent::TryCombineSlots(int32 Slot1, int32 Slot2)
{
	if (!bIsStackable) { return -1; } // Inventory not stackable
	if (Slot1 == Slot2) { return -1; } // Same slot, do nothing

	FSlotStruct SlotStruct1 = GetSlot(Slot1);
	if (SlotStruct1.Item == nullptr) { return -1; } // Slot 1 is empty, cannot combine
	FSlotStruct SlotStruct2 = GetSlot(Slot2);

	if (SlotStruct1.Item != nullptr && SlotStruct2.Item != nullptr)
	{
		if (!SlotStruct1.Item->ItemData.bIsStackable || !SlotStruct1.Item->ItemData.bIsStackable) { return -1; } // One or both items not stackable, cannot combine
		if (SlotStruct1.Item->ItemData.ItemName == SlotStruct2.Item->ItemData.ItemName)
		{
			int32 TotalQuantity = SlotStruct1.Quantity + SlotStruct2.Quantity;
			if (TotalQuantity <= MaxStackSize)
			{
				ClearSlotFromIndex(Slot1);
				SlotArray[Slot2].Quantity = TotalQuantity;
				OnSlotChanged.Broadcast(Slot1);
				OnSlotChanged.Broadcast(Slot2);
				OnInventoryUpdated.Broadcast();
				return 0; // All items combined, no remainder
			}
			else
			{
				int32 Remainder = TotalQuantity - MaxStackSize;
				SlotArray[Slot2].Quantity = MaxStackSize;
				SlotArray[Slot1].Quantity = Remainder;
				OnSlotChanged.Broadcast(Slot1);
				OnSlotChanged.Broadcast(Slot2);
				OnInventoryUpdated.Broadcast();
				return Remainder; // Some items combined, return remainder
			}
		}
		OnInventoryUpdated.Broadcast();
		return -1; // Different items, cannot combine
	}
	return -1; // One or both slots are empty, cannot combine
}

void UInventoryComponent::TryCombineAllSlots()
{
	if (!bIsStackable) { return; } // Inventory not stackable
	for(int i = 0; i < SlotArray.Num(); i++)
	{
		for(int j = i + 1; j < SlotArray.Num(); j++)
		{
			TryCombineSlots(i, j);
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
		ClearSlotFromIndex(FromSlotIndex);
		SlotArray[ToSlotIndex] = FromSlot;
	}
	else if (FromSlot.Item->ItemData.ItemName == ToSlot.Item->ItemData.ItemName)
	{
		TryCombineSlots(FromSlotIndex, ToSlotIndex);
	}
	else 
	{
		SwapSlots(FromSlotIndex, ToSlotIndex);
	}

	OnSlotChanged.Broadcast(FromSlotIndex);
	OnSlotChanged.Broadcast(ToSlotIndex);
	OnInventoryUpdated.Broadcast();
	return true;
}

bool UInventoryComponent::TryMoveAmountFromSlotToSlot(int32 FromSlotIndex, int32 ToSlotIndex, int32 AmountToMove, int32& Remainder)
{
	if (!bIsStackable) { Remainder = AmountToMove; return false; } // Inventory not stackable
	if (FromSlotIndex == ToSlotIndex) { Remainder = AmountToMove; return false; } // Same slot, do nothing
	if (AmountToMove <= 0) { Remainder = AmountToMove; return false; } // Invalid amount to move
	if (AmountToMove > MaxStackSize) { AmountToMove = MaxStackSize; } // Cap amount to move to max stack size


	FSlotStruct FromSlot = GetSlot(FromSlotIndex);
	if (FromSlot.Item == nullptr) { Remainder = AmountToMove; return false; }
	if (!FromSlot.Item->ItemData.bIsStackable) { Remainder = AmountToMove; return false; } // Item not stackable
	FSlotStruct ToSlot = GetSlot(ToSlotIndex);
	if (ToSlot.Item == nullptr)
	{
		// Move item to empty slot
		if (AmountToMove >= FromSlot.Quantity)
		{
			SlotArray[ToSlotIndex] = FromSlot;
			FromSlot.Quantity = 0;
			Remainder = 0;
		}
		else
		{
			FromSlot.Quantity -= AmountToMove;
			ToSlot = FromSlot;
			ToSlot.Quantity = AmountToMove;
			SlotArray[ToSlotIndex] = ToSlot;
			SlotArray[FromSlotIndex] = FromSlot;
		}

		if (FromSlot.Quantity <= 0)
		{
			ClearSlotFromIndex(FromSlotIndex);
		}
		OnSlotChanged.Broadcast(FromSlotIndex);
		OnSlotChanged.Broadcast(ToSlotIndex);
		OnInventoryUpdated.Broadcast();
		return true;
	}
	if (ToSlot.Item->ItemData.bIsStackable == false) { Remainder = AmountToMove; return false; } // Target item not stackable

	if (ToSlot.Item->ItemData.ItemName == FromSlot.Item->ItemData.ItemName)
	{
		int32 AvailableSpace = MaxStackSize - ToSlot.Quantity;
		if (AvailableSpace >= AmountToMove)
		{
			ToSlot.Quantity += AmountToMove;
			FromSlot.Quantity -= AmountToMove;
			SlotArray[ToSlotIndex] = ToSlot;
			SlotArray[FromSlotIndex] = FromSlot;
			Remainder = 0;
		}

		else
		{
			Remainder = AmountToMove - AvailableSpace;
			AmountToMove = AvailableSpace;
			ToSlot.Quantity += AmountToMove;
			FromSlot.Quantity -= AmountToMove;
			SlotArray[ToSlotIndex] = ToSlot;
			SlotArray[FromSlotIndex] = FromSlot;
		}

		if (FromSlot.Quantity <= 0)
		{
			ClearSlotFromIndex(FromSlotIndex);
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
	if (Slot1 == Slot2) { return; } // Same slot, do nothing

	FSlotStruct SlotStruct1 = GetSlot(Slot1);
	FSlotStruct SlotStruct2 = GetSlot(Slot2);

	SlotArray[Slot1] = SlotStruct2;
	SlotArray[Slot2] = SlotStruct1;

	OnSlotChanged.Broadcast(Slot1);
	OnSlotChanged.Broadcast(Slot2);
	OnInventoryUpdated.Broadcast();
}

void UInventoryComponent::RemoveAllItems() 
{
	SlotArray.Empty();
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
	for (int32 i = 0; i < SlotArray.Num(); i++)
	{
		if (SlotArray[i].Item != nullptr)
		{
			if (SlotArray[i].Item->ItemData.ItemName == ItemName)
			{
				if (SlotArray[i].Quantity > AmountToRemove)
				{
					SlotArray[i].Quantity -= AmountToRemove;
					OnSlotChanged.Broadcast(i);
					return; // Removed required amount
				}
				else if (SlotArray[i].Quantity == AmountToRemove)
				{
					ClearSlotFromIndex(i);
					return; // Removed required amount
				}
				else
				{
					AmountToRemove -= SlotArray[i].Quantity;
					ClearSlotFromIndex(i);
				}
			}
		}
	}
	OnInventoryUpdated.Broadcast();
}

int32 UInventoryComponent::AddItemStackable(UItem* NewItem, int32 Amount, int32& Remainder)
{
	int32 AmountToAdd = Amount;
	for (int32 i = 0; i < SlotArray.Num(); i++)
	{
		if (SlotArray[i].Item != nullptr)
		{
			if (SlotArray[i].Item->ItemData.ItemName == NewItem->ItemData.ItemName)
			{
				int32 AvailableSpace = MaxStackSize - SlotArray[i].Quantity;
				if (AvailableSpace > 0)
				{
					if (AmountToAdd <= AvailableSpace)
					{
						SlotArray[i].Quantity += AmountToAdd;
						Remainder = 0;
						OnItemAdded.Broadcast(NewItem, AmountToAdd);
						OnSlotChanged.Broadcast(i);
						return Remainder; // All items added
					}
					else
					{
						SlotArray[i].Quantity += AvailableSpace;
						AmountToAdd -= AvailableSpace;
						Remainder = AmountToAdd;
						OnItemAdded.Broadcast(NewItem, AvailableSpace);
						OnSlotChanged.Broadcast(i);
					}
				}
			}
		}
	}
	while (AmountToAdd > 0)
	{
		int32 FirstEmptySlotIndex = GetFirstEmptySlotIndex();
		if (FirstEmptySlotIndex == -1)
		{
			Remainder = AmountToAdd;
			OnInventoryUpdated.Broadcast();
			return Remainder; // Inventory full, return amount added
		}
		if (AmountToAdd <= MaxStackSize)
		{
			AddNewItem(NewItem, AmountToAdd);
			Remainder = 0;
			OnInventoryUpdated.Broadcast();
			return Remainder; // All items added
		}
		else
		{
			AddNewItem(NewItem, MaxStackSize);
			AmountToAdd -= MaxStackSize;
			Remainder = AmountToAdd;
			OnInventoryUpdated.Broadcast();
		}
	}
	return Remainder; // Return amount added
}

bool UInventoryComponent::FoundInMap(UItem* Item)
{
	for (int32 i = 0; i < SlotArray.Num(); i++)
	{
		if (SlotArray[i].Item != nullptr)
		{
			if (SlotArray[i].Item->ItemData.ItemName == Item->ItemData.ItemName)
			{
				return true;
			}
		}
	}
	return false;
}

int32 UInventoryComponent::GetFirstEmptySlotIndex()
{
	int32 ReturnIndex = -1;
	for (int32 i = 0; i < InventorySize; i++)
	{
		if (IsSlotEmpty(i))
		{
			ReturnIndex = i;
			break;
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("First empty slot index: %d"), ReturnIndex));
	return ReturnIndex;
}

FSlotStruct UInventoryComponent::GetSlot(int32 SlotIndex)
{
	return SlotArray[SlotIndex];
}

bool UInventoryComponent::IsSlotEmpty(int32 SlotIndex)
{
	if (SlotArray[SlotIndex].Item == nullptr)
	{
		return true;
	}
	return false;
}

void UInventoryComponent::SortInventory(EInventorySortEnum SortType)
{
	TryCombineAllSlots();
	int32 SquashedSize = SquashInventory();
	switch (SortType)
	{
	case EInventorySortEnum::Name:
		SortByName(SquashedSize);
		break;
	case EInventorySortEnum::Quantity:
		SortByQuantity(SquashedSize);
		break;
	case EInventorySortEnum::Weight:
		SortByWeight(SquashedSize);
		break;
	case EInventorySortEnum::Rarity:
		SortByRarity(SquashedSize);
		break;
	case EInventorySortEnum::Value:
		SortByValue(SquashedSize);
		break;
	default:
		break;
	}
}

void UInventoryComponent::MoveFromInventoryToInventory(UInventoryComponent* TargetInventory, int32 FromSlotIndex, int32 ToSlotIndex, int32 AmountToMove)
{
	if (TargetInventory == nullptr) { return; }
	if (TargetInventory == this) { return; } // Same inventory, do nothing

	bool bIsToSlotEmpty = TargetInventory->IsSlotEmpty(ToSlotIndex);
	if (bIsToSlotEmpty)
	{
		FSlotStruct FromSlot = GetSlot(FromSlotIndex);
		if (AmountToMove >= FromSlot.Quantity)
		{
			TargetInventory->SlotArray[ToSlotIndex] = FromSlot;
			ClearSlotFromIndex(FromSlotIndex);
		}
		else
		{
			FromSlot.Quantity -= AmountToMove;
			FSlotStruct ToSlot = FromSlot;
			ToSlot.Quantity = AmountToMove;
			TargetInventory->SlotArray[ToSlotIndex] = ToSlot;
			SlotArray[FromSlotIndex] = FromSlot;
			OnSlotChanged.Broadcast(FromSlotIndex);
		}
		TargetInventory->OnSlotChanged.Broadcast(ToSlotIndex);
		TargetInventory->OnInventoryUpdated.Broadcast();
		OnInventoryUpdated.Broadcast();
		return;
	}

	FSlotStruct FromSlot = GetSlot(FromSlotIndex);
	if (FromSlot.Item == nullptr) { return; }
	FSlotStruct ToSlot = TargetInventory->GetSlot(ToSlotIndex);
	if (ToSlot.Item == nullptr) { return; }
	int32 AvailableSpace = TargetInventory->MaxStackSize - ToSlot.Quantity;
	

	if (FromSlot.Item->ItemData.ItemName == ToSlot.Item->ItemData.ItemName)
	{
		if (AvailableSpace <= 0) { return; } // No space to move
		if (AmountToMove <= AvailableSpace)
		{
			ToSlot.Quantity += AmountToMove;
			FromSlot.Quantity -= AmountToMove;
			TargetInventory->SlotArray[ToSlotIndex] = ToSlot;
			if (FromSlot.Quantity <= 0)
			{
				ClearSlotFromIndex(FromSlotIndex);
			}
			else
			{
				SlotArray[FromSlotIndex] = FromSlot;
			}
			TargetInventory->OnSlotChanged.Broadcast(ToSlotIndex);
			OnSlotChanged.Broadcast(FromSlotIndex);
		}
		else
		{
			ToSlot.Quantity += AvailableSpace;
			FromSlot.Quantity -= AvailableSpace;
			TargetInventory->SlotArray[ToSlotIndex] = ToSlot;
			SlotArray[FromSlotIndex] = FromSlot;
			TargetInventory->OnSlotChanged.Broadcast(ToSlotIndex);
			OnSlotChanged.Broadcast(FromSlotIndex);
		}
	}
	else
	{
		SlotArray[FromSlotIndex] = ToSlot;
		TargetInventory->SlotArray[ToSlotIndex] = FromSlot;
	}
	TargetInventory->OnInventoryUpdated.Broadcast();
	OnInventoryUpdated.Broadcast();
}

void UInventoryComponent::ClearSlotFromIndex(int32 SlotIndex)
{
	SlotArray[SlotIndex] = FSlotStruct(); // Reset the slot struct at the given index
	OnSlotChanged.Broadcast(SlotIndex);
	OnInventoryUpdated.Broadcast();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Slot index %d not found!"), SlotIndex));
}

int32 UInventoryComponent::NumberOfSlotsFilledByItemName(FString ItemName)
{
	int32 Count = 0;
	for (int32 i = 0; i < InventorySize; i++) 
	{
		if (SlotArray[i].Item->ItemData.ItemName == ItemName)
		{
			Count++;
		}
	}
	return Count;
}

int32 UInventoryComponent::SquashInventory()
{
	TArray<FSlotStruct> NewSlotArray;
	NewSlotArray.SetNum(InventorySize);
	int32 NewIndex = 0;
	for (int32 i = 0; i < InventorySize; i++)
	{
		if (SlotArray[i].Item != nullptr)
		{
			NewSlotArray[NewIndex] = SlotArray[i];
			NewIndex++;
		}
	}
	SlotArray = NewSlotArray;
	for (int32 i = 0; i < InventorySize; i++)
	{
		OnSlotChanged.Broadcast(i);
	}
	OnInventoryUpdated.Broadcast();
	return NewIndex; // Return number of filled slots
}

void UInventoryComponent::SortByName(int32 SquashedSize)
{
	int n = SquashedSize;
	for(int i = 0; i < n-1; i++)
	{
		bool swapped = false;
		for(int j = 0; j < n - i - 1; j++)
		{
			if (SlotArray[j].Item->ItemData.ItemName > SlotArray[j+1].Item->ItemData.ItemName)
			{
				SwapSlots(j, j + 1);
				swapped = true;
			}
		}
		if (!swapped)
		{
			break; // Array is sorted
		}
	}
}

void UInventoryComponent::SortByWeight(int32 SquashedSize)
{
	int n = SquashedSize;
	for(int i = 0; i < n-1; i++)
	{
		bool swapped = false;
		for(int j = 0; j < n - i - 1; j++)
		{
			if (SlotArray[j].Item->ItemData.ItemWeight > SlotArray[j+1].Item->ItemData.ItemWeight)
			{
				SwapSlots(j, j + 1);
				swapped = true;
			}
		}
		if (!swapped)
		{
			break; // Array is sorted
		}
	}
}

void UInventoryComponent::SortByRarity(int32 SquashedSize)
{
	int n = SquashedSize;
	for(int i = 0; i < n-1; i++)
	{
		bool swapped = false;
		for(int j = 0; j < n - i - 1; j++)
		{
			if (SlotArray[j].Item->ItemData.ItemRarity < SlotArray[j+1].Item->ItemData.ItemRarity)
			{
				SwapSlots(j, j + 1);
				swapped = true;
			}
		}
		if (!swapped)
		{
			break; // Array is sorted
		}
	}
}

void UInventoryComponent::SortByValue(int32 SquashedSize)
{
	int n = SquashedSize;
	for(int i = 0; i < n-1; i++)
	{
		bool swapped = false;
		for(int j = 0; j < n - i - 1; j++)
		{
			if (SlotArray[j].Item->ItemData.ItemValue > SlotArray[j+1].Item->ItemData.ItemValue)
			{
				SwapSlots(j, j + 1);
				swapped = true;
			}
		}
		if (!swapped)
		{
			break; // Array is sorted
		}
	}
}

void UInventoryComponent::SortByQuantity(int32 SquashedSize)
{
	int n = SquashedSize;
	for(int i = 0; i < n-1; i++)
	{
		bool swapped = false;
		for(int j = 0; j < n - i - 1; j++)
		{
			if (SlotArray[j].Quantity < SlotArray[j+1].Quantity)
			{
				SwapSlots(j, j + 1);
				swapped = true;
			}
		}
		if (!swapped)
		{
			break; // Array is sorted
		}
	}
}

int32 UInventoryComponent::GetItemAmountFromName(FString ItemName)
{
	int32 TotalCount = 0;
	for (int32 i = 0; i < InventorySize; i++)
	{
		if (SlotArray[i].Item->ItemData.ItemName == ItemName)
		{
			TotalCount += SlotArray[i].Quantity;
		}
	}
	return TotalCount;
}

void UInventoryComponent::AddNewItem(UItem* NewItem, int32 Amount)
{
	int32 FirstEmptySlotIndex = GetFirstEmptySlotIndex();
	FSlotStruct NewSlot = FSlotStruct();
	NewSlot.Quantity = Amount;
	NewSlot.Item = NewItem;
	SlotArray[FirstEmptySlotIndex] = NewSlot;
	OnItemAdded.Broadcast(NewItem, Amount);
	OnSlotChanged.Broadcast(FirstEmptySlotIndex);
	OnInventoryUpdated.Broadcast();
	//GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Green, FString::Printf(TEXT("Added new item: %s (Amount: %d) to slot: %d"), *NewItem->ItemData.ItemName, Amount, NewSlot.SlotIndex));
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	SlotArray.SetNum(InventorySize);
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
