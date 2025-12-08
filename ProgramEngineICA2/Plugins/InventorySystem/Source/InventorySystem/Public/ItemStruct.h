// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "RarityEnum.h"
#include "ItemStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Item Data")
	FString ItemName = "ItemName";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	float ItemWeight = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	ERarityEnum ItemRarity = ERarityEnum::Common;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 ItemValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	UTexture* ItemIcon = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool bIsStackable = true;
};