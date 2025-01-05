// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSpirits.h"
#include"TerrainGenerator.h"

void UGPSpirits::GenerateLevel() {

	heading = 90 * FMath::RandHelper(4);
	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;
	FVector2D perp = { -direction[1], direction[0] };



}