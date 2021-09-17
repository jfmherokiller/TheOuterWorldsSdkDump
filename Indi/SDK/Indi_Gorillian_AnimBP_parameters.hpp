#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_AnimBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.BlueprintUpdateAnimation
struct UGorillian_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.CombatTransition
struct UGorillian_AnimBP_C_CombatTransition_Params
{
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.NeutralTransition
struct UGorillian_AnimBP_C_NeutralTransition_Params
{
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.OnRebuildAnimationSetData
struct UGorillian_AnimBP_C_OnRebuildAnimationSetData_Params
{
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_RandomIdle
struct UGorillian_AnimBP_C_AnimNotify_RandomIdle_Params
{
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_TurnOffRandomIdle
struct UGorillian_AnimBP_C_AnimNotify_TurnOffRandomIdle_Params
{
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.OnNewWeaponAnimations
struct UGorillian_AnimBP_C_OnNewWeaponAnimations_Params
{
	class UWeaponAnimations**                          NewWeaponAnimations;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_VFX
struct UGorillian_AnimBP_C_AnimNotify_VFX_Params
{
};

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.ExecuteUbergraph_Gorillian_AnimBP
struct UGorillian_AnimBP_C_ExecuteUbergraph_Gorillian_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
