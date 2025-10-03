// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgramEngineICA2/ProgramEngineICA2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgramEngineICA2GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_AProgramEngineICA2GameMode();
PROGRAMENGINEICA2_API UClass* Z_Construct_UClass_AProgramEngineICA2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProgramEngineICA2();
// End Cross Module References

// Begin Class AProgramEngineICA2GameMode
void AProgramEngineICA2GameMode::StaticRegisterNativesAProgramEngineICA2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProgramEngineICA2GameMode);
UClass* Z_Construct_UClass_AProgramEngineICA2GameMode_NoRegister()
{
	return AProgramEngineICA2GameMode::StaticClass();
}
struct Z_Construct_UClass_AProgramEngineICA2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProgramEngineICA2GameMode.h" },
		{ "ModuleRelativePath", "ProgramEngineICA2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgramEngineICA2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProgramEngineICA2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProgramEngineICA2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgramEngineICA2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProgramEngineICA2GameMode_Statics::ClassParams = {
	&AProgramEngineICA2GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgramEngineICA2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProgramEngineICA2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProgramEngineICA2GameMode()
{
	if (!Z_Registration_Info_UClass_AProgramEngineICA2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProgramEngineICA2GameMode.OuterSingleton, Z_Construct_UClass_AProgramEngineICA2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProgramEngineICA2GameMode.OuterSingleton;
}
template<> PROGRAMENGINEICA2_API UClass* StaticClass<AProgramEngineICA2GameMode>()
{
	return AProgramEngineICA2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProgramEngineICA2GameMode);
AProgramEngineICA2GameMode::~AProgramEngineICA2GameMode() {}
// End Class AProgramEngineICA2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProgramEngineICA2GameMode, AProgramEngineICA2GameMode::StaticClass, TEXT("AProgramEngineICA2GameMode"), &Z_Registration_Info_UClass_AProgramEngineICA2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProgramEngineICA2GameMode), 983117476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2GameMode_h_455781526(TEXT("/Script/ProgramEngineICA2"),
	Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GithubProjects_CapJam2024_CAPJAM2024_ProgramEngineICA2_Source_ProgramEngineICA2_ProgramEngineICA2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
