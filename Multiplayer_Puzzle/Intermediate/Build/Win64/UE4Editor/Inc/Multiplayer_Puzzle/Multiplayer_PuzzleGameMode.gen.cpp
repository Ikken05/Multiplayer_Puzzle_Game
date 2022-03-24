// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Multiplayer_Puzzle/Multiplayer_PuzzleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayer_PuzzleGameMode() {}
// Cross Module References
	MULTIPLAYER_PUZZLE_API UClass* Z_Construct_UClass_AMultiplayer_PuzzleGameMode_NoRegister();
	MULTIPLAYER_PUZZLE_API UClass* Z_Construct_UClass_AMultiplayer_PuzzleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Multiplayer_Puzzle();
// End Cross Module References
	void AMultiplayer_PuzzleGameMode::StaticRegisterNativesAMultiplayer_PuzzleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayer_PuzzleGameMode_NoRegister()
	{
		return AMultiplayer_PuzzleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Multiplayer_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Multiplayer_PuzzleGameMode.h" },
		{ "ModuleRelativePath", "Multiplayer_PuzzleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayer_PuzzleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics::ClassParams = {
		&AMultiplayer_PuzzleGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayer_PuzzleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayer_PuzzleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayer_PuzzleGameMode, 10358457);
	template<> MULTIPLAYER_PUZZLE_API UClass* StaticClass<AMultiplayer_PuzzleGameMode>()
	{
		return AMultiplayer_PuzzleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayer_PuzzleGameMode(Z_Construct_UClass_AMultiplayer_PuzzleGameMode, &AMultiplayer_PuzzleGameMode::StaticClass, TEXT("/Script/Multiplayer_Puzzle"), TEXT("AMultiplayer_PuzzleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayer_PuzzleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
