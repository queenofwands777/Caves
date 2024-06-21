// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/BloodSplatter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodSplatter() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ABloodSplatter();
CAVES_API UClass* Z_Construct_UClass_ABloodSplatter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ABloodSplatter
void ABloodSplatter::StaticRegisterNativesABloodSplatter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloodSplatter);
UClass* Z_Construct_UClass_ABloodSplatter_NoRegister()
{
	return ABloodSplatter::StaticClass();
}
struct Z_Construct_UClass_ABloodSplatter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloodSplatter.h" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodSplatter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloodSplatter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodSplatter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloodSplatter_Statics::ClassParams = {
	&ABloodSplatter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodSplatter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloodSplatter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloodSplatter()
{
	if (!Z_Registration_Info_UClass_ABloodSplatter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloodSplatter.OuterSingleton, Z_Construct_UClass_ABloodSplatter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloodSplatter.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<ABloodSplatter>()
{
	return ABloodSplatter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodSplatter);
ABloodSplatter::~ABloodSplatter() {}
// End Class ABloodSplatter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloodSplatter, ABloodSplatter::StaticClass, TEXT("ABloodSplatter"), &Z_Registration_Info_UClass_ABloodSplatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloodSplatter), 2419206115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_528457680(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
