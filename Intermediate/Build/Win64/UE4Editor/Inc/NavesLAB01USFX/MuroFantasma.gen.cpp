// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/MuroFantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroFantasma() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroFantasma_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroFantasma();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroBase();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AMuroFantasma::execAlEntrarEnMuro)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AlEntrarEnMuro(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResut);
		P_NATIVE_END;
	}
	void AMuroFantasma::StaticRegisterNativesAMuroFantasma()
	{
		UClass* Class = AMuroFantasma::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlEntrarEnMuro", &AMuroFantasma::execAlEntrarEnMuro },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics
	{
		struct MuroFantasma_eventAlEntrarEnMuro_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResut;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuroFantasma_eventAlEntrarEnMuro_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuroFantasma_eventAlEntrarEnMuro_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuroFantasma_eventAlEntrarEnMuro_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuroFantasma_eventAlEntrarEnMuro_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MuroFantasma_eventAlEntrarEnMuro_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MuroFantasma_eventAlEntrarEnMuro_Parms), &Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_SweepResut_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_SweepResut = { "SweepResut", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuroFantasma_eventAlEntrarEnMuro_Parms, SweepResut), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_SweepResut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_SweepResut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::NewProp_SweepResut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MuroFantasma.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMuroFantasma, nullptr, "AlEntrarEnMuro", nullptr, nullptr, sizeof(MuroFantasma_eventAlEntrarEnMuro_Parms), Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMuroFantasma_NoRegister()
	{
		return AMuroFantasma::StaticClass();
	}
	struct Z_Construct_UClass_AMuroFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuroBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMuroFantasma_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMuroFantasma_AlEntrarEnMuro, "AlEntrarEnMuro" }, // 3526751913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroFantasma_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroFantasma.h" },
		{ "ModuleRelativePath", "MuroFantasma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroFantasma_Statics::ClassParams = {
		&AMuroFantasma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroFantasma, 3028019464);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AMuroFantasma>()
	{
		return AMuroFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroFantasma(Z_Construct_UClass_AMuroFantasma, &AMuroFantasma::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AMuroFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
