// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/CoopGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopGameGameModeBase() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ACoopGameGameModeBase_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACoopGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ACoopGameGameModeBase::StaticRegisterNativesACoopGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoopGameGameModeBase);
	UClass* Z_Construct_UClass_ACoopGameGameModeBase_NoRegister()
	{
		return ACoopGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACoopGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoopGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoopGameGameModeBase.h" },
		{ "ModuleRelativePath", "CoopGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoopGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoopGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoopGameGameModeBase_Statics::ClassParams = {
		&ACoopGameGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACoopGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoopGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoopGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACoopGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoopGameGameModeBase.OuterSingleton, Z_Construct_UClass_ACoopGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoopGameGameModeBase.OuterSingleton;
	}
	template<> COOPGAME_API UClass* StaticClass<ACoopGameGameModeBase>()
	{
		return ACoopGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoopGameGameModeBase);
	struct Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_CoopGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_CoopGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoopGameGameModeBase, ACoopGameGameModeBase::StaticClass, TEXT("ACoopGameGameModeBase"), &Z_Registration_Info_UClass_ACoopGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoopGameGameModeBase), 2932995982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_CoopGameGameModeBase_h_3156694283(TEXT("/Script/CoopGame"),
		Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_CoopGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_CoopGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
