// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPHouse.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPHouse : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPHouse(){}

	void GenerateLevel()override;

public:
	float room_size = 6;
	float room_spacing = 0;
};
