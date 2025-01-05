// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSpirits.h"
#include"TerrainGenerator.h"

void UGPSpirits::GenerateLevel() {

	SetHeading(90 * FMath::RandHelper(4));
	

	DrawLineF(direction, 30, 3);

	parent->MakeIrregularRoom(cursor_x, cursor_y, 30,30,4);

}