// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/CharacterAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAI() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ACharacterAI();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ACharacterAI_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class ACharacterAI Function GetMidpoint
struct Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics
{
	struct CharacterAI_eventGetMidpoint_Parms
	{
		float AngleA;
		float AngleB;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "ModuleRelativePath", "CharacterAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::NewProp_AngleA = { "AngleA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAI_eventGetMidpoint_Parms, AngleA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::NewProp_AngleB = { "AngleB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAI_eventGetMidpoint_Parms, AngleB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAI_eventGetMidpoint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::NewProp_AngleA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::NewProp_AngleB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterAI, nullptr, "GetMidpoint", nullptr, nullptr, Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::CharacterAI_eventGetMidpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::CharacterAI_eventGetMidpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterAI_GetMidpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterAI_GetMidpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterAI::execGetMidpoint)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngleA);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngleB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMidpoint(Z_Param_AngleA,Z_Param_AngleB);
	P_NATIVE_END;
}
// End Class ACharacterAI Function GetMidpoint

// Begin Class ACharacterAI
void ACharacterAI::StaticRegisterNativesACharacterAI()
{
	UClass* Class = ACharacterAI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMidpoint", &ACharacterAI::execGetMidpoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterAI);
UClass* Z_Construct_UClass_ACharacterAI_NoRegister()
{
	return ACharacterAI::StaticClass();
}
struct Z_Construct_UClass_ACharacterAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterAI.h" },
		{ "ModuleRelativePath", "CharacterAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_headMesh_MetaData[] = {
		{ "Category", "CharacterAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_headRotation_MetaData[] = {
		{ "Category", "CharacterAI" },
		{ "ModuleRelativePath", "CharacterAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_headAngle_MetaData[] = {
		{ "Category", "CharacterAI" },
		{ "ModuleRelativePath", "CharacterAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_headMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_headRotation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_headAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterAI_GetMidpoint, "GetMidpoint" }, // 2616558868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterAI_Statics::NewProp_headMesh = { "headMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterAI, headMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_headMesh_MetaData), NewProp_headMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterAI_Statics::NewProp_headRotation = { "headRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterAI, headRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_headRotation_MetaData), NewProp_headRotation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ACharacterAI_Statics::NewProp_headAngle = { "headAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterAI, headAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_headAngle_MetaData), NewProp_headAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterAI_Statics::NewProp_headMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterAI_Statics::NewProp_headRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterAI_Statics::NewProp_headAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterAI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterAI_Statics::ClassParams = {
	&ACharacterAI::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACharacterAI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterAI_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterAI_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterAI()
{
	if (!Z_Registration_Info_UClass_ACharacterAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterAI.OuterSingleton, Z_Construct_UClass_ACharacterAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterAI.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<ACharacterAI>()
{
	return ACharacterAI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterAI);
ACharacterAI::~ACharacterAI() {}
// End Class ACharacterAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterAI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterAI, ACharacterAI::StaticClass, TEXT("ACharacterAI"), &Z_Registration_Info_UClass_ACharacterAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterAI), 1744338314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterAI_h_1287082907(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterAI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
