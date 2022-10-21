// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondTask/Actors/StupidTurtle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStupidTurtle() {}
// Cross Module References
	SECONDTASK_API UClass* Z_Construct_UClass_AStupidTurtle_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_AStupidTurtle();
	SECONDTASK_API UClass* Z_Construct_UClass_ABeachAnimal();
	UPackage* Z_Construct_UPackage__Script_SecondTask();
// End Cross Module References
	void AStupidTurtle::StaticRegisterNativesAStupidTurtle()
	{
	}
	UClass* Z_Construct_UClass_AStupidTurtle_NoRegister()
	{
		return AStupidTurtle::StaticClass();
	}
	struct Z_Construct_UClass_AStupidTurtle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStupidTurtle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABeachAnimal,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStupidTurtle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/StupidTurtle.h" },
		{ "ModuleRelativePath", "Actors/StupidTurtle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStupidTurtle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStupidTurtle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStupidTurtle_Statics::ClassParams = {
		&AStupidTurtle::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStupidTurtle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStupidTurtle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStupidTurtle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStupidTurtle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStupidTurtle, 3073784943);
	template<> SECONDTASK_API UClass* StaticClass<AStupidTurtle>()
	{
		return AStupidTurtle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStupidTurtle(Z_Construct_UClass_AStupidTurtle, &AStupidTurtle::StaticClass, TEXT("/Script/SecondTask"), TEXT("AStupidTurtle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStupidTurtle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
