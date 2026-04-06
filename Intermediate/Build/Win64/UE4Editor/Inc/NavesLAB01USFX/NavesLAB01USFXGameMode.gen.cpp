// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/NavesLAB01USFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesLAB01USFXGameMode() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANavesLAB01USFXGameMode_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ANavesLAB01USFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
// End Cross Module References
	void ANavesLAB01USFXGameMode::StaticRegisterNativesANavesLAB01USFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANavesLAB01USFXGameMode_NoRegister()
	{
		return ANavesLAB01USFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AEnemigos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEnemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AEnemigos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoEnFormacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoEnFormacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervaloFormacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervaloFormacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EspaciadoVertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EspaciadoVertical;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesLAB01USFXGameMode.h" },
		{ "ModuleRelativePath", "NavesLAB01USFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_AEnemigos_Inner = { "AEnemigos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_AEnemigos_MetaData[] = {
		{ "Category", "Tabla Objetos" },
		{ "ModuleRelativePath", "NavesLAB01USFXGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_AEnemigos = { "AEnemigos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesLAB01USFXGameMode, AEnemigos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_AEnemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_AEnemigos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_TiempoEnFormacion_MetaData[] = {
		{ "Category", "Configuracion Formacion" },
		{ "ModuleRelativePath", "NavesLAB01USFXGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_TiempoEnFormacion = { "TiempoEnFormacion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesLAB01USFXGameMode, TiempoEnFormacion), METADATA_PARAMS(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_TiempoEnFormacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_TiempoEnFormacion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_IntervaloFormacion_MetaData[] = {
		{ "Category", "Configuracion Formacion" },
		{ "Comment", "// Tiempo que se quedan quietas\n" },
		{ "ModuleRelativePath", "NavesLAB01USFXGameMode.h" },
		{ "ToolTip", "Tiempo que se quedan quietas" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_IntervaloFormacion = { "IntervaloFormacion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesLAB01USFXGameMode, IntervaloFormacion), METADATA_PARAMS(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_IntervaloFormacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_IntervaloFormacion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_EspaciadoVertical_MetaData[] = {
		{ "Category", "Configuracion Formacion" },
		{ "Comment", "// Tiempo total entre formaciones\n" },
		{ "ModuleRelativePath", "NavesLAB01USFXGameMode.h" },
		{ "ToolTip", "Tiempo total entre formaciones" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_EspaciadoVertical = { "EspaciadoVertical", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesLAB01USFXGameMode, EspaciadoVertical), METADATA_PARAMS(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_EspaciadoVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_EspaciadoVertical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_AEnemigos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_AEnemigos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_TiempoEnFormacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_IntervaloFormacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::NewProp_EspaciadoVertical,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesLAB01USFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::ClassParams = {
		&ANavesLAB01USFXGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesLAB01USFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesLAB01USFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesLAB01USFXGameMode, 1638467688);
	template<> NAVESLAB01USFX_API UClass* StaticClass<ANavesLAB01USFXGameMode>()
	{
		return ANavesLAB01USFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesLAB01USFXGameMode(Z_Construct_UClass_ANavesLAB01USFXGameMode, &ANavesLAB01USFXGameMode::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("ANavesLAB01USFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesLAB01USFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
