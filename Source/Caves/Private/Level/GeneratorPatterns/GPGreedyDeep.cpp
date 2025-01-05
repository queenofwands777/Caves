// Fill out your copyright notice in the Description page of Project Settings.


#include "GPGreedyDeep.h"
#include"TerrainGenerator.h"
#include"GPMineshaft.h"



void UGPGreedyDeep::GenerateLevel() {

	SetHeading(90 * FMath::RandHelper(4));



	DrawLineF(direction, 30, 2);

	DrawLineF(direction, 25, 8);

	MoveCursor(direction, -10);

	MoveCursor(perp, 5);

	DrawLineF(direction, 30, 2);

	TArray<FVector2D> mineshaft_ends;

	float spread = 45;
	for (int i = -1; i <= 1; i++) {
		UGPMineshaft* mineshaft = NewObject<UGPMineshaft>(this);
		mineshaft->Init(100, num_rooms, cursor_x, cursor_y, heading + (spread * i), parent);
		mineshaft_ends.Add({ mineshaft->cursor_x, mineshaft->cursor_y });
	}

	for (int i = 0; i < mineshaft_ends.Num(); i++) {
		parent->MakeIrregularRoom(mineshaft_ends[i][0], mineshaft_ends[i][1], 10, 10, 5);
	}





}