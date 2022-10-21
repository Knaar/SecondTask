// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDTASK_Nest_generated_h
#error "Nest.generated.h already included, missing '#pragma once' in Nest.h"
#endif
#define SECONDTASK_Nest_generated_h

#define SecondTask_Source_SecondTask_Actors_Nest_h_15_SPARSE_DATA
#define SecondTask_Source_SecondTask_Actors_Nest_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGiveBirth);


#define SecondTask_Source_SecondTask_Actors_Nest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGiveBirth);


#define SecondTask_Source_SecondTask_Actors_Nest_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANest(); \
	friend struct Z_Construct_UClass_ANest_Statics; \
public: \
	DECLARE_CLASS(ANest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(ANest)


#define SecondTask_Source_SecondTask_Actors_Nest_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANest(); \
	friend struct Z_Construct_UClass_ANest_Statics; \
public: \
	DECLARE_CLASS(ANest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondTask"), NO_API) \
	DECLARE_SERIALIZER(ANest)


#define SecondTask_Source_SecondTask_Actors_Nest_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANest(ANest&&); \
	NO_API ANest(const ANest&); \
public:


#define SecondTask_Source_SecondTask_Actors_Nest_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANest(ANest&&); \
	NO_API ANest(const ANest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANest)


#define SecondTask_Source_SecondTask_Actors_Nest_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NestMesh() { return STRUCT_OFFSET(ANest, NestMesh); } \
	FORCEINLINE static uint32 __PPO__TurtleSpawnPoint() { return STRUCT_OFFSET(ANest, TurtleSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__TargetToTurtleMovement() { return STRUCT_OFFSET(ANest, TargetToTurtleMovement); } \
	FORCEINLINE static uint32 __PPO__AudioTurtleBirthComponent() { return STRUCT_OFFSET(ANest, AudioTurtleBirthComponent); } \
	FORCEINLINE static uint32 __PPO__SpawnTurtleClass() { return STRUCT_OFFSET(ANest, SpawnTurtleClass); }


#define SecondTask_Source_SecondTask_Actors_Nest_h_12_PROLOG
#define SecondTask_Source_SecondTask_Actors_Nest_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_SPARSE_DATA \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_RPC_WRAPPERS \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_INCLASS \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondTask_Source_SecondTask_Actors_Nest_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_PRIVATE_PROPERTY_OFFSET \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_SPARSE_DATA \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_INCLASS_NO_PURE_DECLS \
	SecondTask_Source_SecondTask_Actors_Nest_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDTASK_API UClass* StaticClass<class ANest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondTask_Source_SecondTask_Actors_Nest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
