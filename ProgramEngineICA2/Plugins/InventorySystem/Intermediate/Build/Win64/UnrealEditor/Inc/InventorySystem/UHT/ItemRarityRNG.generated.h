// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemRarityRNG.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERarityEnum : uint8;
enum class ERarityEnum : uint8; 
#ifdef INVENTORYSYSTEM_ItemRarityRNG_generated_h
#error "ItemRarityRNG.generated.h already included, missing '#pragma once' in ItemRarityRNG.h"
#endif
#define INVENTORYSYSTEM_ItemRarityRNG_generated_h

#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRarityDropRate); \
	DECLARE_FUNCTION(execGetRandomRarity);


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemRarityRNG(); \
	friend struct Z_Construct_UClass_UItemRarityRNG_Statics; \
public: \
	DECLARE_CLASS(UItemRarityRNG, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UItemRarityRNG)


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemRarityRNG(UItemRarityRNG&&); \
	UItemRarityRNG(const UItemRarityRNG&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemRarityRNG); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemRarityRNG); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemRarityRNG) \
	NO_API virtual ~UItemRarityRNG();


#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_13_PROLOG
#define FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UItemRarityRNG>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramEngineICA2_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRarityRNG_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
