#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Unarmed_FPV_WeaponAnimations_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.TriggerEventBP
struct UUnarmed_FPV_WeaponAnimations_C_TriggerEventBP_Params
{
	EWeaponEvent*                                      WeaponEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.LeaveStateBP
struct UUnarmed_FPV_WeaponAnimations_C_LeaveStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.EnterStateBP
struct UUnarmed_FPV_WeaponAnimations_C_EnterStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.ExecuteUbergraph_Unarmed_FPV_WeaponAnimations
struct UUnarmed_FPV_WeaponAnimations_C_ExecuteUbergraph_Unarmed_FPV_WeaponAnimations_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
