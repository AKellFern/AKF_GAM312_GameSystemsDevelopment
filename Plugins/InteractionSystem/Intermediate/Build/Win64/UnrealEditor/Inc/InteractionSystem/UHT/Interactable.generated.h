// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interactable.h"

#ifdef INTERACTIONSYSTEM_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define INTERACTIONSYSTEM_Interactable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Interface UInteractable ********************************************************
#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteInteraction_Implementation(AActor* InteractingActor) {}; \
	DECLARE_FUNCTION(execExecuteInteraction);


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInteractable_Statics;
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractable(ETypeConstructPhase);

#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractable(UInteractable&&) = delete; \
	UInteractable(const UInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	virtual ~UInteractable() = default;


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_UInteractable_Statics; \
	friend INTERACTIONSYSTEM_API UClass* ::Z_Construct_UClass_UInteractable(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractionSystem"), Z_Construct_UClass_UInteractable) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_ExecuteInteraction(UObject* O, AActor* InteractingActor); \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_9_PROLOG
#define FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_CALLBACK_WRAPPERS \
	FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractable;

// ********** End Interface UInteractable **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AKellFern312_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interfaces_Interactable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
