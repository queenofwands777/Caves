// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPDwarvenIndustry.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPDwarvenIndustry : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPDwarvenIndustry(){}

	void GenerateLevel() override;
};