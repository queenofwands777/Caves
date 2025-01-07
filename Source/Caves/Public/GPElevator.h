// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPElevator.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPElevator : public UGeneratorPattern
{
	GENERATED_BODY()
	UGPElevator(){}

	void GenerateLevel() override;
	
};
