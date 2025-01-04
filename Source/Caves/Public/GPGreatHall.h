// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPGreatHall.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPGreatHall : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPGreatHall() {

	}

	void GenerateLevel() override;


};
