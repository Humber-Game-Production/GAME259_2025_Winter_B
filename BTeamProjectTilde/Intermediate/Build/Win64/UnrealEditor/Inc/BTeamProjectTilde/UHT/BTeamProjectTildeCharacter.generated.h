// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BTeamProjectTildeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BTEAMPROJECTTILDE_BTeamProjectTildeCharacter_generated_h
#error "BTeamProjectTildeCharacter.generated.h already included, missing '#pragma once' in BTeamProjectTildeCharacter.h"
#endif
#define BTEAMPROJECTTILDE_BTeamProjectTildeCharacter_generated_h

#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h_10_DELEGATE \
BTEAMPROJECTTILDE_API void FRespawnPlayers_DelegateWrapper(const FMulticastScriptDelegate& RespawnPlayers);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABTeamProjectTildeCharacter(); \
	friend struct Z_Construct_UClass_ABTeamProjectTildeCharacter_Statics; \
public: \
	DECLARE_CLASS(ABTeamProjectTildeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BTeamProjectTilde"), NO_API) \
	DECLARE_SERIALIZER(ABTeamProjectTildeCharacter)


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABTeamProjectTildeCharacter(ABTeamProjectTildeCharacter&&); \
	ABTeamProjectTildeCharacter(const ABTeamProjectTildeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABTeamProjectTildeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABTeamProjectTildeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABTeamProjectTildeCharacter) \
	NO_API virtual ~ABTeamProjectTildeCharacter();


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h_21_PROLOG
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTEAMPROJECTTILDE_API UClass* StaticClass<class ABTeamProjectTildeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_BTeamProjectTildeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
