// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/InteractableComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractableComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_InteractionSystem(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableComponent(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UInteractableComponent Function ConfirmInteract **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractableComponent_ConfirmInteract_Statics
struct UHT_STATICS
{
	struct InteractableComponent_eventConfirmInteract_Parms
	{
		AActor* InteractingActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Confirms the interaction and passes along the actor performing it.\n\x09 *\n\x09 * @param InteractingActor Actor attempting the interaction.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Confirms the interaction and passes along the actor performing it.\n\n@param InteractingActor Actor attempting the interaction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConfirmInteract constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConfirmInteract constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConfirmInteract Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableComponent_eventConfirmInteract_Parms, InteractingActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractingActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConfirmInteract Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractableComponent, nullptr, "ConfirmInteract", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InteractableComponent_eventConfirmInteract_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InteractableComponent_eventConfirmInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableComponent_ConfirmInteract(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInteractableComponent::execConfirmInteract)
{
	P_GET_OBJECT(AActor,Z_Param_InteractingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmInteract(Z_Param_InteractingActor);
	P_NATIVE_END;
}
// ********** End Class UInteractableComponent Function ConfirmInteract ****************************

// ********** Begin Class UInteractableComponent ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInteractableComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Interaction" },
		{ "IncludePath", "Components/InteractableComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this component currently allows interaction. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this component currently allows interaction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Text displayed to the interacting player, such as \"Open Door.\" */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text displayed to the interacting player, such as \"Open Door.\"" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UInteractableComponent constinit property declarations *******************
	static void NewProp_bCanInteract_SetBit(void* Obj)
	{
		((UInteractableComponent*)Obj)->bCanInteract = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInteractableComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConfirmInteract"), .Pointer = &UInteractableComponent::execConfirmInteract },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableComponent_ConfirmInteract, "ConfirmInteract" }, // 91fbbc4a4d336629f0618ea8cee8c565a8789356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UInteractableComponent Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractableComponent), &UHT_STATICS::NewProp_bCanInteract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInteract_MetaData), NewProp_bCanInteract_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableComponent, InteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionText_MetaData), NewProp_InteractionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UInteractableComponent Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInteractableComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UInteractableComponent_StaticRegisterNativesUInteractableComponent()
{
	UClass* Class = UInteractableComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractableComponent;
UClass* Z_Construct_UClass_UInteractableComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInteractableComponent;
		if (!Z_Registration_Info_UClass_UInteractableComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InteractableComponent"),
				Z_Registration_Info_UClass_UInteractableComponent.InnerSingleton,
				UInteractableComponent_StaticRegisterNativesUInteractableComponent,
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
		return Z_Registration_Info_UClass_UInteractableComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInteractableComponent);
UInteractableComponent::~UInteractableComponent() {}
// ********** End Class UInteractableComponent *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h__Script_InteractionSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableComponent, TEXT("UInteractableComponent"), &Z_Registration_Info_UClass_UInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableComponent), 3355560475U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h__Script_InteractionSystem_5a28e326c358c969b8222e10726ea3786099574a{
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
