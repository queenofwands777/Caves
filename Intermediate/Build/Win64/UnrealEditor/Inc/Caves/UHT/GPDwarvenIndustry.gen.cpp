// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPDwarvenIndustry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPDwarvenIndustry() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPDwarvenIndustry();
CAVES_API UClass* Z_Construct_UClass_UGPDwarvenIndustry_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPDwarvenIndustry
void UGPDwarvenIndustry::StaticRegisterNativesUGPDwarvenIndustry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPDwarvenIndustry);
UClass* Z_Construct_UClass_UGPDwarvenIndustry_NoRegister()
{
	return UGPDwarvenIndustry::StaticClass();
}
struct Z_Construct_UClass_UGPDwarvenIndustry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPDwarvenIndustry.h" },
		{ "ModuleRelativePath", "Public/GPDwarvenIndustry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPDwarvenIndustry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPDwarvenIndustry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDwarvenIndustry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPDwarvenIndustry_Statics::ClassParams = {
	&UGPDwarvenIndustry::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDwarvenIndustry_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPDwarvenIndustry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPDwarvenIndustry()
{
	if (!Z_Registration_Info_UClass_UGPDwarvenIndustry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPDwarvenIndustry.OuterSingleton, Z_Construct_UClass_UGPDwarvenIndustry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPDwarvenIndustry.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPDwarvenIndustry>()
{
	return UGPDwarvenIndustry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPDwarvenIndustry);
UGPDwarvenIndustry::~UGPDwarvenIndustry() {}
// End Class UGPDwarvenIndustry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenIndustry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPDwarvenIndustry, UGPDwarvenIndustry::StaticClass, TEXT("UGPDwarvenIndustry"), &Z_Registration_Info_UClass_UGPDwarvenIndustry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPDwarvenIndustry), 3265553276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenIndustry_h_2559505973(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenIndustry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenIndustry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
