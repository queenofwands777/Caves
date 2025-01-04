// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPLabyrinth.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPLabyrinth : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPLabyrinth(){}

	void GenerateLevel() override;
};
