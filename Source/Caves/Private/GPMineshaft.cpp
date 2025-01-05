// Fill out your copyright notice in the Description page of Project Settings.


#include "GPMineshaft.h"
#include"TerrainGenerator.h"

void UGPMineshaft::GenerateLevel() {

	for (int i = 0; i < lifetime; i++) {
		ChangeHeading(FMath::FRandRange(-10.0, 10.0));
		

		cursor_x += direction[0];
		cursor_y += direction[1];

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);











	}



}