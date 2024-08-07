// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/BeccaUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeccaUtil() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UBeccaUtil();
CAVES_API UClass* Z_Construct_UClass_UBeccaUtil_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UBeccaUtil Function HelloBlueprint
struct Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics
{
	struct BeccaUtil_eventHelloBlueprint_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyFunctions" },
		{ "ModuleRelativePath", "Public/BeccaUtil.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BeccaUtil_eventHelloBlueprint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeccaUtil, nullptr, "HelloBlueprint", nullptr, nullptr, Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::BeccaUtil_eventHelloBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::BeccaUtil_eventHelloBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBeccaUtil_HelloBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBeccaUtil_HelloBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBeccaUtil::execHelloBlueprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->HelloBlueprint();
	P_NATIVE_END;
}
// End Class UBeccaUtil Function HelloBlueprint

// Begin Class UBeccaUtil
void UBeccaUtil::StaticRegisterNativesUBeccaUtil()
{
	UClass* Class = UBeccaUtil::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HelloBlueprint", &UBeccaUtil::execHelloBlueprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBeccaUtil);
UClass* Z_Construct_UClass_UBeccaUtil_NoRegister()
{
	return UBeccaUtil::StaticClass();
}
struct Z_Construct_UClass_UBeccaUtil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BeccaUtil.h" },
		{ "ModuleRelativePath", "Public/BeccaUtil.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBeccaUtil_HelloBlueprint, "HelloBlueprint" }, // 880549427
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBeccaUtil>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBeccaUtil_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBeccaUtil_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBeccaUtil_Statics::ClassParams = {
	&UBeccaUtil::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBeccaUtil_Statics::Class_MetaDataParams), Z_Construct_UClass_UBeccaUtil_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBeccaUtil()
{
	if (!Z_Registration_Info_UClass_UBeccaUtil.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBeccaUtil.OuterSingleton, Z_Construct_UClass_UBeccaUtil_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBeccaUtil.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UBeccaUtil>()
{
	return UBeccaUtil::StaticClass();
}
UBeccaUtil::UBeccaUtil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBeccaUtil);
UBeccaUtil::~UBeccaUtil() {}
// End Class UBeccaUtil

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_Public_BeccaUtil_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBeccaUtil, UBeccaUtil::StaticClass, TEXT("UBeccaUtil"), &Z_Registration_Info_UClass_UBeccaUtil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBeccaUtil), 4062149789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_Public_BeccaUtil_h_2162166681(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_Public_BeccaUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Theo_source_repos_queenofwands777_Caves_Source_Caves_Public_BeccaUtil_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
