// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InteractorComponent.h"

#ifdef INTERACTIONSYSTEM_InteractorComponent_generated_h
#error "InteractorComponent.generated.h already included, missing '#pragma once' in InteractorComponent.h"
#endif
#define INTERACTIONSYSTEM_InteractorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UInteractableComponent;
class USceneComponent;

// ********** Begin Class UInteractorComponent *****************************************************
#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentInteractionText); \
	DECLARE_FUNCTION(execGetCurrentInteractableActor); \
	DECLARE_FUNCTION(execGetCurrentInteractable); \
	DECLARE_FUNCTION(execSetTraceOrigin); \
	DECLARE_FUNCTION(execUpdateInteractionTarget); \
	DECLARE_FUNCTION(execInteract);


struct Z_Construct_UClass_UInteractorComponent_Statics;
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractorComponent(ETypeConstructPhase);

#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UInteractorComponent_Statics; \
	friend INTERACTIONSYSTEM_API UClass* ::Z_Construct_UClass_UInteractorComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInteractorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), Z_Construct_UClass_UInteractorComponent) \
	DECLARE_SERIALIZER(UInteractorComponent)


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractorComponent(UInteractorComponent&&) = delete; \
	UInteractorComponent(const UInteractorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractorComponent) \
	NO_API virtual ~UInteractorComponent();


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_18_PROLOG
#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractorComponent;

// ********** End Class UInteractorComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
