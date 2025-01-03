// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPChapel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPChapel() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPChapel();
CAVES_API UClass* Z_Construct_UClass_UGPChapel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPChapel
void UGPChapel::StaticRegisterNativesUGPChapel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPChapel);
UClass* Z_Construct_UClass_UGPChapel_NoRegister()
{
	return UGPChapel::StaticClass();
}
struct Z_Construct_UClass_UGPChapel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPChapel.h" },
		{ "ModuleRelativePath", "Public/GPChapel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPChapel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPChapel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPChapel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPChapel_Statics::ClassParams = {
	&UGPChapel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPChapel_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPChapel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPChapel()
{
	if (!Z_Registration_Info_UClass_UGPChapel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPChapel.OuterSingleton, Z_Construct_UClass_UGPChapel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPChapel.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPChapel>()
{
	return UGPChapel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPChapel);
UGPChapel::~UGPChapel() {}
// End Class UGPChapel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPChapel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPChapel, UGPChapel::StaticClass, TEXT("UGPChapel"), &Z_Registration_Info_UClass_UGPChapel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPChapel), 111661355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPChapel_h_424423258(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPChapel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPChapel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
