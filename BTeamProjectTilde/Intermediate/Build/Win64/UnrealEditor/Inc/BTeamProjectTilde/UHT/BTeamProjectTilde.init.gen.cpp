// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTeamProjectTilde_init() {}
	BTEAMPROJECTTILDE_API UFunction* Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature();
	BTEAMPROJECTTILDE_API UFunction* Z_Construct_UDelegateFunction_BTeamProjectTilde_RespawnPlayers__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BTeamProjectTilde;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde()
	{
		if (!Z_Registration_Info_UPackage__Script_BTeamProjectTilde.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BTeamProjectTilde_LastPuzzleDone__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BTeamProjectTilde_RespawnPlayers__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BTeamProjectTilde",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8EC9208A,
				0xE66CDE52,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BTeamProjectTilde.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BTeamProjectTilde.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BTeamProjectTilde(Z_Construct_UPackage__Script_BTeamProjectTilde, TEXT("/Script/BTeamProjectTilde"), Z_Registration_Info_UPackage__Script_BTeamProjectTilde, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8EC9208A, 0xE66CDE52));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
