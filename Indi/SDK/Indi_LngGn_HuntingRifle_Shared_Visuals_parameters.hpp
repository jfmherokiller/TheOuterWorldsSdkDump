#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LngGn_HuntingRifle_Shared_Visuals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LngGn_HuntingRifle_Shared_Visuals.LngGn_HuntingRifle_Shared_Visuals_C.TriggerEventBP
struct ULngGn_HuntingRifle_Shared_Visuals_C_TriggerEventBP_Params
{
	EWeaponEvent*                                      WeaponEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LngGn_HuntingRifle_Shared_Visuals.LngGn_HuntingRifle_Shared_Visuals_C.EnterStateBP
struct ULngGn_HuntingRifle_Shared_Visuals_C_EnterStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LngGn_HuntingRifle_Shared_Visuals.LngGn_HuntingRifle_Shared_Visuals_C.ExecuteUbergraph_LngGn_HuntingRifle_Shared_Visuals
struct ULngGn_HuntingRifle_Shared_Visuals_C_ExecuteUbergraph_LngGn_HuntingRifle_Shared_Visuals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
