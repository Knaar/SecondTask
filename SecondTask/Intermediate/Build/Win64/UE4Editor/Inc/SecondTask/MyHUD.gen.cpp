// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondTask/Wigdets/MyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	SECONDTASK_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_AMyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SecondTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_ANest_NoRegister();
// End Cross Module References
	void AMyHUD::StaticRegisterNativesAMyHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyHUD_NoRegister()
	{
		return AMyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UserWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Wigdets/MyHUD.h" },
		{ "ModuleRelativePath", "Wigdets/MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_UserWidget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Wigdets/MyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_UserWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wigdets/MyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_Nest_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Wigdets/MyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_Nest = { "Nest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, Nest), Z_Construct_UClass_ANest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_Nest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_Nest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_UserWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_Nest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
		&AMyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyHUD, 3689375172);
	template<> SECONDTASK_API UClass* StaticClass<AMyHUD>()
	{
		return AMyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyHUD(Z_Construct_UClass_AMyHUD, &AMyHUD::StaticClass, TEXT("/Script/SecondTask"), TEXT("AMyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
