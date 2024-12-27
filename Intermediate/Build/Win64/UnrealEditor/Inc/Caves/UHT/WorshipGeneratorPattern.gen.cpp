// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/WorshipGeneratorPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorshipGeneratorPattern() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UWorshipGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UWorshipGeneratorPattern_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UWorshipGeneratorPattern
void UWorshipGeneratorPattern::StaticRegisterNativesUWorshipGeneratorPattern()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorshipGeneratorPattern);
UClass* Z_Construct_UClass_UWorshipGeneratorPattern_NoRegister()
{
	return UWorshipGeneratorPattern::StaticClass();
}
struct Z_Construct_UClass_UWorshipGeneratorPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WorshipGeneratorPattern.h" },
		{ "ModuleRelativePath", "Public/WorshipGeneratorPattern.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorshipGeneratorPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorshipGeneratorPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorshipGeneratorPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorshipGeneratorPattern_Statics::ClassParams = {
	&UWorshipGeneratorPattern::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorshipGeneratorPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorshipGeneratorPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorshipGeneratorPattern()
{
	if (!Z_Registration_Info_UClass_UWorshipGeneratorPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorshipGeneratorPattern.OuterSingleton, Z_Construct_UClass_UWorshipGeneratorPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorshipGeneratorPattern.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UWorshipGeneratorPattern>()
{
	return UWorshipGeneratorPattern::StaticClass();
}
UWorshipGeneratorPattern::UWorshipGeneratorPattern() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorshipGeneratorPattern);
UWorshipGeneratorPattern::~UWorshipGeneratorPattern() {}
// End Class UWorshipGeneratorPattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_WorshipGeneratorPattern_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorshipGeneratorPattern, UWorshipGeneratorPattern::StaticClass, TEXT("UWorshipGeneratorPattern"), &Z_Registration_Info_UClass_UWorshipGeneratorPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorshipGeneratorPattern), 3023144054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_WorshipGeneratorPattern_h_3431076795(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_WorshipGeneratorPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_WorshipGeneratorPattern_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
