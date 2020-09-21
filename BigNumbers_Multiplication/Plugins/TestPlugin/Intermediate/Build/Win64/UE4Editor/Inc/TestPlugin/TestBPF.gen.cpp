// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/TestBPF.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBPF() {}
// Cross Module References
	TESTPLUGIN_API UClass* Z_Construct_UClass_UTestBPF_NoRegister();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UTestBPF();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UTestBPF::execCalc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDataA);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDataB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTestBPF::Calc(Z_Param_InDataA,Z_Param_InDataB);
		P_NATIVE_END;
	}
	void UTestBPF::StaticRegisterNativesUTestBPF()
	{
		UClass* Class = UTestBPF::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Calc", &UTestBPF::execCalc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestBPF_Calc_Statics
	{
		struct TestBPF_eventCalc_Parms
		{
			FString InDataA;
			FString InDataB;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDataB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDataA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestBPF_Calc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestBPF_eventCalc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestBPF_Calc_Statics::NewProp_InDataB = { "InDataB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestBPF_eventCalc_Parms, InDataB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestBPF_Calc_Statics::NewProp_InDataA = { "InDataA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestBPF_eventCalc_Parms, InDataA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestBPF_Calc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestBPF_Calc_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestBPF_Calc_Statics::NewProp_InDataB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestBPF_Calc_Statics::NewProp_InDataA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestBPF_Calc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestBPF.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestBPF_Calc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestBPF, nullptr, "Calc", nullptr, nullptr, sizeof(TestBPF_eventCalc_Parms), Z_Construct_UFunction_UTestBPF_Calc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestBPF_Calc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestBPF_Calc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestBPF_Calc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestBPF_Calc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestBPF_Calc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestBPF_NoRegister()
	{
		return UTestBPF::StaticClass();
	}
	struct Z_Construct_UClass_UTestBPF_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBPF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestBPF_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestBPF_Calc, "Calc" }, // 3082212673
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBPF_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TestBPF.h" },
		{ "ModuleRelativePath", "Public/TestBPF.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBPF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBPF>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestBPF_Statics::ClassParams = {
		&UTestBPF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBPF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBPF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBPF()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestBPF_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestBPF, 1249913868);
	template<> TESTPLUGIN_API UClass* StaticClass<UTestBPF>()
	{
		return UTestBPF::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestBPF(Z_Construct_UClass_UTestBPF, &UTestBPF::StaticClass, TEXT("/Script/TestPlugin"), TEXT("UTestBPF"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBPF);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
