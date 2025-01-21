// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPCluster.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UGPCluster : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPCluster() {}

	void GenerateLevel() override;
public:
	float room_size = 10;
	float room_spacing = 10;

};
