// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSewers.h"
#include"TerrainGenerator.h"
#include"GPSewerMain.h"

void UGPSewers::GenerateLevel() {
	heading = 90 * FMath::RandHelper(4);
	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;
	FVector2D perp = { -direction[1], direction[0] };

	DrawLineF(direction, 30, 2);



	TArray<UGPSewerMain*> mains;

	//in theory, this will set sign to 1 and then -1.
	for (int sign = 1; sign >= - 1; sign -= 2) {
		UGPSewerMain* new_main = NewObject<UGPSewerMain>(this);
		new_main->Init(20, num_rooms, cursor_x, cursor_y, heading + (sign * 90), parent);
		mains.Add(new_main);
	}








}