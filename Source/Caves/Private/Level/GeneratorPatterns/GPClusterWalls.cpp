// Fill out your copyright notice in the Description page of Project Settings.


#include "GPClusterWalls.h"
#include "TerrainGenerator.h"
#include "GPEnsureConnections.h"
#include"GPCluster.h"

void UGPClusterWalls::GenerateLevel() {

	UGPCluster* cluster = NewObject<UGPCluster>(this);
	cluster->room_spacing = room_spacing;
	cluster->Init(lifetime, num_rooms, cursor_x, cursor_y, heading, parent);
	center_loc = cluster->center_loc;
}