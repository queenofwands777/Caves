// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPShop.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPShop : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPShop(){}

	void GenerateLevel() override;

	void PopulateLevel(int num_chests, int num_altars, int num_encounters) override;
};
