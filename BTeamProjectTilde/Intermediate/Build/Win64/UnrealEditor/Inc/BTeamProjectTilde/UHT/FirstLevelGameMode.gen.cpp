// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/FirstLevelGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstLevelGameMode() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_AFirstLevelGameMode();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_AFirstLevelGameMode_NoRegister();
BTEAMPROJECTTILDE_API UFunction* Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Delegate FLastPuzzleDone
struct Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstLevelGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BTeamProjectTilde, nullptr, "LastPuzzleDone__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLastPuzzleDone_DelegateWrapper(const FMulticastScriptDelegate& LastPuzzleDone)
{
	LastPuzzleDone.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FLastPuzzleDone

// Begin Class AFirstLevelGameMode Function RestartLevel
struct Z_Construct_UFunction_AFirstLevelGameMode_RestartLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstLevelGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstLevelGameMode_RestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstLevelGameMode, nullptr, "RestartLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstLevelGameMode_RestartLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstLevelGameMode_RestartLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstLevelGameMode_RestartLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstLevelGameMode_RestartLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstLevelGameMode::execRestartLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartLevel();
	P_NATIVE_END;
}
// End Class AFirstLevelGameMode Function RestartLevel

// Begin Class AFirstLevelGameMode Function UpdatePuzzlesAchieved
struct Z_Construct_UFunction_AFirstLevelGameMode_UpdatePuzzlesAchieved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Self-Explanitory\n" },
#endif
		{ "ModuleRelativePath", "Public/FirstLevelGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Self-Explanitory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstLevelGameMode_UpdatePuzzlesAchieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstLevelGameMode, nullptr, "UpdatePuzzlesAchieved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstLevelGameMode_UpdatePuzzlesAchieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstLevelGameMode_UpdatePuzzlesAchieved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstLevelGameMode_UpdatePuzzlesAchieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstLevelGameMode_UpdatePuzzlesAchieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstLevelGameMode::execUpdatePuzzlesAchieved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePuzzlesAchieved();
	P_NATIVE_END;
}
// End Class AFirstLevelGameMode Function UpdatePuzzlesAchieved

// Begin Class AFirstLevelGameMode
void AFirstLevelGameMode::StaticRegisterNativesAFirstLevelGameMode()
{
	UClass* Class = AFirstLevelGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RestartLevel", &AFirstLevelGameMode::execRestartLevel },
		{ "UpdatePuzzlesAchieved", &AFirstLevelGameMode::execUpdatePuzzlesAchieved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstLevelGameMode);
UClass* Z_Construct_UClass_AFirstLevelGameMode_NoRegister()
{
	return AFirstLevelGameMode::StaticClass();
}
struct Z_Construct_UClass_AFirstLevelGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate To Restart\n" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstLevelGameMode.h" },
		{ "ModuleRelativePath", "Public/FirstLevelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate To Restart" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPuzzleDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstLevelGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LastPuzzleDone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstLevelGameMode_RestartLevel, "RestartLevel" }, // 2445252155
		{ &Z_Construct_UFunction_AFirstLevelGameMode_UpdatePuzzlesAchieved, "UpdatePuzzlesAchieved" }, // 4178182959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstLevelGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFirstLevelGameMode_Statics::NewProp_LastPuzzleDone = { "LastPuzzleDone", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstLevelGameMode, LastPuzzleDone), Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPuzzleDone_MetaData), NewProp_LastPuzzleDone_MetaData) }; // 1953362007
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstLevelGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstLevelGameMode_Statics::NewProp_LastPuzzleDone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstLevelGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirstLevelGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstLevelGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstLevelGameMode_Statics::ClassParams = {
	&AFirstLevelGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFirstLevelGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstLevelGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstLevelGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstLevelGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstLevelGameMode()
{
	if (!Z_Registration_Info_UClass_AFirstLevelGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstLevelGameMode.OuterSingleton, Z_Construct_UClass_AFirstLevelGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstLevelGameMode.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<AFirstLevelGameMode>()
{
	return AFirstLevelGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstLevelGameMode);
AFirstLevelGameMode::~AFirstLevelGameMode() {}
// End Class AFirstLevelGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstLevelGameMode, AFirstLevelGameMode::StaticClass, TEXT("AFirstLevelGameMode"), &Z_Registration_Info_UClass_AFirstLevelGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstLevelGameMode), 2788635736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_2653641895(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
