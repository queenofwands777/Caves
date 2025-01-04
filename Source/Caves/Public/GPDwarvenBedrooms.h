// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPDwarvenBedrooms.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPDwarvenBedrooms : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPDwarvenBedrooms(){}

	void GenerateLevel() override;
	
};
