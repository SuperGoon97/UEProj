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
#ifdef INVENTORYSYSTEM_RarityEnum_generated_h
#error "RarityEnum.generated.h already included, missing '#pragma once' in RarityEnum.h"
#endif
#define INVENTORYSYSTEM_RarityEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_RarityEnum_h


#define FOREACH_ENUM_ERARITYENUM(op) \
	op(ERarityEnum::Common) \
	op(ERarityEnum::Uncommon) \
	op(ERarityEnum::Rare) \
	op(ERarityEnum::Epic) \
	op(ERarityEnum::Legendary) 

enum class ERarityEnum : uint8;
template<> struct TIsUEnumClass<ERarityEnum> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<ERarityEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
