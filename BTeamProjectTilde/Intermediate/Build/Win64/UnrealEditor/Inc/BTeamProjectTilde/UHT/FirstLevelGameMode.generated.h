// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstLevelGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BTEAMPROJECTTILDE_FirstLevelGameMode_generated_h
#error "FirstLevelGameMode.generated.h already included, missing '#pragma once' in FirstLevelGameMode.h"
#endif
#define BTEAMPROJECTTILDE_FirstLevelGameMode_generated_h

#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_10_DELEGATE \
BTEAMPROJECTTILDE_API void FLastPuzzleDone_DelegateWrapper(const FMulticastScriptDelegate& LastPuzzleDone);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePuzzlesAchieved); \
	DECLARE_FUNCTION(execRestartLevel);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstLevelGameMode(); \
	friend struct Z_Construct_UClass_AFirstLevelGameMode_Statics; \
public: \
	DECLARE_CLASS(AFirstLevelGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BTeamProjectTilde"), BTEAMPROJECTTILDE_API) \
	DECLARE_SERIALIZER(AFirstLevelGameMode)


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstLevelGameMode(AFirstLevelGameMode&&); \
	AFirstLevelGameMode(const AFirstLevelGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BTEAMPROJECTTILDE_API, AFirstLevelGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstLevelGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstLevelGameMode) \
	BTEAMPROJECTTILDE_API virtual ~AFirstLevelGameMode();


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_12_PROLOG
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTEAMPROJECTTILDE_API UClass* StaticClass<class AFirstLevelGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_FirstLevelGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
