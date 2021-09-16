#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeLt_SentrySabre_Shared_Visuals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MeleeLt_SentrySabre_Shared_Visuals.MeleeLt_SentrySabre_Shared_Visuals_C.EnterStateBP
struct UMeleeLt_SentrySabre_Shared_Visuals_C_EnterStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MeleeLt_SentrySabre_Shared_Visuals.MeleeLt_SentrySabre_Shared_Visuals_C.LeaveStateBP
struct UMeleeLt_SentrySabre_Shared_Visuals_C_LeaveStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeLt_SentrySabre_Shared_Visuals.MeleeLt_SentrySabre_Shared_Visuals_C.TriggerEventBP
struct UMeleeLt_SentrySabre_Shared_Visuals_C_TriggerEventBP_Params
{
	EWeaponEvent*                                      WeaponEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MeleeLt_SentrySabre_Shared_Visuals.MeleeLt_SentrySabre_Shared_Visuals_C.ExecuteUbergraph_MeleeLt_SentrySabre_Shared_Visuals
struct UMeleeLt_SentrySabre_Shared_Visuals_C_ExecuteUbergraph_MeleeLt_SentrySabre_Shared_Visuals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
