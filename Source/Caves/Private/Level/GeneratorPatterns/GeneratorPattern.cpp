// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorPattern.h"
#include"TerrainGenerator.h"

// Sets default values
UGeneratorPattern::UGeneratorPattern()
{


}



TArray<FVector2D> UGeneratorPattern::GetPointsAlongWall(FVector2D start, FVector2D end) {

	TArray<FVector2D> result;
	int step_size = 10;
	bool searching = true;
	int limit = 100;
	SetCursor(start);
	FVector2D probe_location = CurrentLocation();
	FVector2D next_location = CurrentLocation();
	while (searching) {
		limit--;
		result.Add(CurrentLocation());

		FVector2D direction_to_end = { end_loc[0] - cursor_x, end_loc[1] - cursor_y };
		direction_to_end.Normalize();





		FVector2D delta_location = probe_location - next_location;
		delta_location.Normalize();

		float distance_to_end = 1;
		float attenuation = 3;
		probe_location = {
						(cursor_x)+
						(direction[0] * ((step_size * distance_to_end) / (attenuation))) +
						(direction_to_end[0] * ((step_size) / (attenuation * distance_to_end))) +
						(delta_location[0] * ((step_size) / (attenuation))),

						(cursor_y)+
						(direction[1] * ((step_size * distance_to_end) / (attenuation))) +
						(direction_to_end[1] * ((step_size) / (attenuation * distance_to_end))) +
						(delta_location[1] * ((step_size) / (attenuation))), };
		bool target_found = false;
		int i = 1;
		while (!target_found) {
			i++;
			for (int x = -i; x <= i; x++) {
				for (int y = -i; y <= i; y++) {

					FVector2D check_tile = { probe_location[0] + x,probe_location[1] + y };
					if (parent->GetTile(check_tile[0], check_tile[1])->GetTileIndex() == parent->floor_info->void_material) {

						for (int xx = -1; xx <= 1; xx++) {
							for (int yy = -1; yy <= 1; yy++) {

								if (parent->GetTile(check_tile[0] + xx, check_tile[1] + yy)->GetTileIndex() == parent->floor_info->wall_material) {
									target_found = true;
									next_location = check_tile;
								}




							}
						}





					}


				}
			}

			if (i >= 5) {
				target_found = true;
			}

		}


		SetCursor(next_location);




		distance_to_end = FVector2D::Distance({ cursor_x, cursor_y }, end_loc);

		if (distance_to_end < (step_size)) {
			result.Add(CurrentLocation());
			searching = false;
		} if (limit <= 0) {
			searching = false;
		}
	}








	return result;

}

void UGeneratorPattern::PlaceObject(FVector2D location, OBJECTS object, FRotator object_rotation) {


	int TILE_SIZE = parent->TILE_SIZE;
	FVector shelf_location_1 = { float(cursor_x * parent->TILE_SIZE) - (FMath::Sign(direction[0]) * parent->TILE_SIZE / 2) - 8, 1, float(cursor_y * parent->TILE_SIZE) - (16 * parent->TILE_SIZE) + 8 };
	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::Shelf], shelf_location_1, object_rotation);
}

void UGeneratorPattern::PopulateLevel(int num_chests, int num_altars, int num_encounters) {





	for (int i = 0; i < num_encounters; i++) {
		int max_rooms = parent->rooms.Num();
		if (max_rooms > 0) {
			int rand_room = FMath::RandRange(0, max_rooms - 1);
			float room_x = parent->rooms[rand_room].x;
			float room_y = parent->rooms[rand_room].y;


			AEncounter* encounter = parent->floor_info->GetEncounter();
			parent->PlaceEncounter(encounter, room_x, room_y);

			parent->rooms.RemoveAt(rand_room);

		}
	}

	for (int i = 0; i < num_altars; i++) {
		int max_rooms = parent->rooms.Num();
		if (max_rooms > 0) {
			int rand_room = FMath::RandRange(0, max_rooms - 1);
			float room_x = parent->rooms[rand_room].x;
			float room_y = parent->rooms[rand_room].y;


			//place altar here
			AEncounter* encounter = parent->floor_info->GetEncounter();
			parent->PlaceEncounter(encounter->AddObject(OBJECTS::Altar), room_x, room_y);

			parent->rooms.RemoveAt(rand_room);
		}

	}

	for (int i = 0; i < num_chests; i++) {
		int max_rooms = parent->rooms.Num();
		if (max_rooms > 0) {
			int rand_room = FMath::RandRange(0, max_rooms - 1);
			float room_x = parent->rooms[rand_room].x;
			float room_y = parent->rooms[rand_room].y;

			//place chest here
			AEncounter* encounter = parent->floor_info->GetEncounter();
			parent->PlaceEncounter(encounter->AddObject(OBJECTS::Chest), room_x, room_y);

			parent->rooms.RemoveAt(rand_room);

		}
	}










}




void UGeneratorPattern::DrawShakyLine(FVector2D input_direction, int distance, int width, float shakiness, MaterialType material) {

	int negative_half_width = (width - (width % 2)) / 2;
	int positive_half_width = negative_half_width + (width % 2);

	for (int i = 0; i < distance; i++) {
		MoveCursor(direction, 1);
		for (int p = -negative_half_width; p <= positive_half_width; p++) {

			float rand_x = FMath::FRandRange(-shakiness, shakiness);
			float rand_y = FMath::FRandRange(-shakiness, shakiness);
			parent->SetTile(cursor_x + (perp[0] * p) + rand_x, cursor_y + (perp[1] * p) + rand_y, material, width, true);

		}
	}
}


void UGeneratorPattern::DrawLineF(FVector2D input_direction, float distance, float width) {
	for (float i = 0; i < distance; i += 1) {
		parent->SetTile(cursor_x, cursor_y, DefaultFloorMaterial(), width, true);
		MoveCursor(input_direction, 1);
	}
}



void UGeneratorPattern::DrawLine(FVector2D input_direction, float distance, float width, MaterialType material) {
	for (float i = 0; i < distance; i += 1) {
		parent->SetTile(cursor_x, cursor_y, material, width, true);
		MoveCursor(input_direction, 1);
	}
}

void UGeneratorPattern::DrawDot(int size, MaterialType material, FVector2D input_location) {
	int is_odd = size % 2;
	int is_even = 1 - is_odd;
	float offset_x = ((size - is_odd)/2) - is_even;
	float offset_y = ((size - is_odd) / 2) - is_even;
	
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			parent->SetTile(input_location[0] + offset_x + x, input_location[1] + offset_y + y, material, 1, MaterialTypes[material] == Abstract::type_floor);
		}
	}
}


void UGeneratorPattern::DrawDot(int size, MaterialType material) {
	int is_odd = size % 2;
	int is_even = 1 - is_odd;
	float offset_x = -(((size - is_odd) / 2) - is_even);
	float offset_y = -(((size - is_odd) / 2) - is_even);

	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			parent->SetTile(cursor_x + offset_x + x, cursor_y + offset_y + y, material, 1, MaterialTypes[material] == Abstract::type_floor);
		}
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

void UGeneratorPattern::PlaceSpawn(FVector2D location) {
	FVector spawn_location = { float((location[0] - 2) * parent->TILE_SIZE) + (1.5 * parent->TILE_SIZE), 4, float((location[1]) * parent->TILE_SIZE) - (15.5 * parent->TILE_SIZE)};
	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::PlayerSpawn], spawn_location, { 0,0,0 });

}void UGeneratorPattern::PlaceExit(FVector2D location) {
	FVector exit_location = { float((location[0] - 2) * parent->TILE_SIZE) + (1.5 * parent->TILE_SIZE), 0.1, float((location[1]) * parent->TILE_SIZE) - (15.5 * parent->TILE_SIZE)};
	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::Exit], exit_location, { 0,0,0 });

	has_exit = true;

}

MaterialType UGeneratorPattern::DefaultFloorMaterial() {
	return (MaterialType)parent->floor_info->floor_material;
}

MaterialType UGeneratorPattern::DefaultWallMaterial() {
	return (MaterialType)parent->floor_info->wall_material;
}

MaterialType UGeneratorPattern::DefaultVoidMaterial() {
	return (MaterialType)parent->floor_info->void_material;
}