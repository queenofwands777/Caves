// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPFrontGate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPFrontGate() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPFrontGate();
CAVES_API UClass* Z_Construct_UClass_UGPFrontGate_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPFrontGate
void UGPFrontGate::StaticRegisterNativesUGPFrontGate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPFrontGate);
UClass* Z_Construct_UClass_UGPFrontGate_NoRegister()
{
	return UGPFrontGate::StaticClass();
}
struct Z_Construct_UClass_UGPFrontGate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPFrontGate.h" },
		{ "ModuleRelativePath", "Public/GPFrontGate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPFrontGate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPFrontGate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPFrontGate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPFrontGate_Statics::ClassParams = {
	&UGPFrontGate::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPFrontGate_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPFrontGate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPFrontGate()
{
	if (!Z_Registration_Info_UClass_UGPFrontGate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPFrontGate.OuterSingleton, Z_Construct_UClass_UGPFrontGate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPFrontGate.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPFrontGate>()
{
	return UGPFrontGate::StaticClass();
}
UGPFrontGate::UGPFrontGate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPFrontGate);
UGPFrontGate::~UGPFrontGate() {}
// End Class UGPFrontGate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPFrontGate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPFrontGate, UGPFrontGate::StaticClass, TEXT("UGPFrontGate"), &Z_Registration_Info_UClass_UGPFrontGate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPFrontGate), 3188287845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPFrontGate_h_2265883887(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPFrontGate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPFrontGate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
