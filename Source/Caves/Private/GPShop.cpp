// Fill out your copyright notice in the Description page of Project Settings.


#include "GPShop.h"



void UGPShop::GenerateLevel() {

	SetHeading(90 * FMath::RandHelper(4));

	FVector2D start_loc = CurrentLocation();

	PlaceSpawn();
	DrawDot(10);
	MoveCursor(direction, -4);
	PlaceExit();

	SetCursor(start_loc);

	 -



}