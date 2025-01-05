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

void UGeneratorPattern::SetHeading(float new_heading) {
	heading = new_heading;
	float rotation_radians = FMath::DegreesToRadians(heading);

	FVector2D unit_vec = {1,0};

	FVector2D new_direction = {
		(unit_vec[0] * FMath::Cos(rotation_radians)) - (unit_vec[1] * FMath::Sin(rotation_radians)),
		(unit_vec[0] * FMath::Sin(rotation_radians)) + (unit_vec[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;
	perp = { -direction[1], direction[0] };

}

void UGeneratorPattern::ChangeHeading(float delta_heading) {
	heading += delta_heading;
	SetHeading(heading);
}