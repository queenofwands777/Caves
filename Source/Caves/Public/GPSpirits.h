// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPSpirits.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPSpirits : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPSpirits(){}

	void GenerateLevel() override;
	
};
