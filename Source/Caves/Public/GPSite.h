// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPSite.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPSite : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPSite(){}
	void GenerateLevel() override;
};
