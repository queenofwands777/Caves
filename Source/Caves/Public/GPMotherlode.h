#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPMotherlode.generated.h"

/**
 *
 */
UCLASS()
class CAVES_API UGPMotherlode : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPMotherlode() {}

	void GenerateLevel() override;

	//void PopulateLevel(int num_chests, int num_altars, int num_encounters) override;
	bool first = true;

};
