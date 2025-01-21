// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPMotherlode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPMotherlode() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPMotherlode();
CAVES_API UClass* Z_Construct_UClass_UGPMotherlode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPMotherlode
void UGPMotherlode::StaticRegisterNativesUGPMotherlode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPMotherlode);
UClass* Z_Construct_UClass_UGPMotherlode_NoRegister()
{
	return UGPMotherlode::StaticClass();
}
struct Z_Construct_UClass_UGPMotherlode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GPMotherlode.h" },
		{ "ModuleRelativePath", "Public/GPMotherlode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPMotherlode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPMotherlode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPMotherlode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPMotherlode_Statics::ClassParams = {
	&UGPMotherlode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPMotherlode_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPMotherlode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPMotherlode()
{
	if (!Z_Registration_Info_UClass_UGPMotherlode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPMotherlode.OuterSingleton, Z_Construct_UClass_UGPMotherlode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPMotherlode.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPMotherlode>()
{
	return UGPMotherlode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPMotherlode);
UGPMotherlode::~UGPMotherlode() {}
// End Class UGPMotherlode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMotherlode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPMotherlode, UGPMotherlode::StaticClass, TEXT("UGPMotherlode"), &Z_Registration_Info_UClass_UGPMotherlode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPMotherlode), 736900581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMotherlode_h_3549778678(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMotherlode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMotherlode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
