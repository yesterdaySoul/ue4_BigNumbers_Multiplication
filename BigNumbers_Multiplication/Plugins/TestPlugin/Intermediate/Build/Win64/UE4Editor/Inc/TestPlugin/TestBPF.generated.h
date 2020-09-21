// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPLUGIN_TestBPF_generated_h
#error "TestBPF.generated.h already included, missing '#pragma once' in TestBPF.h"
#endif
#define TESTPLUGIN_TestBPF_generated_h

#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_SPARSE_DATA
#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalc);


#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalc);


#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestBPF(); \
	friend struct Z_Construct_UClass_UTestBPF_Statics; \
public: \
	DECLARE_CLASS(UTestBPF, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTestBPF)


#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTestBPF(); \
	friend struct Z_Construct_UClass_UTestBPF_Statics; \
public: \
	DECLARE_CLASS(UTestBPF, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTestBPF)


#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBPF(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBPF) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBPF); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBPF); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestBPF(UTestBPF&&); \
	NO_API UTestBPF(const UTestBPF&); \
public:


#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBPF(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestBPF(UTestBPF&&); \
	NO_API UTestBPF(const UTestBPF&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBPF); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBPF); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBPF)


#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_15_PROLOG
#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_SPARSE_DATA \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_RPC_WRAPPERS \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_INCLASS \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_SPARSE_DATA \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_INCLASS_NO_PURE_DECLS \
	Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPLUGIN_API UClass* StaticClass<class UTestBPF>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_TestPlugin_Source_TestPlugin_Public_TestBPF_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
