// Fill out your copyright notice in the Description page of Project Settings.


#include "GPTomb.h"
#include"TerrainGenerator.h"


void UGPTomb::GenerateLevel() {



	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;















}
