// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPAntarctica.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPAntarctica : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPAntarctica(){}

	void GenerateLevel() override;
	
};
