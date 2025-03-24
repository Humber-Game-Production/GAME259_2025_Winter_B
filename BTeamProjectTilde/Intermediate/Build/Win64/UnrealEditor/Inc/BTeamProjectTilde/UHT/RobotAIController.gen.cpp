// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/RobotAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ARobotAIController();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ARobotAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class ARobotAIController Function GetDesiredMovementDirection
struct Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics
{
	struct RobotAIController_eventGetDesiredMovementDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Robot Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement intention functions\n" },
#endif
		{ "ModuleRelativePath", "RobotAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement intention functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RobotAIController_eventGetDesiredMovementDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetDesiredMovementDirection", nullptr, nullptr, Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::RobotAIController_eventGetDesiredMovementDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::RobotAIController_eventGetDesiredMovementDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARobotAIController::execGetDesiredMovementDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDesiredMovementDirection();
	P_NATIVE_END;
}
// End Class ARobotAIController Function GetDesiredMovementDirection

// Begin Class ARobotAIController Function OnCalculateMovementIntent
struct RobotAIController_eventOnCalculateMovementIntent_Parms
{
	FVector Direction;
	FRotator Rotation;
};
static FName NAME_ARobotAIController_OnCalculateMovementIntent = FName(TEXT("OnCalculateMovementIntent"));
void ARobotAIController::OnCalculateMovementIntent(FVector Direction, FRotator Rotation)
{
	RobotAIController_eventOnCalculateMovementIntent_Parms Parms;
	Parms.Direction=Direction;
	Parms.Rotation=Rotation;
	ProcessEvent(FindFunctionChecked(NAME_ARobotAIController_OnCalculateMovementIntent),&Parms);
}
struct Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Robot Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Robot Events\")\n//void BroadcastMovementIntent(FVector Direction, FRotator Rotation);\n// Custom event for Blueprint graph\n" },
#endif
		{ "DisplayName", "On Calculate Movement Intent" },
		{ "ModuleRelativePath", "RobotAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Robot Events\")\nvoid BroadcastMovementIntent(FVector Direction, FRotator Rotation);\n Custom event for Blueprint graph" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RobotAIController_eventOnCalculateMovementIntent_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RobotAIController_eventOnCalculateMovementIntent_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "OnCalculateMovementIntent", nullptr, nullptr, Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::PropPointers), sizeof(RobotAIController_eventOnCalculateMovementIntent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::Function_MetaDataParams) };
static_assert(sizeof(RobotAIController_eventOnCalculateMovementIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARobotAIController Function OnCalculateMovementIntent

// Begin Class ARobotAIController Function SetMovementEnabled
struct Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics
{
	struct RobotAIController_eventSetMovementEnabled_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Robot Control" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((RobotAIController_eventSetMovementEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RobotAIController_eventSetMovementEnabled_Parms), &Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "SetMovementEnabled", nullptr, nullptr, Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::RobotAIController_eventSetMovementEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::RobotAIController_eventSetMovementEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARobotAIController_SetMovementEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARobotAIController_SetMovementEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARobotAIController::execSetMovementEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementEnabled(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class ARobotAIController Function SetMovementEnabled

// Begin Class ARobotAIController
void ARobotAIController::StaticRegisterNativesARobotAIController()
{
	UClass* Class = ARobotAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDesiredMovementDirection", &ARobotAIController::execGetDesiredMovementDirection },
		{ "SetMovementEnabled", &ARobotAIController::execSetMovementEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARobotAIController);
UClass* Z_Construct_UClass_ARobotAIController_NoRegister()
{
	return ARobotAIController::StaticClass();
}
struct Z_Construct_UClass_ARobotAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RobotAIController.h" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_forwardFacingMeshObj_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_forwardFacingMeshObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobotAIController_GetDesiredMovementDirection, "GetDesiredMovementDirection" }, // 2307102388
		{ &Z_Construct_UFunction_ARobotAIController_OnCalculateMovementIntent, "OnCalculateMovementIntent" }, // 486633498
		{ &Z_Construct_UFunction_ARobotAIController_SetMovementEnabled, "SetMovementEnabled" }, // 3244941190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_forwardFacingMeshObj = { "forwardFacingMeshObj", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotAIController, forwardFacingMeshObj), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_forwardFacingMeshObj_MetaData), NewProp_forwardFacingMeshObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_forwardFacingMeshObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARobotAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARobotAIController_Statics::ClassParams = {
	&ARobotAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARobotAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARobotAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARobotAIController()
{
	if (!Z_Registration_Info_UClass_ARobotAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARobotAIController.OuterSingleton, Z_Construct_UClass_ARobotAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARobotAIController.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<ARobotAIController>()
{
	return ARobotAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotAIController);
ARobotAIController::~ARobotAIController() {}
// End Class ARobotAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_duyan_OneDrive___Humber_Polytechnic_Documents_GitHub_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARobotAIController, ARobotAIController::StaticClass, TEXT("ARobotAIController"), &Z_Registration_Info_UClass_ARobotAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARobotAIController), 3371314478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_duyan_OneDrive___Humber_Polytechnic_Documents_GitHub_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_4003949839(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Users_duyan_OneDrive___Humber_Polytechnic_Documents_GitHub_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_duyan_OneDrive___Humber_Polytechnic_Documents_GitHub_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
