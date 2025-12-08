// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RarityEnum.generated.h"


UENUM(BlueprintType)
enum class ERarityEnum : uint8
{
	Common	 UMETA(DisplayName = "Common"),
	Uncommon UMETA(DisplayName = "Uncommon"),
	Rare	 UMETA(DisplayName = "Rare"),
	Epic	 UMETA(DisplayName = "Epic"),
	Legendary UMETA(DisplayName = "Legendary")
};
