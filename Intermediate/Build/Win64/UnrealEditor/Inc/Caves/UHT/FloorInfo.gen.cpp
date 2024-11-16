// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/FloorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorInfo() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_AEncounter_NoRegister();
CAVES_API UClass* Z_Construct_UClass_AFloorInfo();
CAVES_API UClass* Z_Construct_UClass_AFloorInfo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class AFloorInfo
void AFloorInfo::StaticRegisterNativesAFloorInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorInfo);
UClass* Z_Construct_UClass_AFloorInfo_NoRegister()
{
	return AFloorInfo::StaticClass();
}
struct Z_Construct_UClass_AFloorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FloorInfo.h" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EssentialObjects_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Encounters_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelTileSet_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floor_material_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wall_material_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_void_material_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_is_store_MetaData[] = {
		{ "Category", "FloorInfo" },
		{ "ModuleRelativePath", "Public/FloorInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Enemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EssentialObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EssentialObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Encounters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Encounters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelTileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_floor_material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_wall_material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_void_material;
	static void NewProp_is_store_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_is_store;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemies_MetaData), NewProp_Enemies_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_EssentialObjects_Inner = { "EssentialObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_EssentialObjects = { "EssentialObjects", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, EssentialObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EssentialObjects_MetaData), NewProp_EssentialObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_Encounters_Inner = { "Encounters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEncounter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_Encounters = { "Encounters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, Encounters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Encounters_MetaData), NewProp_Encounters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_LevelTileSet = { "LevelTileSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, LevelTileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelTileSet_MetaData), NewProp_LevelTileSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_floor_material = { "floor_material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, floor_material), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floor_material_MetaData), NewProp_floor_material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_wall_material = { "wall_material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, wall_material), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wall_material_MetaData), NewProp_wall_material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_void_material = { "void_material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorInfo, void_material), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_void_material_MetaData), NewProp_void_material_MetaData) };
void Z_Construct_UClass_AFloorInfo_Statics::NewProp_is_store_SetBit(void* Obj)
{
	((AFloorInfo*)Obj)->is_store = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloorInfo_Statics::NewProp_is_store = { "is_store", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFloorInfo), &Z_Construct_UClass_AFloorInfo_Statics::NewProp_is_store_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_is_store_MetaData), NewProp_is_store_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_Enemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_Enemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_EssentialObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_EssentialObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_Encounters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_Encounters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_LevelTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_floor_material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_wall_material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_void_material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorInfo_Statics::NewProp_is_store,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloorInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorInfo_Statics::ClassParams = {
	&AFloorInfo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFloorInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloorInfo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloorInfo()
{
	if (!Z_Registration_Info_UClass_AFloorInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorInfo.OuterSingleton, Z_Construct_UClass_AFloorInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloorInfo.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<AFloorInfo>()
{
	return AFloorInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorInfo);
AFloorInfo::~AFloorInfo() {}
// End Class AFloorInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_FloorInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloorInfo, AFloorInfo::StaticClass, TEXT("AFloorInfo"), &Z_Registration_Info_UClass_AFloorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorInfo), 2555758160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_FloorInfo_h_2878468779(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_FloorInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_FloorInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
