// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPArtifact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPArtifact() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPArtifact();
CAVES_API UClass* Z_Construct_UClass_UGPArtifact_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPArtifact
void UGPArtifact::StaticRegisterNativesUGPArtifact()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPArtifact);
UClass* Z_Construct_UClass_UGPArtifact_NoRegister()
{
	return UGPArtifact::StaticClass();
}
struct Z_Construct_UClass_UGPArtifact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPArtifact.h" },
		{ "ModuleRelativePath", "Public/GPArtifact.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPArtifact>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPArtifact_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPArtifact_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPArtifact_Statics::ClassParams = {
	&UGPArtifact::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPArtifact_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPArtifact_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPArtifact()
{
	if (!Z_Registration_Info_UClass_UGPArtifact.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPArtifact.OuterSingleton, Z_Construct_UClass_UGPArtifact_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPArtifact.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPArtifact>()
{
	return UGPArtifact::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPArtifact);
UGPArtifact::~UGPArtifact() {}
// End Class UGPArtifact

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPArtifact_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPArtifact, UGPArtifact::StaticClass, TEXT("UGPArtifact"), &Z_Registration_Info_UClass_UGPArtifact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPArtifact), 38001388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPArtifact_h_4011694770(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPArtifact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPArtifact_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
