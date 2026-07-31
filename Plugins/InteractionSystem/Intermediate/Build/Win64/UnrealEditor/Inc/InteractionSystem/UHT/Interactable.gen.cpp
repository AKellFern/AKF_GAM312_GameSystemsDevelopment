// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/Interactable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_InteractionSystem(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractable(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_IInteractable(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractable(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_IInteractable(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Interface UInteractable Function ExecuteInteraction ****************************
struct Interactable_eventExecuteInteraction_Parms
{
	AActor* InteractingActor;
};
void IInteractable::ExecuteInteraction(AActor* InteractingActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteInteraction instead.");
}
static FName NAME_UInteractable_ExecuteInteraction = FName(TEXT("ExecuteInteraction"));
void IInteractable::Execute_ExecuteInteraction(UObject* O, AActor* InteractingActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
	Interactable_eventExecuteInteraction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractable_ExecuteInteraction);
	if (Func)
	{
		Parms.InteractingActor=std::move(InteractingActor);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
	{
		I->ExecuteInteraction_Implementation(InteractingActor);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractable_ExecuteInteraction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interfaces/Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExecuteInteraction constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExecuteInteraction constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExecuteInteraction Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventExecuteInteraction_Parms, InteractingActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractingActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ExecuteInteraction Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractable, nullptr, "ExecuteInteraction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<Interactable_eventExecuteInteraction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(Interactable_eventExecuteInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractable_ExecuteInteraction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IInteractable::execExecuteInteraction)
{
	P_GET_OBJECT(AActor,Z_Param_InteractingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteInteraction_Implementation(Z_Param_InteractingActor);
	P_NATIVE_END;
}
// ********** End Interface UInteractable Function ExecuteInteraction ******************************

// ********** Begin Interface UInteractable ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInteractable_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UInteractable constinit property declarations ************************
// ********** End Interface UInteractable constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ExecuteInteraction"), .Pointer = &IInteractable::execExecuteInteraction },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_ExecuteInteraction, "ExecuteInteraction" }, // 2b0bd911f56e3a4c063d2ea6e8cd99b2ebf9b8f5
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInteractable,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UInteractable_StaticRegisterNativesUInteractable()
{
	UClass* Class = UInteractable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractable;
UClass* Z_Construct_UClass_UInteractable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInteractable;
		if (!Z_Registration_Info_UClass_UInteractable.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Interactable"),
				Z_Registration_Info_UClass_UInteractable.InnerSingleton,
				UInteractable_StaticRegisterNativesUInteractable,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UInteractable.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
}
#undef UHT_STATICS
UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInteractable);
// ********** End Interface UInteractable **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h__Script_InteractionSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 3420031674U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h__Script_InteractionSystem_03beb23fd676f4e11d34a85c38ecd3662eab5752{
	TEXT("/Script/InteractionSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
