// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondTask/Actors/Nest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNest() {}
// Cross Module References
	SECONDTASK_API UClass* Z_Construct_UClass_ANest_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_ANest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SecondTask();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SECONDTASK_API UClass* Z_Construct_UClass_ABeachAnimal_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANest::execGiveBirth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveBirth();
		P_NATIVE_END;
	}
	void ANest::StaticRegisterNativesANest()
	{
		UClass* Class = ANest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveBirth", &ANest::execGiveBirth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANest_GiveBirth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANest_GiveBirth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Nest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANest_GiveBirth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANest, nullptr, "GiveBirth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANest_GiveBirth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANest_GiveBirth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANest_GiveBirth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANest_GiveBirth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANest_NoRegister()
	{
		return ANest::StaticClass();
	}
	struct Z_Construct_UClass_ANest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NestMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NestMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurtleSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurtleSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToTurtleMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetToTurtleMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioTurtleBirthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioTurtleBirthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTurtleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnTurtleClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondTask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANest_GiveBirth, "GiveBirth" }, // 1137768565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Nest.h" },
		{ "ModuleRelativePath", "Actors/Nest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANest_Statics::NewProp_NestMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Nest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANest_Statics::NewProp_NestMesh = { "NestMesh", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANest, NestMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANest_Statics::NewProp_NestMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANest_Statics::NewProp_NestMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANest_Statics::NewProp_TurtleSpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Nest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANest_Statics::NewProp_TurtleSpawnPoint = { "TurtleSpawnPoint", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANest, TurtleSpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANest_Statics::NewProp_TurtleSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANest_Statics::NewProp_TurtleSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANest_Statics::NewProp_TargetToTurtleMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Actors/Nest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANest_Statics::NewProp_TargetToTurtleMovement = { "TargetToTurtleMovement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANest, TargetToTurtleMovement), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANest_Statics::NewProp_TargetToTurtleMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANest_Statics::NewProp_TargetToTurtleMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANest_Statics::NewProp_AudioTurtleBirthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Nest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANest_Statics::NewProp_AudioTurtleBirthComponent = { "AudioTurtleBirthComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANest, AudioTurtleBirthComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANest_Statics::NewProp_AudioTurtleBirthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANest_Statics::NewProp_AudioTurtleBirthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANest_Statics::NewProp_SpawnTurtleClass_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Actors/Nest.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANest_Statics::NewProp_SpawnTurtleClass = { "SpawnTurtleClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANest, SpawnTurtleClass), Z_Construct_UClass_ABeachAnimal_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANest_Statics::NewProp_SpawnTurtleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANest_Statics::NewProp_SpawnTurtleClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANest_Statics::NewProp_NestMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANest_Statics::NewProp_TurtleSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANest_Statics::NewProp_TargetToTurtleMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANest_Statics::NewProp_AudioTurtleBirthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANest_Statics::NewProp_SpawnTurtleClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANest_Statics::ClassParams = {
		&ANest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANest, 2174154760);
	template<> SECONDTASK_API UClass* StaticClass<ANest>()
	{
		return ANest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANest(Z_Construct_UClass_ANest, &ANest::StaticClass, TEXT("/Script/SecondTask"), TEXT("ANest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
