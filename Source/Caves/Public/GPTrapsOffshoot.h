// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPTrapsOffshoot.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPTrapsOffshoot : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPTrapsOffshoot(){}

	void GenerateLevel() override;
	
};
