// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPCompound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPCompound() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPCompound();
CAVES_API UClass* Z_Construct_UClass_UGPCompound_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPCompound
void UGPCompound::StaticRegisterNativesUGPCompound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPCompound);
UClass* Z_Construct_UClass_UGPCompound_NoRegister()
{
	return UGPCompound::StaticClass();
}
struct Z_Construct_UClass_UGPCompound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPCompound.h" },
		{ "ModuleRelativePath", "Public/GPCompound.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPCompound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPCompound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPCompound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPCompound_Statics::ClassParams = {
	&UGPCompound::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPCompound_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPCompound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPCompound()
{
	if (!Z_Registration_Info_UClass_UGPCompound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPCompound.OuterSingleton, Z_Construct_UClass_UGPCompound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPCompound.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPCompound>()
{
	return UGPCompound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPCompound);
UGPCompound::~UGPCompound() {}
// End Class UGPCompound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCompound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPCompound, UGPCompound::StaticClass, TEXT("UGPCompound"), &Z_Registration_Info_UClass_UGPCompound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPCompound), 1002102147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCompound_h_3277741484(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCompound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPCompound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
