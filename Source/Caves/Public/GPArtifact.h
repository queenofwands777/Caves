// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPArtifact.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPArtifact : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPArtifact(){}

	void GenerateLevel() override;

};
