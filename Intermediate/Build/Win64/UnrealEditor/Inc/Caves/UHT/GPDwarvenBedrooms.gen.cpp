// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPDwarvenBedrooms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPDwarvenBedrooms() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPDwarvenBedrooms();
CAVES_API UClass* Z_Construct_UClass_UGPDwarvenBedrooms_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPDwarvenBedrooms
void UGPDwarvenBedrooms::StaticRegisterNativesUGPDwarvenBedrooms()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPDwarvenBedrooms);
UClass* Z_Construct_UClass_UGPDwarvenBedrooms_NoRegister()
{
	return UGPDwarvenBedrooms::StaticClass();
}
struct Z_Construct_UClass_UGPDwarvenBedrooms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPDwarvenBedrooms.h" },
		{ "ModuleRelativePath", "Public/GPDwarvenBedrooms.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPDwarvenBedrooms>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPDwarvenBedrooms_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDwarvenBedrooms_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPDwarvenBedrooms_Statics::ClassParams = {
	&UGPDwarvenBedrooms::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDwarvenBedrooms_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPDwarvenBedrooms_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPDwarvenBedrooms()
{
	if (!Z_Registration_Info_UClass_UGPDwarvenBedrooms.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPDwarvenBedrooms.OuterSingleton, Z_Construct_UClass_UGPDwarvenBedrooms_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPDwarvenBedrooms.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPDwarvenBedrooms>()
{
	return UGPDwarvenBedrooms::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPDwarvenBedrooms);
UGPDwarvenBedrooms::~UGPDwarvenBedrooms() {}
// End Class UGPDwarvenBedrooms

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenBedrooms_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPDwarvenBedrooms, UGPDwarvenBedrooms::StaticClass, TEXT("UGPDwarvenBedrooms"), &Z_Registration_Info_UClass_UGPDwarvenBedrooms, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPDwarvenBedrooms), 1477985335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenBedrooms_h_1216085372(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenBedrooms_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDwarvenBedrooms_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
