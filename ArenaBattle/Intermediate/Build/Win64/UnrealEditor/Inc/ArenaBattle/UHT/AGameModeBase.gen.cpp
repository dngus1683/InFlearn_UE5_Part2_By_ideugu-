// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Game/AGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGameModeBase() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AAGameModeBase();
ARENABATTLE_API UClass* Z_Construct_UClass_AAGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class AAGameModeBase
void AAGameModeBase::StaticRegisterNativesAAGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGameModeBase);
UClass* Z_Construct_UClass_AAGameModeBase_NoRegister()
{
	return AAGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AAGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/AGameModeBase.h" },
		{ "ModuleRelativePath", "Game/AGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGameModeBase_Statics::ClassParams = {
	&AAGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGameModeBase()
{
	if (!Z_Registration_Info_UClass_AAGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGameModeBase.OuterSingleton, Z_Construct_UClass_AAGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGameModeBase.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AAGameModeBase>()
{
	return AAGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGameModeBase);
AAGameModeBase::~AAGameModeBase() {}
// End Class AAGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGameModeBase, AAGameModeBase::StaticClass, TEXT("AAGameModeBase"), &Z_Registration_Info_UClass_AAGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGameModeBase), 941473929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_3741266895(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
