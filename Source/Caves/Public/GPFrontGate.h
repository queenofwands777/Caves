// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPFrontGate.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPFrontGate : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPFrontGate() {

	}

	void GenerateLevel() override;
	
public:
	FVector2D end_0;
	FVector2D end_1;

};
