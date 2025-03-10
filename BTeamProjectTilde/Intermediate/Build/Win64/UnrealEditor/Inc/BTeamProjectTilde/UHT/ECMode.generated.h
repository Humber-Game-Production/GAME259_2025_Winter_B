// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BTEAMPROJECTTILDE_ECMode_generated_h
#error "ECMode.generated.h already included, missing '#pragma once' in ECMode.h"
#endif
#define BTEAMPROJECTTILDE_ECMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ECMode_h


#define FOREACH_ENUM_ECMODE(op) \
	op(ECMode::OneCamera) \
	op(ECMode::TwoCameras) \
	op(ECMode::FourCameras) 

enum class ECMode : uint8;
template<> struct TIsUEnumClass<ECMode> { enum { Value = true }; };
template<> BTEAMPROJECTTILDE_API UEnum* StaticEnum<ECMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
