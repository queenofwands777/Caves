// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GeneratorPattern.h"
#include "DefaultCavesGenerator.generated.h"


UCLASS()
class CAVES_API UDefaultCavesGenerator : public UGeneratorPattern
{
	GENERATED_BODY()

	UDefaultCavesGenerator(){}


	void GenerateLevel() override;
	
	
};
