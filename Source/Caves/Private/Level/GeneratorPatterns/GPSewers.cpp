// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSewers.h"
#include"TerrainGenerator.h"
#include"GPSewerMain.h"

void UGPSewers::GenerateLevel() {
	SetHeading(90 * FMath::RandHelper(4));


	DrawLineF(direction, 30, 2);



	TArray<UGPSewerMain*> mains;

	//in theory, this will set sign to 1 and then -1.
	for (int sign = 1; sign >= - 1; sign -= 2) {
		UGPSewerMain* new_main = NewObject<UGPSewerMain>(this);
		new_main->Init(20, num_rooms, cursor_x, cursor_y, heading + (sign * 90), parent);
		mains.Add(new_main);
	}








}