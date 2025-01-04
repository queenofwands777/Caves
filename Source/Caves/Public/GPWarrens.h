// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPWarrens.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPWarrens : public UGeneratorPattern
{
	GENERATED_BODY()
	

	UGPWarrens(){}


	void GenerateLevel() override;
};
