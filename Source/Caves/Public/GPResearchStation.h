// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPResearchStation.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPResearchStation : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPResearchStation(){}

	void GenerateLevel() override;
	
};
