// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPMineshaft.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPMineshaft : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPMineshaft(){}
	
	void GenerateLevel() override;
	
};
