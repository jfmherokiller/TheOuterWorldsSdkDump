#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CREA_Raptidon_AnimBlueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.CheckHitFlinches
struct UCREA_Raptidon_AnimBlueprint_C_CheckHitFlinches_Params
{
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.CombatTransition
struct UCREA_Raptidon_AnimBlueprint_C_CombatTransition_Params
{
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.NeutralTransition
struct UCREA_Raptidon_AnimBlueprint_C_NeutralTransition_Params
{
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.OnRebuildAnimationSetData
struct UCREA_Raptidon_AnimBlueprint_C_OnRebuildAnimationSetData_Params
{
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.BlueprintUpdateAnimation
struct UCREA_Raptidon_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.AnimNotify_RandomIdle
struct UCREA_Raptidon_AnimBlueprint_C_AnimNotify_RandomIdle_Params
{
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.AnimNotify_TurnOffRandomIdle
struct UCREA_Raptidon_AnimBlueprint_C_AnimNotify_TurnOffRandomIdle_Params
{
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.OnNewWeaponAnimations
struct UCREA_Raptidon_AnimBlueprint_C_OnNewWeaponAnimations_Params
{
	class UWeaponAnimations**                          NewWeaponAnimations;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C.ExecuteUbergraph_CREA_Raptidon_AnimBlueprint
struct UCREA_Raptidon_AnimBlueprint_C_ExecuteUbergraph_CREA_Raptidon_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
