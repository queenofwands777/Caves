// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/TerrainGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainGenerator() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ATerrainGenerator();
CAVES_API UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ATerrainGenerator
void ATerrainGenerator::StaticRegisterNativesATerrainGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATerrainGenerator);
UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister()
{
	return ATerrainGenerator::StaticClass();
}
struct Z_Construct_UClass_ATerrainGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TerrainGenerator.h" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floor_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMapData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_floor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMapData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TerrainMapData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_floor = { "floor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, floor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floor_MetaData), NewProp_floor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData_Inner = { "TerrainMapData", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData = { "TerrainMapData", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, TerrainMapData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMapData_MetaData), NewProp_TerrainMapData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_floor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATerrainGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrainGenerator_Statics::ClassParams = {
	&ATerrainGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATerrainGenerator()
{
	if (!Z_Registration_Info_UClass_ATerrainGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrainGenerator.OuterSingleton, Z_Construct_UClass_ATerrainGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrainGenerator.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<ATerrainGenerator>()
{
	return ATerrainGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrainGenerator);
ATerrainGenerator::~ATerrainGenerator() {}
// End Class ATerrainGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_TerrainGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainGenerator, ATerrainGenerator::StaticClass, TEXT("ATerrainGenerator"), &Z_Registration_Info_UClass_ATerrainGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainGenerator), 1774317737U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_TerrainGenerator_h_1638375096(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_TerrainGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_TerrainGenerator_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_TerrainGenerator_h_127419066(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_TerrainGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_TerrainGenerator_h_Statics::ClassInfo),
>>>>>>> df9fd8e054792d65148fe1385758fe45f1bc8a7e
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
