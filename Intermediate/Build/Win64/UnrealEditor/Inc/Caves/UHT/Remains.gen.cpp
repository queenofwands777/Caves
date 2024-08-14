// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/Remains.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemains() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ARemains();
CAVES_API UClass* Z_Construct_UClass_ARemains_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ARemains
void ARemains::StaticRegisterNativesARemains()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARemains);
UClass* Z_Construct_UClass_ARemains_NoRegister()
{
	return ARemains::StaticClass();
}
struct Z_Construct_UClass_ARemains_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Remains.h" },
		{ "ModuleRelativePath", "Public/Remains.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARemains>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARemains_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARemains_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARemains_Statics::ClassParams = {
	&ARemains::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARemains_Statics::Class_MetaDataParams), Z_Construct_UClass_ARemains_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARemains()
{
	if (!Z_Registration_Info_UClass_ARemains.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARemains.OuterSingleton, Z_Construct_UClass_ARemains_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARemains.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<ARemains>()
{
	return ARemains::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARemains);
ARemains::~ARemains() {}
// End Class ARemains

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Remains_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARemains, ARemains::StaticClass, TEXT("ARemains"), &Z_Registration_Info_UClass_ARemains, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARemains), 1148395152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Remains_h_1949108236(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Remains_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Remains_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
