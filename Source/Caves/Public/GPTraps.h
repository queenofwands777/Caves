// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPTraps.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPTraps : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPTraps(){}

	void GenerateLevel() override;

};
