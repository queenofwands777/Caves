// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPGreedyDeep.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPGreedyDeep : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPGreedyDeep(){}

	void GenerateLevel() override;
};
