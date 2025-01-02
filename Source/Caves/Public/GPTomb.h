// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPTomb.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPTomb : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPTomb(){}

	void GenerateLevel() override;

};
