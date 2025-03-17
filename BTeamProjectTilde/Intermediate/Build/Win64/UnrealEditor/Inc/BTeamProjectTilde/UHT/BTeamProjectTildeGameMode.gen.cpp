// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/BTeamProjectTildeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTeamProjectTildeGameMode() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ABTeamProjectTildeGameMode();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ABTeamProjectTildeGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class ABTeamProjectTildeGameMode
void ABTeamProjectTildeGameMode::StaticRegisterNativesABTeamProjectTildeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABTeamProjectTildeGameMode);
UClass* Z_Construct_UClass_ABTeamProjectTildeGameMode_NoRegister()
{
	return ABTeamProjectTildeGameMode::StaticClass();
}
struct Z_Construct_UClass_ABTeamProjectTildeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BTeamProjectTildeGameMode.h" },
		{ "ModuleRelativePath", "BTeamProjectTildeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABTeamProjectTildeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABTeamProjectTildeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABTeamProjectTildeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABTeamProjectTildeGameMode_Statics::ClassParams = {
	&ABTeamProjectTildeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABTeamProjectTildeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABTeamProjectTildeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABTeamProjectTildeGameMode()
{
	if (!Z_Registration_Info_UClass_ABTeamProjectTildeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABTeamProjectTildeGameMode.OuterSingleton, Z_Construct_UClass_ABTeamProjectTildeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABTeamProjectTildeGameMode.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<ABTeamProjectTildeGameMode>()
{
	return ABTeamProjectTildeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABTeamProjectTildeGameMode);
ABTeamProjectTildeGameMode::~ABTeamProjectTildeGameMode() {}
// End Class ABTeamProjectTildeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cassi_Desktop_Git_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABTeamProjectTildeGameMode, ABTeamProjectTildeGameMode::StaticClass, TEXT("ABTeamProjectTildeGameMode"), &Z_Registration_Info_UClass_ABTeamProjectTildeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABTeamProjectTildeGameMode), 399305807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cassi_Desktop_Git_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeGameMode_h_882815681(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Users_cassi_Desktop_Git_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cassi_Desktop_Git_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
