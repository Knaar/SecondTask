// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondTask/Wigdets/MainButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainButtonWidget() {}
// Cross Module References
	SECONDTASK_API UFunction* Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SecondTask();
	SECONDTASK_API UClass* Z_Construct_UClass_UMainButtonWidget_NoRegister();
	SECONDTASK_API UClass* Z_Construct_UClass_UMainButtonWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	SECONDTASK_API UClass* Z_Construct_UClass_ANest_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondTask, nullptr, "MainButtonDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMainButtonWidget::execButton3Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Button3Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainButtonWidget::execButton2Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Button2Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainButtonWidget::execButton1Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Button1Clicked();
		P_NATIVE_END;
	}
	void UMainButtonWidget::StaticRegisterNativesUMainButtonWidget()
	{
		UClass* Class = UMainButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Button1Clicked", &UMainButtonWidget::execButton1Clicked },
			{ "Button2Clicked", &UMainButtonWidget::execButton2Clicked },
			{ "Button3Clicked", &UMainButtonWidget::execButton3Clicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainButtonWidget_Button1Clicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainButtonWidget_Button1Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainButtonWidget_Button1Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainButtonWidget, nullptr, "Button1Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainButtonWidget_Button1Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainButtonWidget_Button1Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainButtonWidget_Button1Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainButtonWidget_Button1Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainButtonWidget_Button2Clicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainButtonWidget_Button2Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainButtonWidget_Button2Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainButtonWidget, nullptr, "Button2Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainButtonWidget_Button2Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainButtonWidget_Button2Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainButtonWidget_Button2Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainButtonWidget_Button2Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainButtonWidget_Button3Clicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainButtonWidget_Button3Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainButtonWidget_Button3Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainButtonWidget, nullptr, "Button3Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainButtonWidget_Button3Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainButtonWidget_Button3Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainButtonWidget_Button3Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainButtonWidget_Button3Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainButtonWidget_NoRegister()
	{
		return UMainButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nest1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nest1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nest2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nest2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nest3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nest3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainButtonDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MainButtonDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondTask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainButtonWidget_Button1Clicked, "Button1Clicked" }, // 1023484690
		{ &Z_Construct_UFunction_UMainButtonWidget_Button2Clicked, "Button2Clicked" }, // 1321793582
		{ &Z_Construct_UFunction_UMainButtonWidget_Button3Clicked, "Button3Clicked" }, // 3032093658
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wigdets/MainButtonWidget.h" },
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest1_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest1 = { "Nest1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainButtonWidget, Nest1), Z_Construct_UClass_ANest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest2_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest2 = { "Nest2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainButtonWidget, Nest2), Z_Construct_UClass_ANest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest3_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest3 = { "Nest3", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainButtonWidget, Nest3), Z_Construct_UClass_ANest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button1 = { "Button1", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainButtonWidget, Button1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button2 = { "Button2", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainButtonWidget, Button2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button3 = { "Button3", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainButtonWidget, Button3), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_MainButtonDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Wigdets/MainButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_MainButtonDelegate = { "MainButtonDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainButtonWidget, MainButtonDelegate), Z_Construct_UDelegateFunction_SecondTask_MainButtonDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_MainButtonDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_MainButtonDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Nest3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_Button3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainButtonWidget_Statics::NewProp_MainButtonDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainButtonWidget_Statics::ClassParams = {
		&UMainButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainButtonWidget, 3525344062);
	template<> SECONDTASK_API UClass* StaticClass<UMainButtonWidget>()
	{
		return UMainButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainButtonWidget(Z_Construct_UClass_UMainButtonWidget, &UMainButtonWidget::StaticClass, TEXT("/Script/SecondTask"), TEXT("UMainButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
