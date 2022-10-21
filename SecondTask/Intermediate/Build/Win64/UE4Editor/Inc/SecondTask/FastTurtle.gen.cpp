// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondTask/Actors/FastTurtle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastTurtle() {}
// Cross Module References
	SECONDTASK_API UClass* Z_Construct_UClass_AFastTurtle_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_AFastTurtle();
	SECONDTASK_API UClass* Z_Construct_UClass_ABeachAnimal();
	UPackage* Z_Construct_UPackage__Script_SecondTask();
// End Cross Module References
	void AFastTurtle::StaticRegisterNativesAFastTurtle()
	{
	}
	UClass* Z_Construct_UClass_AFastTurtle_NoRegister()
	{
		return AFastTurtle::StaticClass();
	}
	struct Z_Construct_UClass_AFastTurtle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFastTurtle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABeachAnimal,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastTurtle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/FastTurtle.h" },
		{ "ModuleRelativePath", "Actors/FastTurtle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFastTurtle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFastTurtle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFastTurtle_Statics::ClassParams = {
		&AFastTurtle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFastTurtle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFastTurtle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFastTurtle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFastTurtle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFastTurtle, 3524418360);
	template<> SECONDTASK_API UClass* StaticClass<AFastTurtle>()
	{
		return AFastTurtle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFastTurtle(Z_Construct_UClass_AFastTurtle, &AFastTurtle::StaticClass, TEXT("/Script/SecondTask"), TEXT("AFastTurtle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFastTurtle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
