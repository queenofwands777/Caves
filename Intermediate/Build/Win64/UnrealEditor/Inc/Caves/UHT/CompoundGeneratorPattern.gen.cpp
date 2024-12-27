// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/CompoundGeneratorPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompoundGeneratorPattern() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UCompoundGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UCompoundGeneratorPattern_NoRegister();
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UCompoundGeneratorPattern
void UCompoundGeneratorPattern::StaticRegisterNativesUCompoundGeneratorPattern()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompoundGeneratorPattern);
UClass* Z_Construct_UClass_UCompoundGeneratorPattern_NoRegister()
{
	return UCompoundGeneratorPattern::StaticClass();
}
struct Z_Construct_UClass_UCompoundGeneratorPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CompoundGeneratorPattern.h" },
		{ "ModuleRelativePath", "Public/CompoundGeneratorPattern.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompoundGeneratorPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompoundGeneratorPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompoundGeneratorPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompoundGeneratorPattern_Statics::ClassParams = {
	&UCompoundGeneratorPattern::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompoundGeneratorPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompoundGeneratorPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompoundGeneratorPattern()
{
	if (!Z_Registration_Info_UClass_UCompoundGeneratorPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompoundGeneratorPattern.OuterSingleton, Z_Construct_UClass_UCompoundGeneratorPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompoundGeneratorPattern.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UCompoundGeneratorPattern>()
{
	return UCompoundGeneratorPattern::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompoundGeneratorPattern);
UCompoundGeneratorPattern::~UCompoundGeneratorPattern() {}
// End Class UCompoundGeneratorPattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_CompoundGeneratorPattern_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompoundGeneratorPattern, UCompoundGeneratorPattern::StaticClass, TEXT("UCompoundGeneratorPattern"), &Z_Registration_Info_UClass_UCompoundGeneratorPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompoundGeneratorPattern), 2594675355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_CompoundGeneratorPattern_h_2408905740(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_CompoundGeneratorPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_CompoundGeneratorPattern_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
