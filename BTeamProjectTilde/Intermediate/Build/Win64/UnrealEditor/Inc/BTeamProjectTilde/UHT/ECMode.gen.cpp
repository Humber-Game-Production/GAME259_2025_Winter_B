// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/ECMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECMode() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UEnum* Z_Construct_UEnum_BTeamProjectTilde_ECMode();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Enum ECMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECMode;
static UEnum* ECMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BTeamProjectTilde_ECMode, (UObject*)Z_Construct_UPackage__Script_BTeamProjectTilde(), TEXT("ECMode"));
	}
	return Z_Registration_Info_UEnum_ECMode.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UEnum* StaticEnum<ECMode>()
{
	return ECMode_StaticEnum();
}
struct Z_Construct_UEnum_BTeamProjectTilde_ECMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables use in Blueprints\n" },
#endif
		{ "FourCameras.DisplayName", "Four Cameras" },
		{ "FourCameras.Name", "ECMode::FourCameras" },
		{ "ModuleRelativePath", "Public/ECMode.h" },
		{ "OneCamera.DisplayName", "One Camera" },
		{ "OneCamera.Name", "ECMode::OneCamera" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables use in Blueprints" },
#endif
		{ "TwoCameras.DisplayName", "Two Cameras" },
		{ "TwoCameras.Name", "ECMode::TwoCameras" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECMode::OneCamera", (int64)ECMode::OneCamera },
		{ "ECMode::TwoCameras", (int64)ECMode::TwoCameras },
		{ "ECMode::FourCameras", (int64)ECMode::FourCameras },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BTeamProjectTilde_ECMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
	nullptr,
	"ECMode",
	"ECMode",
	Z_Construct_UEnum_BTeamProjectTilde_ECMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BTeamProjectTilde_ECMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BTeamProjectTilde_ECMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BTeamProjectTilde_ECMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BTeamProjectTilde_ECMode()
{
	if (!Z_Registration_Info_UEnum_ECMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECMode.InnerSingleton, Z_Construct_UEnum_BTeamProjectTilde_ECMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECMode.InnerSingleton;
}
// End Enum ECMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ECMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECMode_StaticEnum, TEXT("ECMode"), &Z_Registration_Info_UEnum_ECMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3806085766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ECMode_h_3738681925(TEXT("/Script/BTeamProjectTilde"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ECMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ECMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
