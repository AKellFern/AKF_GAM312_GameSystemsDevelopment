// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/InteractorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_InteractionSystem(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableComponent(ETypeConstructPhase);
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UInteractorComponent Function GetCurrentInteractable *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractable_Statics
struct UHT_STATICS
{
	struct InteractorComponent_eventGetCurrentInteractable_Parms
	{
		UInteractableComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the interactable component currently being targeted.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the interactable component currently being targeted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentInteractable constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentInteractable constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentInteractable Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventGetCurrentInteractable_Parms, ReturnValue), Z_Construct_UClass_UInteractableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentInteractable Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractorComponent, nullptr, "GetCurrentInteractable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InteractorComponent_eventGetCurrentInteractable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InteractorComponent_eventGetCurrentInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInteractorComponent::execGetCurrentInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInteractableComponent**)Z_Param__Result=P_THIS->GetCurrentInteractable();
	P_NATIVE_END;
}
// ********** End Class UInteractorComponent Function GetCurrentInteractable ***********************

// ********** Begin Class UInteractorComponent Function GetCurrentInteractableActor ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractableActor_Statics
struct UHT_STATICS
{
	struct InteractorComponent_eventGetCurrentInteractableActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the actor currently being targeted.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the actor currently being targeted." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentInteractableActor constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentInteractableActor constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentInteractableActor Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventGetCurrentInteractableActor_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentInteractableActor Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractorComponent, nullptr, "GetCurrentInteractableActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InteractorComponent_eventGetCurrentInteractableActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InteractorComponent_eventGetCurrentInteractableActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractableActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInteractorComponent::execGetCurrentInteractableActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCurrentInteractableActor();
	P_NATIVE_END;
}
// ********** End Class UInteractorComponent Function GetCurrentInteractableActor ******************

// ********** Begin Class UInteractorComponent Function GetCurrentInteractionText ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractionText_Statics
struct UHT_STATICS
{
	struct InteractorComponent_eventGetCurrentInteractionText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the interaction text supplied by the current target.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the interaction text supplied by the current target." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentInteractionText constinit property declarations *************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentInteractionText constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentInteractionText Property Definitions ************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventGetCurrentInteractionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentInteractionText Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractorComponent, nullptr, "GetCurrentInteractionText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InteractorComponent_eventGetCurrentInteractionText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InteractorComponent_eventGetCurrentInteractionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractionText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInteractorComponent::execGetCurrentInteractionText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetCurrentInteractionText();
	P_NATIVE_END;
}
// ********** End Class UInteractorComponent Function GetCurrentInteractionText ********************

// ********** Begin Class UInteractorComponent Function Interact ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractorComponent_Interact_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Performs an interaction with the currently detected target.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs an interaction with the currently detected target." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Interact constinit property declarations ******************************
// ********** End Function Interact constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractorComponent, nullptr, "Interact", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UInteractorComponent_Interact(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInteractorComponent::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact();
	P_NATIVE_END;
}
// ********** End Class UInteractorComponent Function Interact *************************************

// ********** Begin Class UInteractorComponent Function SetTraceOrigin *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractorComponent_SetTraceOrigin_Statics
struct UHT_STATICS
{
	struct InteractorComponent_eventSetTraceOrigin_Parms
	{
		USceneComponent* NewTraceOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the scene component used as the interaction trace origin.\n\x09 *\n\x09 * This can be a camera, spring arm, weapon component, or another\n\x09 * scene component chosen by the owning actor.\n\x09 *\n\x09 * @param NewTraceOrigin Component from which the trace should begin.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the scene component used as the interaction trace origin.\n\nThis can be a camera, spring arm, weapon component, or another\nscene component chosen by the owning actor.\n\n@param NewTraceOrigin Component from which the trace should begin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTraceOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTraceOrigin constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTraceOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTraceOrigin constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTraceOrigin Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTraceOrigin = { "NewTraceOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InteractorComponent_eventSetTraceOrigin_Parms, NewTraceOrigin), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTraceOrigin_MetaData), NewProp_NewTraceOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTraceOrigin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTraceOrigin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractorComponent, nullptr, "SetTraceOrigin", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InteractorComponent_eventSetTraceOrigin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InteractorComponent_eventSetTraceOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractorComponent_SetTraceOrigin(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInteractorComponent::execSetTraceOrigin)
{
	P_GET_OBJECT(USceneComponent,Z_Param_NewTraceOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTraceOrigin(Z_Param_NewTraceOrigin);
	P_NATIVE_END;
}
// ********** End Class UInteractorComponent Function SetTraceOrigin *******************************

// ********** Begin Class UInteractorComponent Function UpdateInteractionTarget ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInteractorComponent_UpdateInteractionTarget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Immediately performs a trace to update the current interaction target.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Immediately performs a trace to update the current interaction target." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateInteractionTarget constinit property declarations ***************
// ********** End Function UpdateInteractionTarget constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInteractorComponent, nullptr, "UpdateInteractionTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UInteractorComponent_UpdateInteractionTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInteractorComponent::execUpdateInteractionTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInteractionTarget();
	P_NATIVE_END;
}
// ********** End Class UInteractorComponent Function UpdateInteractionTarget **********************

// ********** Begin Class UInteractorComponent *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInteractorComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component responsible for detecting and initiating interactions.\n *\n * Add this component to any actor that should be able to interact with\n * actors containing an InteractableComponent.\n */" },
#endif
		{ "IncludePath", "Components/InteractorComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component responsible for detecting and initiating interactions.\n\nAdd this component to any actor that should be able to interact with\nactors containing an InteractableComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTraceDistance_MetaData[] = {
		{ "Category", "Interaction|Trace" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum distance used when searching for an interactable actor. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance used when searching for an interactable actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTraceChannel_MetaData[] = {
		{ "Category", "Interaction|Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision channel used by the interaction trace. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision channel used by the interaction trace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateTarget_MetaData[] = {
		{ "Category", "Interaction|Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether interaction tracing should update automatically every frame. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether interaction tracing should update automatically every frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceOriginComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional component used as the trace origin.\n\x09 *\n\x09 * When this is not assigned, the component uses the owning actor's\n\x09 * viewpoint instead.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional component used as the trace origin.\n\nWhen this is not assigned, the component uses the owning actor's\nviewpoint instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interactable component found by the most recent successful trace. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/InteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interactable component found by the most recent successful trace." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UInteractorComponent constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionTraceDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionTraceChannel;
	static void NewProp_bAutoUpdateTarget_SetBit(void* Obj)
	{
		((UInteractorComponent*)Obj)->bAutoUpdateTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceOriginComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInteractorComponent constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentInteractable"), .Pointer = &UInteractorComponent::execGetCurrentInteractable },
		{ .NameUTF8 = UTF8TEXT("GetCurrentInteractableActor"), .Pointer = &UInteractorComponent::execGetCurrentInteractableActor },
		{ .NameUTF8 = UTF8TEXT("GetCurrentInteractionText"), .Pointer = &UInteractorComponent::execGetCurrentInteractionText },
		{ .NameUTF8 = UTF8TEXT("Interact"), .Pointer = &UInteractorComponent::execInteract },
		{ .NameUTF8 = UTF8TEXT("SetTraceOrigin"), .Pointer = &UInteractorComponent::execSetTraceOrigin },
		{ .NameUTF8 = UTF8TEXT("UpdateInteractionTarget"), .Pointer = &UInteractorComponent::execUpdateInteractionTarget },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractable, "GetCurrentInteractable" }, // 375d632d2ff4c5e4bb389ffb6ba199e3f77657a0
		{ &Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractableActor, "GetCurrentInteractableActor" }, // 78f550261b2daca93ec7130e53841504a76e6aa1
		{ &Z_Construct_UFunction_UInteractorComponent_GetCurrentInteractionText, "GetCurrentInteractionText" }, // 4fb5b219426c68c6f3daec38786ebb7c6228aca9
		{ &Z_Construct_UFunction_UInteractorComponent_Interact, "Interact" }, // 9dcc9c112d678c72f4ee1d69e39c6d9158e38bf4
		{ &Z_Construct_UFunction_UInteractorComponent_SetTraceOrigin, "SetTraceOrigin" }, // 0af6e2b62bbad9d1442b796e6c958fa77800ad45
		{ &Z_Construct_UFunction_UInteractorComponent_UpdateInteractionTarget, "UpdateInteractionTarget" }, // 172e3667975667811693a58e9075dc20c4bde113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UInteractorComponent Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InteractionTraceDistance = { "InteractionTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, InteractionTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTraceDistance_MetaData), NewProp_InteractionTraceDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InteractionTraceChannel = { "InteractionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, InteractionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTraceChannel_MetaData), NewProp_InteractionTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoUpdateTarget = { "bAutoUpdateTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractorComponent), &UHT_STATICS::NewProp_bAutoUpdateTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateTarget_MetaData), NewProp_bAutoUpdateTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TraceOriginComponent = { "TraceOriginComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, TraceOriginComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceOriginComponent_MetaData), NewProp_TraceOriginComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractorComponent, CurrentInteractable), Z_Construct_UClass_UInteractableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractable_MetaData), NewProp_CurrentInteractable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoUpdateTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TraceOriginComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentInteractable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UInteractorComponent Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_InteractionSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInteractorComponent,
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
static void UInteractorComponent_StaticRegisterNativesUInteractorComponent()
{
	UClass* Class = UInteractorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractorComponent;
UClass* Z_Construct_UClass_UInteractorComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInteractorComponent;
		if (!Z_Registration_Info_UClass_UInteractorComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InteractorComponent"),
				Z_Registration_Info_UClass_UInteractorComponent.InnerSingleton,
				UInteractorComponent_StaticRegisterNativesUInteractorComponent,
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
		return Z_Registration_Info_UClass_UInteractorComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInteractorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractorComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractorComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInteractorComponent);
UInteractorComponent::~UInteractorComponent() {}
// ********** End Class UInteractorComponent *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h__Script_InteractionSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractorComponent, TEXT("UInteractorComponent"), &Z_Registration_Info_UClass_UInteractorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractorComponent), 2132366631U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h__Script_InteractionSystem_5f3fa3b0327e50b2e6981d335f32b853920ed8d3{
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
