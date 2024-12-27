// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GeneratorPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorPattern() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister();
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGeneratorPattern
void UGeneratorPattern::StaticRegisterNativesUGeneratorPattern()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneratorPattern);
UClass* Z_Construct_UClass_UGeneratorPattern_NoRegister()
{
	return UGeneratorPattern::StaticClass();
}
struct Z_Construct_UClass_UGeneratorPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GeneratorPattern.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GeneratorPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[] = {
		{ "Category", "GeneratorPattern" },
		{ "ModuleRelativePath", "Public/GeneratorPattern.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeneratorPattern_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeneratorPattern, parent), Z_Construct_UClass_ATerrainGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_parent_MetaData), NewProp_parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratorPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorPattern_Statics::NewProp_parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorPattern_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeneratorPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorPattern_Statics::ClassParams = {
	&UGeneratorPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeneratorPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorPattern_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeneratorPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeneratorPattern()
{
	if (!Z_Registration_Info_UClass_UGeneratorPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneratorPattern.OuterSingleton, Z_Construct_UClass_UGeneratorPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeneratorPattern.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGeneratorPattern>()
{
	return UGeneratorPattern::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorPattern);
UGeneratorPattern::~UGeneratorPattern() {}
// End Class UGeneratorPattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GeneratorPattern_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeneratorPattern, UGeneratorPattern::StaticClass, TEXT("UGeneratorPattern"), &Z_Registration_Info_UClass_UGeneratorPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneratorPattern), 982936977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GeneratorPattern_h_2797246445(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GeneratorPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GeneratorPattern_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
