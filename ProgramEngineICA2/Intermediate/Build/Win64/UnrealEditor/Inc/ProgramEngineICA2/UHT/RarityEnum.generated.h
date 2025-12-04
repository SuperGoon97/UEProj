// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RarityEnum.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAMENGINEICA2_RarityEnum_generated_h
#error "RarityEnum.generated.h already included, missing '#pragma once' in RarityEnum.h"
#endif
#define PROGRAMENGINEICA2_RarityEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramEngineICA2_Source_ProgramEngineICA2_RarityEnum_h


#define FOREACH_ENUM_ERARITYENUM(op) \
	op(ERarityEnum::Common) \
	op(ERarityEnum::Uncommon) \
	op(ERarityEnum::Rare) \
	op(ERarityEnum::Epic) \
	op(ERarityEnum::Legendary) 

enum class ERarityEnum : uint8;
template<> struct TIsUEnumClass<ERarityEnum> { enum { Value = true }; };
template<> PROGRAMENGINEICA2_API UEnum* StaticEnum<ERarityEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
