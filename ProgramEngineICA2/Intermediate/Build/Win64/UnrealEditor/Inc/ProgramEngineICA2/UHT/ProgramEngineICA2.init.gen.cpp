// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgramEngineICA2_init() {}
	PROGRAMENGINEICA2_API UFunction* Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature();
	PROGRAMENGINEICA2_API UFunction* Z_Construct_UDelegateFunction_ProgramEngineICA2_OnPickUp__DelegateSignature();
	PROGRAMENGINEICA2_API UFunction* Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProgramEngineICA2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProgramEngineICA2()
	{
		if (!Z_Registration_Info_UPackage__Script_ProgramEngineICA2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgramEngineICA2_OnInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgramEngineICA2_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgramEngineICA2_OnSlotChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProgramEngineICA2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDCF59AB2,
				0x1769FB09,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProgramEngineICA2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProgramEngineICA2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProgramEngineICA2(Z_Construct_UPackage__Script_ProgramEngineICA2, TEXT("/Script/ProgramEngineICA2"), Z_Registration_Info_UPackage__Script_ProgramEngineICA2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDCF59AB2, 0x1769FB09));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
