// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPHousesOnALine.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPHousesOnALine : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPHousesOnALine() {

	}

	void GenerateLevel() override;
	

public:
	TArray<FVector2D> points;
};
