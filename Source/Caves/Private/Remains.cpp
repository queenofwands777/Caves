// Fill out your copyright notice in the Description page of Project Settings.


#include "Remains.h"
#include<vector>

#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"

#include "Runtime/Engine/Public/TextureResource.h"
#include "RenderUtils.h"





const int MATRIX_SIZE = 16;
const int NUM_SHARDS = 5;

struct DynamicTexture {
public:
	UTexture2D* texture;
	FTexture2DMipMap* Data;

	DynamicTexture() {

		texture = UTexture2D::CreateTransient(MATRIX_SIZE, MATRIX_SIZE, PF_B8G8R8A8);
		texture->Source.Init(MATRIX_SIZE, MATRIX_SIZE, 1, 0, ETextureSourceFormat::TSF_BGRA8);

		// Ensure no compression and proper settings
		texture->MipGenSettings = TMGS_NoMipmaps;
		texture->CompressionSettings = TC_VectorDisplacementmap;
		texture->SRGB = false;
		texture->Filter = TF_Nearest;

		// Lock the texture to be able to modify it
		Data = &texture->GetPlatformData()->Mips[0];
		void* LocalData = Data->BulkData.Lock(LOCK_READ_WRITE);

		// Initialize the texture data
		FMemory::Memset(LocalData, 0, Data->BulkData.GetBulkDataSize());

		// Unlock the texture
		Data->BulkData.Unlock();
		texture->UpdateResource();
	}

	void SetPixel(int x, int y, std::vector<int> value) {
		void* LocalData = Data->BulkData.Lock(LOCK_READ_WRITE);

		//set pixel
		if (((y >= MATRIX_SIZE) || (x >= MATRIX_SIZE)) || ((y < 0) || (x < 0))) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, FString::Printf(TEXT("X:%d, Y:%d is out of bounds"), x, y));
			return;
		}

		int32 PixelIndex = ((y * MATRIX_SIZE) + x);
		uint8* Ptr = (uint8*)LocalData + PixelIndex * 4;

		// Set the pixel color
		Ptr[0] = value[0];
		Ptr[1] = value[1];
		Ptr[2] = value[2];
		Ptr[3] = 255;

		Data->BulkData.Unlock();
		texture->UpdateResource();
	}

	uint8* GetPixel(int x, int y) {
		void* LocalData = Data->BulkData.Lock(LOCK_READ_WRITE);

		//set pixel
		if (((y >= MATRIX_SIZE) || (x >= MATRIX_SIZE)) || ((y < 0) || (x < 0))) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, FString::Printf(TEXT("X:%d, Y:%d is out of bounds"), x, y));
		}

		int32 PixelIndex = ((y * MATRIX_SIZE) + x);
		uint8* Ptr = (uint8*)LocalData + PixelIndex * 4;
		return Ptr;
	}
};


// Sets default values
ARemains::ARemains()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FClassFinder<AActor> RemainShard(TEXT("/Game/Blueprints/Effects/RemainShard"));
	shard = RemainShard.Class;

}

void ARemains::Generate() {


	//have 16x16 matrix
	std::vector<std::vector<int>> Mask;
	for (int x = 0; x < MATRIX_SIZE; x++) {
		std::vector<int> MaskRow;
		for (int y = 0; y < MATRIX_SIZE; y++) {
			MaskRow.push_back(0);
		}
		Mask.push_back(MaskRow);
	}

	//seed matrix with as many arbitrary numbers as desired chunks
		//get random x and y distance from center
	for (int i = 0; i < NUM_SHARDS; i++) {
		int center_x = MATRIX_SIZE / 2;
		int center_y = MATRIX_SIZE / 2;
		int x_offset = FMath::RandRange(-center_x/2, center_x/2);
		int y_offset = FMath::RandRange(-center_y/2, center_y/2);
		Mask[center_x + x_offset][center_y+y_offset] = i;
	}


	//run CA
	bool incomplete = true;
	while (incomplete) {
		incomplete = false;

		for (int x = 0; x < MATRIX_SIZE; x++) {
			for (int y = 0; y < MATRIX_SIZE; y++) {

				int cell = Mask[x][y];

				//0s raise the "incomplete" flag
				if (cell == 0) {
					incomplete = true;
				}
				//all non-0 spaces propogate into all adjacent 0s
				else {

					for (int xx = -1; xx <= 1; xx++) {
						for (int yy = -1; yy <= 1; yy++) {
							int target_x = x + xx;
							int target_y = y + yy;
							if ((target_x >=0)&&(target_y >= 0)&&(target_x < MATRIX_SIZE)&&(target_y <MATRIX_SIZE)) {
								int target_cell = Mask[target_x][target_y];

								if (target_cell == 0) {
									Mask[target_x][target_y] = cell;
								}
							}
						}
					}
				}
			}
		}
	} //end CA

	//create 16x16 texture for each shard
	std::vector<DynamicTexture> texture_shards;
	for (int i=0; i<NUM_SHARDS;i++) {
		DynamicTexture texture = DynamicTexture();
		texture_shards.push_back(texture);
	}

	//given mask number, transcrible pixel to subtexture
	for (int x = 0; x < MATRIX_SIZE; x++) {
		for (int y = 0; y < MATRIX_SIZE; y++) {

			int cell = Mask[x][y];
			
			texture_shards[cell].SetPixel(x, y, {0,0,0});

		}
	}
	


	//create RemainShard for each generated texture, assign Texture to sprite
	for (int i = 0; i < NUM_SHARDS; i++) {
		
		FVector location;
		location = GetActorLocation();
		FRotator rotation = { 0,0,0 };

		AActor* shard_actor = GetWorld()->SpawnActor<AActor>(shard, location, rotation);

		UPaperSpriteComponent* sprite = shard_actor->GetComponentByClass<UPaperSpriteComponent>();

		FSpriteAssetInitParameters params;
		params.SetTextureAndFill(texture_shards[i].texture);
		params.SetPixelsPerUnrealUnit(1);
		params.Dimension = { MATRIX_SIZE,MATRIX_SIZE };
		params.Offset = { 0,0 };

		UPaperSprite* NewSprite = NewObject<UPaperSprite>();


		NewSprite->InitializeSprite(params);

		//NewSprite->GetSourceUV() = {0,0};
		//NewSprite->GetSourceSize() = { texture_width,texture_height };

		NewSprite->SetPivotMode(ESpritePivotMode::Center_Center, { 0,0 });
		NewSprite->RebuildRenderData();

		sprite->SetSprite(NewSprite);
		sprite->MarkRenderStateDirty();
		sprite->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	}

}



// Called when the game starts or when spawned
void ARemains::BeginPlay()
{
	Super::BeginPlay();
	Generate();
	
}

// Called every frame
void ARemains::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

