// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDTASK_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define SECONDTASK_MyHUD_generated_h

#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_SPARSE_DATA
#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_RPC_WRAPPERS
#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public:


#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD)


#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserWidget() { return STRUCT_OFFSET(AMyHUD, UserWidget); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AMyHUD, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__Nest() { return STRUCT_OFFSET(AMyHUD, Nest); }


#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_9_PROLOG
#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_SPARSE_DATA \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_RPC_WRAPPERS \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_INCLASS \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_SPARSE_DATA \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_INCLASS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Wigdets_MyHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDTASK_API UClass* StaticClass<class AMyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondTask_Source_SecondTask_Wigdets_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
