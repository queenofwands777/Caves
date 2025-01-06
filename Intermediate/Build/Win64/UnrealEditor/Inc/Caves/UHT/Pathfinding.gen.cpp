// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/Pathfinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathfinding() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_APathfinding();
CAVES_API UClass* Z_Construct_UClass_APathfinding_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class APathfinding Function GetPath
struct Z_Construct_UFunction_APathfinding_GetPath_Statics
{
	struct Pathfinding_eventGetPath_Parms
	{
		FVector from;
		FVector to;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/Pathfinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_from;
	static const UECodeGen_Private::FStructPropertyParams NewProp_to;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pathfinding_eventGetPath_Parms, from), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pathfinding_eventGetPath_Parms, to), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pathfinding_eventGetPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathfinding_GetPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_from,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_to,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfinding_GetPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APathfinding_GetPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathfinding_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathfinding, nullptr, "GetPath", nullptr, nullptr, Z_Construct_UFunction_APathfinding_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathfinding_GetPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_APathfinding_GetPath_Statics::Pathfinding_eventGetPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathfinding_GetPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathfinding_GetPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APathfinding_GetPath_Statics::Pathfinding_eventGetPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APathfinding_GetPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathfinding_GetPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APathfinding::execGetPath)
{
	P_GET_STRUCT(FVector,Z_Param_from);
	P_GET_STRUCT(FVector,Z_Param_to);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPath(Z_Param_from,Z_Param_to);
	P_NATIVE_END;
}
// End Class APathfinding Function GetPath

// Begin Class APathfinding
void APathfinding::StaticRegisterNativesAPathfinding()
{
	UClass* Class = APathfinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPath", &APathfinding::execGetPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APathfinding);
UClass* Z_Construct_UClass_APathfinding_NoRegister()
{
	return APathfinding::StaticClass();
}
struct Z_Construct_UClass_APathfinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pathfinding.h" },
		{ "ModuleRelativePath", "Public/Pathfinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APathfinding_GetPath, "GetPath" }, // 2105173405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathfinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APathfinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathfinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APathfinding_Statics::ClassParams = {
	&APathfinding::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathfinding_Statics::Class_MetaDataParams), Z_Construct_UClass_APathfinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APathfinding()
{
	if (!Z_Registration_Info_UClass_APathfinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APathfinding.OuterSingleton, Z_Construct_UClass_APathfinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APathfinding.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<APathfinding>()
{
	return APathfinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APathfinding);
APathfinding::~APathfinding() {}
// End Class APathfinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APathfinding, APathfinding::StaticClass, TEXT("APathfinding"), &Z_Registration_Info_UClass_APathfinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APathfinding), 3485844188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_2971316061(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
