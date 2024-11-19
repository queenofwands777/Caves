// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/Encounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEncounter() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_AEncounter();
CAVES_API UClass* Z_Construct_UClass_AEncounter_NoRegister();
CAVES_API UClass* Z_Construct_UClass_AFloorInfo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class AEncounter
void AEncounter::StaticRegisterNativesAEncounter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEncounter);
UClass* Z_Construct_UClass_AEncounter_NoRegister()
{
	return AEncounter::StaticClass();
}
struct Z_Construct_UClass_AEncounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Encounter.h" },
		{ "ModuleRelativePath", "Public/Encounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[] = {
		{ "Category", "Encounter" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Encounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "Category", "Encounter" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Encounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[] = {
		{ "Category", "Encounter" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Encounter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Enemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEncounter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEncounter_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEncounter_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncounter, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemies_MetaData), NewProp_Enemies_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEncounter_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEncounter_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncounter, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEncounter_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEncounter, parent), Z_Construct_UClass_AFloorInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_parent_MetaData), NewProp_parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEncounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncounter_Statics::NewProp_Enemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncounter_Statics::NewProp_Enemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncounter_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncounter_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEncounter_Statics::NewProp_parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEncounter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEncounter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEncounter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEncounter_Statics::ClassParams = {
	&AEncounter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEncounter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEncounter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEncounter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEncounter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEncounter()
{
	if (!Z_Registration_Info_UClass_AEncounter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEncounter.OuterSingleton, Z_Construct_UClass_AEncounter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEncounter.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<AEncounter>()
{
	return AEncounter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEncounter);
AEncounter::~AEncounter() {}
// End Class AEncounter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Encounter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEncounter, AEncounter::StaticClass, TEXT("AEncounter"), &Z_Registration_Info_UClass_AEncounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEncounter), 1813811102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Encounter_h_3992090038(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Encounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Encounter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
