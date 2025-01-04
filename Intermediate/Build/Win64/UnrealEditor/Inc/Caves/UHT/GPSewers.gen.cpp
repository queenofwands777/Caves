// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPSewers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPSewers() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPSewers();
CAVES_API UClass* Z_Construct_UClass_UGPSewers_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPSewers
void UGPSewers::StaticRegisterNativesUGPSewers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPSewers);
UClass* Z_Construct_UClass_UGPSewers_NoRegister()
{
	return UGPSewers::StaticClass();
}
struct Z_Construct_UClass_UGPSewers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPSewers.h" },
		{ "ModuleRelativePath", "Public/GPSewers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPSewers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPSewers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSewers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPSewers_Statics::ClassParams = {
	&UGPSewers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSewers_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPSewers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPSewers()
{
	if (!Z_Registration_Info_UClass_UGPSewers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPSewers.OuterSingleton, Z_Construct_UClass_UGPSewers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPSewers.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPSewers>()
{
	return UGPSewers::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPSewers);
UGPSewers::~UGPSewers() {}
// End Class UGPSewers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPSewers, UGPSewers::StaticClass, TEXT("UGPSewers"), &Z_Registration_Info_UClass_UGPSewers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPSewers), 2582134312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewers_h_2762950142(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
