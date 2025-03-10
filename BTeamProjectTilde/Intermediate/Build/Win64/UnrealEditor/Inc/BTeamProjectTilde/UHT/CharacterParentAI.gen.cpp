// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/CharacterParentAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterParentAI() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ACharacterParentAI();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ACharacterParentAI_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class ACharacterParentAI
void ACharacterParentAI::StaticRegisterNativesACharacterParentAI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterParentAI);
UClass* Z_Construct_UClass_ACharacterParentAI_NoRegister()
{
	return ACharacterParentAI::StaticClass();
}
struct Z_Construct_UClass_ACharacterParentAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterParentAI.h" },
		{ "ModuleRelativePath", "CharacterParentAI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterParentAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacterParentAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterParentAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterParentAI_Statics::ClassParams = {
	&ACharacterParentAI::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterParentAI_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterParentAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterParentAI()
{
	if (!Z_Registration_Info_UClass_ACharacterParentAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterParentAI.OuterSingleton, Z_Construct_UClass_ACharacterParentAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterParentAI.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<ACharacterParentAI>()
{
	return ACharacterParentAI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterParentAI);
ACharacterParentAI::~ACharacterParentAI() {}
// End Class ACharacterParentAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mrmys_OneDrive_Documents_GitHub_GAME259_2025_Winter_B_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterParentAI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterParentAI, ACharacterParentAI::StaticClass, TEXT("ACharacterParentAI"), &Z_Registration_Info_UClass_ACharacterParentAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterParentAI), 2146432132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mrmys_OneDrive_Documents_GitHub_GAME259_2025_Winter_B_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterParentAI_h_184484459(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Users_mrmys_OneDrive_Documents_GitHub_GAME259_2025_Winter_B_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterParentAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mrmys_OneDrive_Documents_GitHub_GAME259_2025_Winter_B_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_CharacterParentAI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
