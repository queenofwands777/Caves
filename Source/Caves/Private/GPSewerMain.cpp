// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSewerMain.h"



void UGPSewerMain::GenerateLevel() {


	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;

	FVector2D start_loc = CurrentLocation();

	DrawLineF(direction, lifetime, 10);

	SetCursor(start_loc);

	DrawLineA(direction, lifetime, 4, Material::sewer_water);





}