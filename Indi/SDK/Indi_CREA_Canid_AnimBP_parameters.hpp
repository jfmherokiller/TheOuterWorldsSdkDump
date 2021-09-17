#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CREA_Canid_AnimBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.CheckHitFlinches
struct UCREA_Canid_AnimBP_C_CheckHitFlinches_Params
{
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.UpdateAnimBP
struct UCREA_Canid_AnimBP_C_UpdateAnimBP_Params
{
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.CombatTransition
struct UCREA_Canid_AnimBP_C_CombatTransition_Params
{
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.NeutralTransition
struct UCREA_Canid_AnimBP_C_NeutralTransition_Params
{
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.OnRebuildAnimationSetData
struct UCREA_Canid_AnimBP_C_OnRebuildAnimationSetData_Params
{
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.BlueprintUpdateAnimation
struct UCREA_Canid_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.AnimNotify_RandomIdle
struct UCREA_Canid_AnimBP_C_AnimNotify_RandomIdle_Params
{
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.AnimNotify_TurnOffRandomIdle
struct UCREA_Canid_AnimBP_C_AnimNotify_TurnOffRandomIdle_Params
{
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.OnNewWeaponAnimations
struct UCREA_Canid_AnimBP_C_OnNewWeaponAnimations_Params
{
	class UWeaponAnimations**                          NewWeaponAnimations;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CREA_Canid_AnimBP.CREA_Canid_AnimBP_C.ExecuteUbergraph_CREA_Canid_AnimBP
struct UCREA_Canid_AnimBP_C_ExecuteUbergraph_CREA_Canid_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
