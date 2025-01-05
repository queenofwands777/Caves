// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorPattern.h"
#include"TerrainGenerator.h"

// Sets default values
UGeneratorPattern::UGeneratorPattern()
{


}


void UGeneratorPattern::DrawLineF(FVector2D input_direction, float distance, float width) {
	for (float i = 0; i < distance; i += 1) {
		parent->SetTile(cursor_x, cursor_y, DefaultFloorType, width, true);
		MoveCursor(input_direction, 1);
	}
}



void UGeneratorPattern::DrawLineA(FVector2D input_direction, float distance, float width, Material material) {
	for (float i = 0; i < distance; i += 1) {
		parent->SetTile(cursor_x, cursor_y, material, width, true);
		MoveCursor(input_direction, 1);
	}
}