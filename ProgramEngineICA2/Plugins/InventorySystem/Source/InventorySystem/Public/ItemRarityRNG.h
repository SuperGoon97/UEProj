// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RarityEnum.h"
#include "UObject/NoExportTypes.h"
#include "ItemRarityRNG.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class INVENTORYSYSTEM_API UItemRarityRNG : public UObject
{
	GENERATED_BODY()
	
public:
	
	UItemRarityRNG();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drop RNG")
	TMap<ERarityEnum, float> RarityDropRate;

	UFUNCTION(BlueprintCallable, Category = "Drop RNG")
	ERarityEnum GetRandomRarity();

	UFUNCTION(BlueprintCallable, Category = "Drop RNG")
	void SetRarityDropRate(TMap<ERarityEnum, float> NewDropRate);
};
