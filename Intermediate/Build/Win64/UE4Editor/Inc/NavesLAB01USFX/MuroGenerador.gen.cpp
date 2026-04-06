// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/MuroGenerador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroGenerador() {}
// Cross Module References
	NAVESLAB01USFX_API UScriptStruct* Z_Construct_UScriptStruct_FDatosMuro();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroBase_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroGenerador_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroGenerador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FDatosMuro::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVESLAB01USFX_API uint32 Get_Z_Construct_UScriptStruct_FDatosMuro_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatosMuro, Z_Construct_UPackage__Script_NavesLAB01USFX(), TEXT("DatosMuro"), sizeof(FDatosMuro), Get_Z_Construct_UScriptStruct_FDatosMuro_Hash());
	}
	return Singleton;
}
template<> NAVESLAB01USFX_API UScriptStruct* StaticStruct<FDatosMuro>()
{
	return FDatosMuro::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatosMuro(FDatosMuro::StaticStruct, TEXT("/Script/NavesLAB01USFX"), TEXT("DatosMuro"), false, nullptr, nullptr);
static struct FScriptStruct_NavesLAB01USFX_StaticRegisterNativesFDatosMuro
{
	FScriptStruct_NavesLAB01USFX_StaticRegisterNativesFDatosMuro()
	{
		UScriptStruct::DeferCppStructOps<FDatosMuro>(FName(TEXT("DatosMuro")));
	}
} ScriptStruct_NavesLAB01USFX_StaticRegisterNativesFDatosMuro;
	struct Z_Construct_UScriptStruct_FDatosMuro_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuroReferencia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuroReferencia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forma_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Forma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatosMuro_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MuroGenerador.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatosMuro_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatosMuro>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_MuroReferencia_MetaData[] = {
		{ "Category", "DatosMuro" },
		{ "ModuleRelativePath", "MuroGenerador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_MuroReferencia = { "MuroReferencia", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatosMuro, MuroReferencia), Z_Construct_UClass_AMuroBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_MuroReferencia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_MuroReferencia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_Forma_MetaData[] = {
		{ "Category", "DatosMuro" },
		{ "ModuleRelativePath", "MuroGenerador.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_Forma = { "Forma", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatosMuro, Forma), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_Forma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_Forma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatosMuro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_MuroReferencia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMuro_Statics::NewProp_Forma,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatosMuro_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
		nullptr,
		&NewStructOps,
		"DatosMuro",
		sizeof(FDatosMuro),
		alignof(FDatosMuro),
		Z_Construct_UScriptStruct_FDatosMuro_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatosMuro_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatosMuro_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatosMuro_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatosMuro()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatosMuro_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavesLAB01USFX();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatosMuro"), sizeof(FDatosMuro), Get_Z_Construct_UScriptStruct_FDatosMuro_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatosMuro_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatosMuro_Hash() { return 1468464053U; }
	void AMuroGenerador::StaticRegisterNativesAMuroGenerador()
	{
	}
	UClass* Z_Construct_UClass_AMuroGenerador_NoRegister()
	{
		return AMuroGenerador::StaticClass();
	}
	struct Z_Construct_UClass_AMuroGenerador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TablaDeMuros_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TablaDeMuros_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TablaDeMuros;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroGenerador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroGenerador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroGenerador.h" },
		{ "ModuleRelativePath", "MuroGenerador.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMuroGenerador_Statics::NewProp_TablaDeMuros_Inner = { "TablaDeMuros", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDatosMuro, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroGenerador_Statics::NewProp_TablaDeMuros_MetaData[] = {
		{ "Category", "Tabla" },
		{ "ModuleRelativePath", "MuroGenerador.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMuroGenerador_Statics::NewProp_TablaDeMuros = { "TablaDeMuros", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroGenerador, TablaDeMuros), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMuroGenerador_Statics::NewProp_TablaDeMuros_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroGenerador_Statics::NewProp_TablaDeMuros_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroGenerador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroGenerador_Statics::NewProp_TablaDeMuros_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroGenerador_Statics::NewProp_TablaDeMuros,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroGenerador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroGenerador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroGenerador_Statics::ClassParams = {
		&AMuroGenerador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroGenerador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroGenerador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroGenerador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroGenerador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroGenerador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroGenerador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroGenerador, 2656980502);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AMuroGenerador>()
	{
		return AMuroGenerador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroGenerador(Z_Construct_UClass_AMuroGenerador, &AMuroGenerador::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AMuroGenerador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroGenerador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
