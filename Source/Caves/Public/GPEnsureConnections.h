// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPEnsureConnections.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPEnsureConnections : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPEnsureConnections(){}

	void GenerateLevel() override;
	
};
