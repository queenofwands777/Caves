// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPClusterWalls.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPClusterWalls : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPClusterWalls(){}

public:
	float room_size = 10;
	float room_spacing = 10;

	void GenerateLevel() override;
	
};
