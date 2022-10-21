// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondTask/Actors/BeachAnimal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeachAnimal() {}
// Cross Module References
	SECONDTASK_API UClass* Z_Construct_UClass_ABeachAnimal_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_ABeachAnimal();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SecondTask();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABeachAnimal::execSetTargetPoint)
	{
		P_GET_OBJECT(ATargetPoint,Z_Param_NewTargetPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetPoint(Z_Param_NewTargetPoint);
		P_NATIVE_END;
	}
	void ABeachAnimal::StaticRegisterNativesABeachAnimal()
	{
		UClass* Class = ABeachAnimal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTargetPoint", &ABeachAnimal::execSetTargetPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics
	{
		struct BeachAnimal_eventSetTargetPoint_Parms
		{
			ATargetPoint* NewTargetPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTargetPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::NewProp_NewTargetPoint = { "NewTargetPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeachAnimal_eventSetTargetPoint_Parms, NewTargetPoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::NewProp_NewTargetPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABeachAnimal, nullptr, "SetTargetPoint", nullptr, nullptr, sizeof(BeachAnimal_eventSetTargetPoint_Parms), Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABeachAnimal_SetTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABeachAnimal_SetTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABeachAnimal_NoRegister()
	{
		return ABeachAnimal::StaticClass();
	}
	struct Z_Construct_UClass_ABeachAnimal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShellMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShellMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrawlingSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrawlingSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DivingSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DivingSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EggShell_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EggShell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterSplash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterSplash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimalDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABeachAnimal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondTask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABeachAnimal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABeachAnimal_SetTargetPoint, "SetTargetPoint" }, // 104616961
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/BeachAnimal.h" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_ShellMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_ShellMesh = { "ShellMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, ShellMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_ShellMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_ShellMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_CrawlingSounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_CrawlingSounds = { "CrawlingSounds", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, CrawlingSounds), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_CrawlingSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_CrawlingSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_DivingSounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_DivingSounds = { "DivingSounds", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, DivingSounds), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_DivingSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_DivingSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_EggShell_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_EggShell = { "EggShell", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, EggShell), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_EggShell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_EggShell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_WaterSplash_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_WaterSplash = { "WaterSplash", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, WaterSplash), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_WaterSplash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_WaterSplash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_TargetPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, TargetPoint), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_TargetPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_TargetPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MinimalDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Actors/BeachAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MinimalDistance = { "MinimalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeachAnimal, MinimalDistance), METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MinimalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MinimalDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABeachAnimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_ShellMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_CrawlingSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_DivingSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_EggShell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_WaterSplash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_TargetPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeachAnimal_Statics::NewProp_MinimalDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABeachAnimal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeachAnimal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABeachAnimal_Statics::ClassParams = {
		&ABeachAnimal::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABeachAnimal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABeachAnimal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABeachAnimal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABeachAnimal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABeachAnimal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABeachAnimal, 3113218394);
	template<> SECONDTASK_API UClass* StaticClass<ABeachAnimal>()
	{
		return ABeachAnimal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABeachAnimal(Z_Construct_UClass_ABeachAnimal, &ABeachAnimal::StaticClass, TEXT("/Script/SecondTask"), TEXT("ABeachAnimal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABeachAnimal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
