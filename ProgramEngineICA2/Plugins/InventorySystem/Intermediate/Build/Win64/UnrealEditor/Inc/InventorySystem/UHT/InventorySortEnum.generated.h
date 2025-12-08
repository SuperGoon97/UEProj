// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySortEnum.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYSYSTEM_InventorySortEnum_generated_h
#error "InventorySortEnum.generated.h already included, missing '#pragma once' in InventorySortEnum.h"
#endif
#define INVENTORYSYSTEM_InventorySortEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_InventorySortEnum_h


#define FOREACH_ENUM_EINVENTORYSORTENUM(op) \
	op(EInventorySortEnum::Name) \
	op(EInventorySortEnum::Quantity) \
	op(EInventorySortEnum::Weight) \
	op(EInventorySortEnum::Rarity) \
	op(EInventorySortEnum::Value) 

enum class EInventorySortEnum : uint8;
template<> struct TIsUEnumClass<EInventorySortEnum> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EInventorySortEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
