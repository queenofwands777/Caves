// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPElevator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPElevator() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPElevator();
CAVES_API UClass* Z_Construct_UClass_UGPElevator_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPElevator
void UGPElevator::StaticRegisterNativesUGPElevator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPElevator);
UClass* Z_Construct_UClass_UGPElevator_NoRegister()
{
	return UGPElevator::StaticClass();
}
struct Z_Construct_UClass_UGPElevator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPElevator.h" },
		{ "ModuleRelativePath", "Public/GPElevator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPElevator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPElevator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPElevator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPElevator_Statics::ClassParams = {
	&UGPElevator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPElevator_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPElevator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPElevator()
{
	if (!Z_Registration_Info_UClass_UGPElevator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPElevator.OuterSingleton, Z_Construct_UClass_UGPElevator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPElevator.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPElevator>()
{
	return UGPElevator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPElevator);
UGPElevator::~UGPElevator() {}
// End Class UGPElevator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPElevator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPElevator, UGPElevator::StaticClass, TEXT("UGPElevator"), &Z_Registration_Info_UClass_UGPElevator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPElevator), 3039629074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPElevator_h_4093048293(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPElevator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPElevator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
