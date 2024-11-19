// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/EnemyList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyList() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UEnemyList();
CAVES_API UClass* Z_Construct_UClass_UEnemyList_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UEnemyList
void UEnemyList::StaticRegisterNativesUEnemyList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyList);
UClass* Z_Construct_UClass_UEnemyList_NoRegister()
{
	return UEnemyList::StaticClass();
}
struct Z_Construct_UClass_UEnemyList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemyList.h" },
		{ "ModuleRelativePath", "Public/EnemyList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "Public/EnemyList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Enemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnemyList_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyList_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyList, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemies_MetaData), NewProp_Enemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyList_Statics::NewProp_Enemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyList_Statics::NewProp_Enemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyList_Statics::ClassParams = {
	&UEnemyList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemyList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyList_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyList_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyList()
{
	if (!Z_Registration_Info_UClass_UEnemyList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyList.OuterSingleton, Z_Construct_UClass_UEnemyList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyList.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UEnemyList>()
{
	return UEnemyList::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyList);
UEnemyList::~UEnemyList() {}
// End Class UEnemyList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_EnemyList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyList, UEnemyList::StaticClass, TEXT("UEnemyList"), &Z_Registration_Info_UClass_UEnemyList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyList), 2252403036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_EnemyList_h_2130368662(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_EnemyList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_EnemyList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
