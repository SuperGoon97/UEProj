// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventorySortEnum.generated.h"

UENUM(BlueprintType)
enum class EInventorySortEnum : uint8
{
	Name UMETA(DisplayName = "Name"),
	Quantity UMETA(DisplayName = "Quantity"),
	Weight UMETA(DisplayName = "Weight"),
	Rarity UMETA(DisplayName = "Rarity"),
	Value UMETA(DisplayName = "Value")
};
