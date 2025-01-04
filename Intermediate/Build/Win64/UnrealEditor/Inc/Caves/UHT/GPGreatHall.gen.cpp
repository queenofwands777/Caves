// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPGreatHall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPGreatHall() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPGreatHall();
CAVES_API UClass* Z_Construct_UClass_UGPGreatHall_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPGreatHall
void UGPGreatHall::StaticRegisterNativesUGPGreatHall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPGreatHall);
UClass* Z_Construct_UClass_UGPGreatHall_NoRegister()
{
	return UGPGreatHall::StaticClass();
}
struct Z_Construct_UClass_UGPGreatHall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPGreatHall.h" },
		{ "ModuleRelativePath", "Public/GPGreatHall.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPGreatHall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPGreatHall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPGreatHall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPGreatHall_Statics::ClassParams = {
	&UGPGreatHall::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPGreatHall_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPGreatHall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPGreatHall()
{
	if (!Z_Registration_Info_UClass_UGPGreatHall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPGreatHall.OuterSingleton, Z_Construct_UClass_UGPGreatHall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPGreatHall.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPGreatHall>()
{
	return UGPGreatHall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPGreatHall);
UGPGreatHall::~UGPGreatHall() {}
// End Class UGPGreatHall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreatHall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPGreatHall, UGPGreatHall::StaticClass, TEXT("UGPGreatHall"), &Z_Registration_Info_UClass_UGPGreatHall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPGreatHall), 2419524228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreatHall_h_226257343(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreatHall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreatHall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
