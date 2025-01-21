// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPIntrusion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPIntrusion() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPIntrusion();
CAVES_API UClass* Z_Construct_UClass_UGPIntrusion_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPIntrusion
void UGPIntrusion::StaticRegisterNativesUGPIntrusion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPIntrusion);
UClass* Z_Construct_UClass_UGPIntrusion_NoRegister()
{
	return UGPIntrusion::StaticClass();
}
struct Z_Construct_UClass_UGPIntrusion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GPIntrusion.h" },
		{ "ModuleRelativePath", "Public/GPIntrusion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPIntrusion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPIntrusion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPIntrusion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPIntrusion_Statics::ClassParams = {
	&UGPIntrusion::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPIntrusion_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPIntrusion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPIntrusion()
{
	if (!Z_Registration_Info_UClass_UGPIntrusion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPIntrusion.OuterSingleton, Z_Construct_UClass_UGPIntrusion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPIntrusion.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPIntrusion>()
{
	return UGPIntrusion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPIntrusion);
UGPIntrusion::~UGPIntrusion() {}
// End Class UGPIntrusion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPIntrusion, UGPIntrusion::StaticClass, TEXT("UGPIntrusion"), &Z_Registration_Info_UClass_UGPIntrusion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPIntrusion), 2124976222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusion_h_3479766998(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
