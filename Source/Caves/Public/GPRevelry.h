// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPRevelry.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPRevelry : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPRevelry(){}

	void GenerateLevel() override;
};
