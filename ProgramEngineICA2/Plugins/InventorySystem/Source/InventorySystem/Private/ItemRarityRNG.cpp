// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemRarityRNG.h"

UItemRarityRNG::UItemRarityRNG()
{
	RarityDropRate = {
		{ERarityEnum::Common, 50.0f},
		{ERarityEnum::Uncommon, 30.0f},
		{ERarityEnum::Rare, 15.0f},
		{ERarityEnum::Epic, 4.0f},
		{ERarityEnum::Legendary, 1.0f}
	};
}

ERarityEnum UItemRarityRNG::GetRandomRarity()
{
	TArray<float> Values;
	RarityDropRate.GenerateValueArray(Values);
	float SumDropRate = 0.0f;
	for (float Value : Values)
	{
		SumDropRate += Value;
	}
	int j = 0;
	for (int i = 0; i < Values.Num(); i++)
	{
		j = Values.Num() - 1 - i;
		for (j; j > i; j--)
		{
			Values[i] += Values[j];
		}
	}
	float RandomValue = FMath::FRandRange(0.0f, SumDropRate);
	for (int i = Values.Num() - 1; i >= 0 ; i--)
	{
		if (RandomValue <= Values[i])
		{
			TArray<ERarityEnum> Keys;
			RarityDropRate.GetKeys(Keys);
			return Keys[i];
		}
	}
	return ERarityEnum();
}

void UItemRarityRNG::SetRarityDropRate(TMap<ERarityEnum, float> NewDropRate)
{
	// Stops copying over old values that are not in the new map
	TArray<ERarityEnum> Keys;
	NewDropRate.GetKeys(Keys);
	for (ERarityEnum Key : Keys)
	{
		RarityDropRate.Add(Key, NewDropRate[Key]);
	}
}
