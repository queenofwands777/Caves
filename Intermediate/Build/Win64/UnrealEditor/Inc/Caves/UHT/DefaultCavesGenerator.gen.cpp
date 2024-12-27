// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/DefaultCavesGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultCavesGenerator() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UDefaultCavesGenerator();
CAVES_API UClass* Z_Construct_UClass_UDefaultCavesGenerator_NoRegister();
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UDefaultCavesGenerator
void UDefaultCavesGenerator::StaticRegisterNativesUDefaultCavesGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultCavesGenerator);
UClass* Z_Construct_UClass_UDefaultCavesGenerator_NoRegister()
{
	return UDefaultCavesGenerator::StaticClass();
}
struct Z_Construct_UClass_UDefaultCavesGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultCavesGenerator.h" },
		{ "ModuleRelativePath", "Public/DefaultCavesGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultCavesGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDefaultCavesGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultCavesGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultCavesGenerator_Statics::ClassParams = {
	&UDefaultCavesGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultCavesGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefaultCavesGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDefaultCavesGenerator()
{
	if (!Z_Registration_Info_UClass_UDefaultCavesGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultCavesGenerator.OuterSingleton, Z_Construct_UClass_UDefaultCavesGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDefaultCavesGenerator.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UDefaultCavesGenerator>()
{
	return UDefaultCavesGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultCavesGenerator);
UDefaultCavesGenerator::~UDefaultCavesGenerator() {}
// End Class UDefaultCavesGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_DefaultCavesGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultCavesGenerator, UDefaultCavesGenerator::StaticClass, TEXT("UDefaultCavesGenerator"), &Z_Registration_Info_UClass_UDefaultCavesGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultCavesGenerator), 1146002645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_DefaultCavesGenerator_h_963628470(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_DefaultCavesGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_DefaultCavesGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
