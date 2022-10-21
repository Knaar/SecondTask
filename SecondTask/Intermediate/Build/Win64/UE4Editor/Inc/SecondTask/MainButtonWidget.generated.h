// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDTASK_MainButtonWidget_generated_h
#error "MainButtonWidget.generated.h already included, missing '#pragma once' in MainButtonWidget.h"
#endif
#define SECONDTASK_MainButtonWidget_generated_h

#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_8_DELEGATE \
static inline void FMainButtonDelegate_DelegateWrapper(const FMulticastScriptDelegate& MainButtonDelegate) \
{ \
	MainButtonDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_SPARSE_DATA
#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execButton3Clicked); \
	DECLARE_FUNCTION(execButton2Clicked); \
	DECLARE_FUNCTION(execButton1Clicked);


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execButton3Clicked); \
	DECLARE_FUNCTION(execButton2Clicked); \
	DECLARE_FUNCTION(execButton1Clicked);


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainButtonWidget(); \
	friend struct Z_Construct_UClass_UMainButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UMainButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(UMainButtonWidget)


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainButtonWidget(); \
	friend struct Z_Construct_UClass_UMainButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UMainButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(UMainButtonWidget)


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainButtonWidget(UMainButtonWidget&&); \
	NO_API UMainButtonWidget(const UMainButtonWidget&); \
public:


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainButtonWidget(UMainButtonWidget&&); \
	NO_API UMainButtonWidget(const UMainButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainButtonWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainButtonWidget)


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Nest1() { return STRUCT_OFFSET(UMainButtonWidget, Nest1); } \
	FORCEINLINE static uint32 __PPO__Nest2() { return STRUCT_OFFSET(UMainButtonWidget, Nest2); } \
	FORCEINLINE static uint32 __PPO__Nest3() { return STRUCT_OFFSET(UMainButtonWidget, Nest3); } \
	FORCEINLINE static uint32 __PPO__Button1() { return STRUCT_OFFSET(UMainButtonWidget, Button1); } \
	FORCEINLINE static uint32 __PPO__Button2() { return STRUCT_OFFSET(UMainButtonWidget, Button2); } \
	FORCEINLINE static uint32 __PPO__Button3() { return STRUCT_OFFSET(UMainButtonWidget, Button3); } \
	FORCEINLINE static uint32 __PPO__MainButtonDelegate() { return STRUCT_OFFSET(UMainButtonWidget, MainButtonDelegate); }


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_12_PROLOG
#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_SPARSE_DATA \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_RPC_WRAPPERS \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_INCLASS \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_SPARSE_DATA \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_INCLASS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDTASK_API UClass* StaticClass<class UMainButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondTask_Source_SecondTask_Wigdets_MainButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
