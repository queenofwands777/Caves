// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

struct BeccaColor;

#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "PhysicsEngine/BodySetup.h"
#include "PaperSpriteComponent.h"
#include "DrawDebugHelpers.h"
#include "PaperSprite.h"
#include "PaperSpriteAtlas.h"
//#include "Components/ConvexComponent.h"
#include "GameFramework/Actor.h"
#include "BloodSplatter.generated.h"

UCLASS()
class CAVES_API ABloodSplatter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloodSplatter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void InitSplatter();
	void GenerateSplatter(int snapshot);
	void PlaceSplatter();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	int AbsorbSplatter(FVector location);


	UFUNCTION(BlueprintCallable, Category = "Splatter")
	void Splatter();

	void PlaceDot(int start_x, int start_y, int size, void* Data);
	void PlacePixel(int x, int y, void* Data, BeccaColor color);

	UFUNCTION(BlueprintCallable, Category = "Initialization")
	void InitParams(int _num_probes, int _blood_quantity, float _max_angle, int _probe_lifetime, int _num_frames, int _probe_variance, int _probe_speed, FVector _direction, FVector _location, FColor _color);

public:
	int texture_width = 512;
	int texture_height = 512;

	TArray<FVector2d> probe_locations;
	TArray<FVector2d> probe_directions;

	int frame_timer = 0;

	int frame_rate_timer = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	int num_probes = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	int blood_quantity = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	float max_angle = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	int probe_lifetime = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	int num_frames = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	float probe_variance = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	int probe_speed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	FVector direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	FVector location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialization")
	FColor color;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Texture", meta = (AllowPrivateAccess = "true"))
	UTexture2D* splatter_texture = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
    UPaperSpriteComponent* SpriteComponent = nullptr;
};
