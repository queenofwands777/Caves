// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPSiberia.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPSiberia : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPSiberia(){}

	void GenerateLevel() override;
};
