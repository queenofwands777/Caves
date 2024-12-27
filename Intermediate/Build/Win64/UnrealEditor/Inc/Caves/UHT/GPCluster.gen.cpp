// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPCluster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPCluster() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPCluster();
CAVES_API UClass* Z_Construct_UClass_UGPCluster_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPCluster
void UGPCluster::StaticRegisterNativesUGPCluster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPCluster);
UClass* Z_Construct_UClass_UGPCluster_NoRegister()
{
	return UGPCluster::StaticClass();
}
struct Z_Construct_UClass_UGPCluster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPCluster.h" },
		{ "ModuleRelativePath", "Public/GPCluster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPCluster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPCluster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPCluster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPCluster_Statics::ClassParams = {
	&UGPCluster::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPCluster_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPCluster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPCluster()
{
	if (!Z_Registration_Info_UClass_UGPCluster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPCluster.OuterSingleton, Z_Construct_UClass_UGPCluster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPCluster.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPCluster>()
{
	return UGPCluster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPCluster);
UGPCluster::~UGPCluster() {}
// End Class UGPCluster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCluster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPCluster, UGPCluster::StaticClass, TEXT("UGPCluster"), &Z_Registration_Info_UClass_UGPCluster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPCluster), 1909350543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCluster_h_2515884889(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCluster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCluster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
