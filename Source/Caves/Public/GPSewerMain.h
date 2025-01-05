// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPSewerMain.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPSewerMain : public UGeneratorPattern
{
	GENERATED_BODY()
	UGPSewerMain(){}

	void GenerateLevel() override;
};
