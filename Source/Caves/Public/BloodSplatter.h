// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "PaperSpriteAtlas.h"
#include "GameFramework/Actor.h"
#include "BloodSplatter.generated.h"

UCLASS()
class CAVES_API ABloodSplatter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloodSplatter();
	ABloodSplatter(int _num_probes, float _max_angle, int _probe_lifetime, int _probe_variance, int _probe_speed, FVector2d _direction, FVector2d _location);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void InitSplatter();
	void GenerateSplatter();
	void PlaceSplatter();
	void PlaceDot(int start_x, int start_y, int size);
	void PlacePixel(int x, int y);

public:
	int num_probes;
	float max_angle;
	int probe_lifetime;
	float probe_variance;
	int probe_speed;
	FVector2d direction;
	FVector2d location;
	UTexture2D* splatter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
    UPaperSpriteComponent* SpriteComponent;
};
