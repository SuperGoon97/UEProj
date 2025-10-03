// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Item Data")
	FString ItemName = "ItemName";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool bIsStackable = true;
};