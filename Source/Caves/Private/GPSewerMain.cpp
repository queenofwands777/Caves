// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSewerMain.h"



void UGPSewerMain::GenerateLevel() {





	FVector2D start_loc = CurrentLocation();

	DrawLineF(direction, lifetime, 10);

	SetCursor(start_loc);

	DrawLine(direction, lifetime, 4, MaterialType::sewer_water);





}