// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPHousesOnAStreet.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPHousesOnAStreet : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPHousesOnAStreet(){}

	void GenerateLevel() override;
	
};
