#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ShipAI_AnimBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.UpdateAnimationParams
struct UShipAI_AnimBP_C_UpdateAnimationParams_Params
{
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.BlueprintUpdateAnimation
struct UShipAI_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_ResetRandomIdle
struct UShipAI_AnimBP_C_AnimNotify_ResetRandomIdle_Params
{
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnNewLocomotionAnimationSet
struct UShipAI_AnimBP_C_OnNewLocomotionAnimationSet_Params
{
	class ULocomotionAnimationSet**                    NewLocomtionAnimationSet;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.SetPersonality
struct UShipAI_AnimBP_C_SetPersonality_Params
{
	class UTPVPersonalitySet**                         Personality;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnRebuildAnimationSetData
struct UShipAI_AnimBP_C_OnRebuildAnimationSetData_Params
{
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_CombatReadyTransition
struct UShipAI_AnimBP_C_AnimNotify_CombatReadyTransition_Params
{
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_CombatIdleStateTransition
struct UShipAI_AnimBP_C_AnimNotify_CombatIdleStateTransition_Params
{
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnNewWeaponAnimations
struct UShipAI_AnimBP_C_OnNewWeaponAnimations_Params
{
	class UWeaponAnimations**                          NewWeaponAnimations;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_TriggerLookLeft
struct UShipAI_AnimBP_C_AnimNotify_TriggerLookLeft_Params
{
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_StopLookLeft
struct UShipAI_AnimBP_C_AnimNotify_StopLookLeft_Params
{
};

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.ExecuteUbergraph_ShipAI_AnimBP
struct UShipAI_AnimBP_C_ExecuteUbergraph_ShipAI_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
