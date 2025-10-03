// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProgramEngineICA2Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROGRAMENGINEICA2_ProgramEngineICA2Projectile_generated_h
#error "ProgramEngineICA2Projectile.generated.h already included, missing '#pragma once' in ProgramEngineICA2Projectile.h"
#endif
#define PROGRAMENGINEICA2_ProgramEngineICA2Projectile_generated_h

#define FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProgramEngineICA2Projectile(); \
	friend struct Z_Construct_UClass_AProgramEngineICA2Projectile_Statics; \
public: \
	DECLARE_CLASS(AProgramEngineICA2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProgramEngineICA2"), NO_API) \
	DECLARE_SERIALIZER(AProgramEngineICA2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProgramEngineICA2Projectile(AProgramEngineICA2Projectile&&); \
	AProgramEngineICA2Projectile(const AProgramEngineICA2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProgramEngineICA2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProgramEngineICA2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProgramEngineICA2Projectile) \
	NO_API virtual ~AProgramEngineICA2Projectile();


#define FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_12_PROLOG
#define FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAMENGINEICA2_API UClass* StaticClass<class AProgramEngineICA2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
