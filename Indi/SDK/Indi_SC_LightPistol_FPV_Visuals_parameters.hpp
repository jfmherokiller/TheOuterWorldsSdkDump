#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_LightPistol_FPV_Visuals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SC_LightPistol_FPV_Visuals.SC_LightPistol_FPV_Visuals_C.TriggerEventBP
struct USC_LightPistol_FPV_Visuals_C_TriggerEventBP_Params
{
	EWeaponEvent*                                      WeaponEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SC_LightPistol_FPV_Visuals.SC_LightPistol_FPV_Visuals_C.ExecuteUbergraph_SC_LightPistol_FPV_Visuals
struct USC_LightPistol_FPV_Visuals_C_ExecuteUbergraph_SC_LightPistol_FPV_Visuals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
