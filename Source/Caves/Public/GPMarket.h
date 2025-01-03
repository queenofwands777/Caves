// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPMarket.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPMarket : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPMarket(){}

	void GenerateLevel() override;
	
};
