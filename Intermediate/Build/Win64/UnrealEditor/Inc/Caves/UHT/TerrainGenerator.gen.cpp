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
CAVES_API UClass* Z_Construct_UClass_AFloorInfo_NoRegister();
CAVES_API UClass* Z_Construct_UClass_ATerrainGenerator();
CAVES_API UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ATerrainGenerator Function GetPath
struct Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics
{
	struct TerrainGenerator_eventGetPath_Parms
	{
		FVector from;
		FVector to;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_from;
	static const UECodeGen_Private::FStructPropertyParams NewProp_to;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainGenerator_eventGetPath_Parms, from), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainGenerator_eventGetPath_Parms, to), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainGenerator_eventGetPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_from,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_to,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATerrainGenerator, nullptr, "GetPath", nullptr, nullptr, Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::TerrainGenerator_eventGetPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::TerrainGenerator_eventGetPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATerrainGenerator_GetPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainGenerator_GetPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainGenerator::execGetPath)
{
	P_GET_STRUCT(FVector,Z_Param_from);
	P_GET_STRUCT(FVector,Z_Param_to);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPath(Z_Param_from,Z_Param_to);
	P_NATIVE_END;
}
// End Class ATerrainGenerator Function GetPath

// Begin Class ATerrainGenerator
void ATerrainGenerator::StaticRegisterNativesATerrainGenerator()
{
	UClass* Class = ATerrainGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPath", &ATerrainGenerator::execGetPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LEVEL_SIZE_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAP_SIZE_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TILE_SIZE_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CURSOR_LIFETIME_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floor_num_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainOverlayMapData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Floors_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialFloors_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LEVEL_SIZE;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MAP_SIZE;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TILE_SIZE;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CURSOR_LIFETIME;
	static const UECodeGen_Private::FIntPropertyParams NewProp_floor_num;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMapData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TerrainMapData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainOverlayMapData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TerrainOverlayMapData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Floors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Floors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpecialFloors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecialFloors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATerrainGenerator_GetPath, "GetPath" }, // 3742264266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_LEVEL_SIZE = { "LEVEL_SIZE", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, LEVEL_SIZE), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LEVEL_SIZE_MetaData), NewProp_LEVEL_SIZE_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_MAP_SIZE = { "MAP_SIZE", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, MAP_SIZE), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAP_SIZE_MetaData), NewProp_MAP_SIZE_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TILE_SIZE = { "TILE_SIZE", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, TILE_SIZE), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TILE_SIZE_MetaData), NewProp_TILE_SIZE_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_CURSOR_LIFETIME = { "CURSOR_LIFETIME", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, CURSOR_LIFETIME), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CURSOR_LIFETIME_MetaData), NewProp_CURSOR_LIFETIME_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_floor_num = { "floor_num", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, floor_num), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floor_num_MetaData), NewProp_floor_num_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData_Inner = { "TerrainMapData", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData = { "TerrainMapData", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, TerrainMapData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMapData_MetaData), NewProp_TerrainMapData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainOverlayMapData_Inner = { "TerrainOverlayMapData", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainOverlayMapData = { "TerrainOverlayMapData", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, TerrainOverlayMapData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainOverlayMapData_MetaData), NewProp_TerrainOverlayMapData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Floors_Inner = { "Floors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AFloorInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Floors = { "Floors", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, Floors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Floors_MetaData), NewProp_Floors_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SpecialFloors_Inner = { "SpecialFloors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AFloorInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SpecialFloors = { "SpecialFloors", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, SpecialFloors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialFloors_MetaData), NewProp_SpecialFloors_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, Player), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_LEVEL_SIZE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_MAP_SIZE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TILE_SIZE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_CURSOR_LIFETIME,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_floor_num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainMapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainOverlayMapData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TerrainOverlayMapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Floors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Floors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SpecialFloors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SpecialFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Player,
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
	FuncInfo,
	Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_TerrainGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainGenerator, ATerrainGenerator::StaticClass, TEXT("ATerrainGenerator"), &Z_Registration_Info_UClass_ATerrainGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainGenerator), 1827783998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_TerrainGenerator_h_3353901137(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_TerrainGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_TerrainGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
