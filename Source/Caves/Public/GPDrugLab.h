// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPDrugLab.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPDrugLab : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPDrugLab(){}

	void GenerateLevel() override;
	
};
