#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_Revolver_Shared_Visuals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SC_Revolver_Shared_Visuals.SC_Revolver_Shared_Visuals_C.TriggerEventBP
struct USC_Revolver_Shared_Visuals_C_TriggerEventBP_Params
{
	EWeaponEvent*                                      WeaponEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SC_Revolver_Shared_Visuals.SC_Revolver_Shared_Visuals_C.TriggerCustomEventBP
struct USC_Revolver_Shared_Visuals_C_TriggerCustomEventBP_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SC_Revolver_Shared_Visuals.SC_Revolver_Shared_Visuals_C.EnterStateBP
struct USC_Revolver_Shared_Visuals_C_EnterStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SC_Revolver_Shared_Visuals.SC_Revolver_Shared_Visuals_C.ExecuteUbergraph_SC_Revolver_Shared_Visuals
struct USC_Revolver_Shared_Visuals_C_ExecuteUbergraph_SC_Revolver_Shared_Visuals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
