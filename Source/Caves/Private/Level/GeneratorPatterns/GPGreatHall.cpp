// Fill out your copyright notice in the Description page of Project Settings.


#include "GPGreatHall.h"
#include"TerrainGenerator.h"
#include"GPDwarvenBedrooms.h"
#include"GPDwarvenIndustry.h"



void UGPGreatHall::GenerateLevel() {

	SetHeading(90 * FMath::RandHelper(4));


	DrawLineF(direction, 20, 3);

	TArray<FVector2D> points;

	float room_size = 16;
	float step_size = (room_size/2);
	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) { points.Add({ cursor_x, cursor_y }); }
		DrawLineF(direction, step_size, room_size);
	}


	int num_offshoots = points.Num() * 2;
	int num_industry = 1;
	int num_bedrooms = num_offshoots - num_industry;
	int industry_remaining = num_industry;
	float industry_chance = 1.0 / 6.0;
	float industry_percent = 100 - (100 * industry_chance);

	for (int p = 0; p < points.Num(); p++) {


		if (industry_remaining > 0) {
			if (p <= industry_remaining) {
				UGPDwarvenIndustry* industry_offshoot = NewObject<UGPDwarvenIndustry>(this);
				industry_offshoot->Init(lifetime, 6, points[p][0] + (perp[0] * (step_size)), points[p][1] + (perp[1] * step_size), heading + 90, parent);
				industry_remaining--;
			}
			else {
				float industry_roll = FMath::FRand() * 100;
				if (industry_roll >= industry_percent) {
					UGPDwarvenIndustry* industry_offshoot = NewObject<UGPDwarvenIndustry>(this);
					industry_offshoot->Init(lifetime, 6, points[p][0] + (perp[0] * step_size), points[p][1] + (perp[1] * step_size), heading + 90, parent);
					industry_remaining--;

				}
				else {
					UGPDwarvenBedrooms* offshoot = NewObject<UGPDwarvenBedrooms>(this);
					offshoot->Init(lifetime, 6, points[p][0] + (perp[0] * step_size), points[p][1] + (perp[1] * step_size), heading + 90, parent);
				}
			}
		}
		else {
			UGPDwarvenBedrooms* offshoot = NewObject<UGPDwarvenBedrooms>(this);
			offshoot->Init(lifetime, 6, points[p][0] + (perp[0] * step_size), points[p][1] + (perp[1] * step_size), heading + 90, parent);
		}


		if (industry_remaining > 0) {
			if (p <= industry_remaining) {
				UGPDwarvenIndustry* industry_offshoot = NewObject<UGPDwarvenIndustry>(this);
				industry_offshoot->Init(lifetime, 6, points[p][0] + (-perp[0] * step_size), points[p][1] + (-perp[1] * step_size), heading + 90, parent);
				industry_remaining--;

			}
			else {
				float industry_roll = FMath::FRand() * 100;
				if (industry_roll >= industry_percent) {
					UGPDwarvenIndustry* industry_offshoot = NewObject<UGPDwarvenIndustry>(this);
					industry_offshoot->Init(lifetime, 6, points[p][0] + (-perp[0] * step_size), points[p][1] + (-perp[1] * step_size), heading + 90, parent);
					industry_remaining--;

				}
				else {
					UGPDwarvenBedrooms* offshoot_0 = NewObject<UGPDwarvenBedrooms>(this);
					offshoot_0->Init(lifetime, 6, points[p][0] + (-perp[0] * step_size), points[p][1] + (-perp[1] * step_size), heading - 90, parent);
				}
			}
		}
		else {
			UGPDwarvenBedrooms* offshoot_0 = NewObject<UGPDwarvenBedrooms>(this);
			offshoot_0->Init(lifetime, 6, points[p][0] + (-perp[0] * step_size), points[p][1] + (-perp[1] * step_size), heading - 90, parent);
		}





	}



	DrawLineF(direction, 20, 3);

	parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 16, true);



}