// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "SlotStruct.generated.h"

USTRUCT(BlueprintType)
struct FSlotStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot Data")
	UItem* Item = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot Data")
	int32 Quantity = 0;
};