// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KatanaShowdown/KatanaShowdownGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKatanaShowdownGameModeBase() {}
// Cross Module References
	KATANASHOWDOWN_API UClass* Z_Construct_UClass_AKatanaShowdownGameModeBase_NoRegister();
	KATANASHOWDOWN_API UClass* Z_Construct_UClass_AKatanaShowdownGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KatanaShowdown();
// End Cross Module References
	void AKatanaShowdownGameModeBase::StaticRegisterNativesAKatanaShowdownGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AKatanaShowdownGameModeBase_NoRegister()
	{
		return AKatanaShowdownGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KatanaShowdown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KatanaShowdownGameModeBase.h" },
		{ "ModuleRelativePath", "KatanaShowdownGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKatanaShowdownGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics::ClassParams = {
		&AKatanaShowdownGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKatanaShowdownGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKatanaShowdownGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKatanaShowdownGameModeBase, 2520592009);
	template<> KATANASHOWDOWN_API UClass* StaticClass<AKatanaShowdownGameModeBase>()
	{
		return AKatanaShowdownGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKatanaShowdownGameModeBase(Z_Construct_UClass_AKatanaShowdownGameModeBase, &AKatanaShowdownGameModeBase::StaticClass, TEXT("/Script/KatanaShowdown"), TEXT("AKatanaShowdownGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKatanaShowdownGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
