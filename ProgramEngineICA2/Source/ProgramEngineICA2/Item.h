// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemStruct.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROGRAMENGINEICA2_API UItem : public UObject
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FItemStruct ItemData;
};
