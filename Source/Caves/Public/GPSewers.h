// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPSewers.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPSewers : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPSewers(){}

	void GenerateLevel() override;
	
};
