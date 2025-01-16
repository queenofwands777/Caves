// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPCompound.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPCompound : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPCompound(){}

	void GenerateLevel() override;
	
};
