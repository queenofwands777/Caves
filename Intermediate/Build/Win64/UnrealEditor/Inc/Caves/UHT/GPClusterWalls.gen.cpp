// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPClusterWalls.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPClusterWalls() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPClusterWalls();
CAVES_API UClass* Z_Construct_UClass_UGPClusterWalls_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPClusterWalls
void UGPClusterWalls::StaticRegisterNativesUGPClusterWalls()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPClusterWalls);
UClass* Z_Construct_UClass_UGPClusterWalls_NoRegister()
{
	return UGPClusterWalls::StaticClass();
}
struct Z_Construct_UClass_UGPClusterWalls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPClusterWalls.h" },
		{ "ModuleRelativePath", "Public/GPClusterWalls.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPClusterWalls>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPClusterWalls_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPClusterWalls_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPClusterWalls_Statics::ClassParams = {
	&UGPClusterWalls::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPClusterWalls_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPClusterWalls_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPClusterWalls()
{
	if (!Z_Registration_Info_UClass_UGPClusterWalls.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPClusterWalls.OuterSingleton, Z_Construct_UClass_UGPClusterWalls_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPClusterWalls.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPClusterWalls>()
{
	return UGPClusterWalls::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPClusterWalls);
UGPClusterWalls::~UGPClusterWalls() {}
// End Class UGPClusterWalls

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPClusterWalls_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPClusterWalls, UGPClusterWalls::StaticClass, TEXT("UGPClusterWalls"), &Z_Registration_Info_UClass_UGPClusterWalls, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPClusterWalls), 3280265767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPClusterWalls_h_1141401512(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPClusterWalls_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPClusterWalls_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS