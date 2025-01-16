// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "CompoundGeneratorPattern.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UCompoundGeneratorPattern : public UGeneratorPattern
{
	GENERATED_BODY()

	UCompoundGeneratorPattern(){}
	
	void GenerateLevel() override;

};
