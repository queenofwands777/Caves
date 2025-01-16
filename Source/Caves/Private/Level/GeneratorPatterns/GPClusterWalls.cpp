// Fill out your copyright notice in the Description page of Project Settings.


#include "GPClusterWalls.h"
#include "TerrainGenerator.h"
#include "GPEnsureConnections.h"
#include"GPCluster.h"

void UGPClusterWalls::GenerateLevel() {

	UGPCluster* cluster = NewObject<UGPCluster>(this);
	cluster->room_spacing = room_spacing;
	cluster->room_size = room_size;
	cluster->Init(lifetime, num_rooms, cursor_x, cursor_y, heading, parent, default_floor_material, default_wall_material, default_void_material);
	start_loc = cluster->start_loc;
	center_loc = cluster->center_loc;
	end_loc = cluster->end_loc;
}