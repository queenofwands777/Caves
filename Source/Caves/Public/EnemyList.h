// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyList.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UEnemyList : public UDataAsset
{

    GENERATED_BODY()

    UEnemyList();
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
    TArray<TSubclassOf<AActor>> Enemies;
};
