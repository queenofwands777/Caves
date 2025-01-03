// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPChapel.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPChapel : public UGeneratorPattern
{
	GENERATED_BODY()
	
	UGPChapel(){}

	void GenerateLevel() override;

};
