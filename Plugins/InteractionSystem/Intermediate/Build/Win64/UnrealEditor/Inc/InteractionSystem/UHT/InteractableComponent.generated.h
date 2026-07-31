// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InteractableComponent.h"

#ifdef INTERACTIONSYSTEM_InteractableComponent_generated_h
#error "InteractableComponent.generated.h already included, missing '#pragma once' in InteractableComponent.h"
#endif
#define INTERACTIONSYSTEM_InteractableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UInteractableComponent ***************************************************
#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConfirmInteract);


struct Z_Construct_UClass_UInteractableComponent_Statics;
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableComponent(ETypeConstructPhase);

#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UInteractableComponent_Statics; \
	friend INTERACTIONSYSTEM_API UClass* ::Z_Construct_UClass_UInteractableComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), Z_Construct_UClass_UInteractableComponent) \
	DECLARE_SERIALIZER(UInteractableComponent)


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractableComponent(UInteractableComponent&&) = delete; \
	UInteractableComponent(const UInteractableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractableComponent) \
	NO_API virtual ~UInteractableComponent();


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_9_PROLOG
#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractableComponent;

// ********** End Class UInteractableComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Components_InteractableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
