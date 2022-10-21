// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
#ifdef SECONDTASK_BeachAnimal_generated_h
#error "BeachAnimal.generated.h already included, missing '#pragma once' in BeachAnimal.h"
#endif
#define SECONDTASK_BeachAnimal_generated_h

#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_SPARSE_DATA
#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTargetPoint);


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTargetPoint);


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABeachAnimal(); \
	friend struct Z_Construct_UClass_ABeachAnimal_Statics; \
public: \
	DECLARE_CLASS(ABeachAnimal, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(ABeachAnimal)


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABeachAnimal(); \
	friend struct Z_Construct_UClass_ABeachAnimal_Statics; \
public: \
	DECLARE_CLASS(ABeachAnimal, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(ABeachAnimal)


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABeachAnimal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABeachAnimal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABeachAnimal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABeachAnimal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABeachAnimal(ABeachAnimal&&); \
	NO_API ABeachAnimal(const ABeachAnimal&); \
public:


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABeachAnimal(ABeachAnimal&&); \
	NO_API ABeachAnimal(const ABeachAnimal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABeachAnimal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABeachAnimal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABeachAnimal)


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(ABeachAnimal, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(ABeachAnimal, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__ShellMesh() { return STRUCT_OFFSET(ABeachAnimal, ShellMesh); } \
	FORCEINLINE static uint32 __PPO__CrawlingSounds() { return STRUCT_OFFSET(ABeachAnimal, CrawlingSounds); } \
	FORCEINLINE static uint32 __PPO__DivingSounds() { return STRUCT_OFFSET(ABeachAnimal, DivingSounds); } \
	FORCEINLINE static uint32 __PPO__EggShell() { return STRUCT_OFFSET(ABeachAnimal, EggShell); } \
	FORCEINLINE static uint32 __PPO__WaterSplash() { return STRUCT_OFFSET(ABeachAnimal, WaterSplash); }


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_12_PROLOG
#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_SPARSE_DATA \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_RPC_WRAPPERS \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_INCLASS \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_SPARSE_DATA \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_INCLASS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Actors_BeachAnimal_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDTASK_API UClass* StaticClass<class ABeachAnimal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondTask_Source_SecondTask_Actors_BeachAnimal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
