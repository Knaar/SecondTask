// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondTask/Actors/SlowTurtle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlowTurtle() {}
// Cross Module References
	SECONDTASK_API UClass* Z_Construct_UClass_ASlowTurtle_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_ASlowTurtle();
	SECONDTASK_API UClass* Z_Construct_UClass_ABeachAnimal();
	UPackage* Z_Construct_UPackage__Script_SecondTask();
// End Cross Module References
	void ASlowTurtle::StaticRegisterNativesASlowTurtle()
	{
	}
	UClass* Z_Construct_UClass_ASlowTurtle_NoRegister()
	{
		return ASlowTurtle::StaticClass();
	}
	struct Z_Construct_UClass_ASlowTurtle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlowTurtle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABeachAnimal,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlowTurtle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/SlowTurtle.h" },
		{ "ModuleRelativePath", "Actors/SlowTurtle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlowTurtle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlowTurtle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlowTurtle_Statics::ClassParams = {
		&ASlowTurtle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASlowTurtle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTurtle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlowTurtle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlowTurtle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlowTurtle, 2628944362);
	template<> SECONDTASK_API UClass* StaticClass<ASlowTurtle>()
	{
		return ASlowTurtle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlowTurtle(Z_Construct_UClass_ASlowTurtle, &ASlowTurtle::StaticClass, TEXT("/Script/SecondTask"), TEXT("ASlowTurtle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlowTurtle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
