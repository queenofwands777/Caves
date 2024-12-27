// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/BunkerGeneratorPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBunkerGeneratorPattern() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UBunkerGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UBunkerGeneratorPattern_NoRegister();
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UBunkerGeneratorPattern
void UBunkerGeneratorPattern::StaticRegisterNativesUBunkerGeneratorPattern()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBunkerGeneratorPattern);
UClass* Z_Construct_UClass_UBunkerGeneratorPattern_NoRegister()
{
	return UBunkerGeneratorPattern::StaticClass();
}
struct Z_Construct_UClass_UBunkerGeneratorPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BunkerGeneratorPattern.h" },
		{ "ModuleRelativePath", "Public/BunkerGeneratorPattern.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBunkerGeneratorPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBunkerGeneratorPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBunkerGeneratorPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBunkerGeneratorPattern_Statics::ClassParams = {
	&UBunkerGeneratorPattern::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBunkerGeneratorPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UBunkerGeneratorPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBunkerGeneratorPattern()
{
	if (!Z_Registration_Info_UClass_UBunkerGeneratorPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBunkerGeneratorPattern.OuterSingleton, Z_Construct_UClass_UBunkerGeneratorPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBunkerGeneratorPattern.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UBunkerGeneratorPattern>()
{
	return UBunkerGeneratorPattern::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBunkerGeneratorPattern);
UBunkerGeneratorPattern::~UBunkerGeneratorPattern() {}
// End Class UBunkerGeneratorPattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BunkerGeneratorPattern_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBunkerGeneratorPattern, UBunkerGeneratorPattern::StaticClass, TEXT("UBunkerGeneratorPattern"), &Z_Registration_Info_UClass_UBunkerGeneratorPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBunkerGeneratorPattern), 1822995104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BunkerGeneratorPattern_h_1530933035(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BunkerGeneratorPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BunkerGeneratorPattern_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
