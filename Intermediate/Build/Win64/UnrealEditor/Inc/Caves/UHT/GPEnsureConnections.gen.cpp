// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPEnsureConnections.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPEnsureConnections() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPEnsureConnections();
CAVES_API UClass* Z_Construct_UClass_UGPEnsureConnections_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPEnsureConnections
void UGPEnsureConnections::StaticRegisterNativesUGPEnsureConnections()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPEnsureConnections);
UClass* Z_Construct_UClass_UGPEnsureConnections_NoRegister()
{
	return UGPEnsureConnections::StaticClass();
}
struct Z_Construct_UClass_UGPEnsureConnections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPEnsureConnections.h" },
		{ "ModuleRelativePath", "Public/GPEnsureConnections.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPEnsureConnections>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPEnsureConnections_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPEnsureConnections_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPEnsureConnections_Statics::ClassParams = {
	&UGPEnsureConnections::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPEnsureConnections_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPEnsureConnections_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPEnsureConnections()
{
	if (!Z_Registration_Info_UClass_UGPEnsureConnections.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPEnsureConnections.OuterSingleton, Z_Construct_UClass_UGPEnsureConnections_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPEnsureConnections.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPEnsureConnections>()
{
	return UGPEnsureConnections::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPEnsureConnections);
UGPEnsureConnections::~UGPEnsureConnections() {}
// End Class UGPEnsureConnections

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPEnsureConnections_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPEnsureConnections, UGPEnsureConnections::StaticClass, TEXT("UGPEnsureConnections"), &Z_Registration_Info_UClass_UGPEnsureConnections, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPEnsureConnections), 3492298903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPEnsureConnections_h_4285201095(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPEnsureConnections_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPEnsureConnections_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
