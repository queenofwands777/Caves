// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPDrugLab.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPDrugLab() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPDrugLab();
CAVES_API UClass* Z_Construct_UClass_UGPDrugLab_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPDrugLab
void UGPDrugLab::StaticRegisterNativesUGPDrugLab()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPDrugLab);
UClass* Z_Construct_UClass_UGPDrugLab_NoRegister()
{
	return UGPDrugLab::StaticClass();
}
struct Z_Construct_UClass_UGPDrugLab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPDrugLab.h" },
		{ "ModuleRelativePath", "Public/GPDrugLab.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPDrugLab>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPDrugLab_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDrugLab_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPDrugLab_Statics::ClassParams = {
	&UGPDrugLab::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDrugLab_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPDrugLab_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPDrugLab()
{
	if (!Z_Registration_Info_UClass_UGPDrugLab.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPDrugLab.OuterSingleton, Z_Construct_UClass_UGPDrugLab_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPDrugLab.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPDrugLab>()
{
	return UGPDrugLab::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPDrugLab);
UGPDrugLab::~UGPDrugLab() {}
// End Class UGPDrugLab

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDrugLab_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPDrugLab, UGPDrugLab::StaticClass, TEXT("UGPDrugLab"), &Z_Registration_Info_UClass_UGPDrugLab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPDrugLab), 2653570115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDrugLab_h_3329342011(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDrugLab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDrugLab_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
