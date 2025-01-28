// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPIntrusionCaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPIntrusionCaves() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPIntrusionCaves();
CAVES_API UClass* Z_Construct_UClass_UGPIntrusionCaves_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPIntrusionCaves
void UGPIntrusionCaves::StaticRegisterNativesUGPIntrusionCaves()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPIntrusionCaves);
UClass* Z_Construct_UClass_UGPIntrusionCaves_NoRegister()
{
	return UGPIntrusionCaves::StaticClass();
}
struct Z_Construct_UClass_UGPIntrusionCaves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GPIntrusionCaves.h" },
		{ "ModuleRelativePath", "Public/GPIntrusionCaves.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPIntrusionCaves>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPIntrusionCaves_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPIntrusionCaves_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPIntrusionCaves_Statics::ClassParams = {
	&UGPIntrusionCaves::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPIntrusionCaves_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPIntrusionCaves_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPIntrusionCaves()
{
	if (!Z_Registration_Info_UClass_UGPIntrusionCaves.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPIntrusionCaves.OuterSingleton, Z_Construct_UClass_UGPIntrusionCaves_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPIntrusionCaves.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPIntrusionCaves>()
{
	return UGPIntrusionCaves::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPIntrusionCaves);
UGPIntrusionCaves::~UGPIntrusionCaves() {}
// End Class UGPIntrusionCaves

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionCaves_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPIntrusionCaves, UGPIntrusionCaves::StaticClass, TEXT("UGPIntrusionCaves"), &Z_Registration_Info_UClass_UGPIntrusionCaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPIntrusionCaves), 1703884727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionCaves_h_356234965(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionCaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionCaves_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
