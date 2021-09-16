#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_TeslaCannon_Shared_Visuals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.InitializeBP
struct UTL_TeslaCannon_Shared_Visuals_C_InitializeBP_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWeapon**                                    NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.TickBP
struct UTL_TeslaCannon_Shared_Visuals_C_TickBP_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.TriggerEventBP
struct UTL_TeslaCannon_Shared_Visuals_C_TriggerEventBP_Params
{
	EWeaponEvent*                                      WeaponEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.LeaveStateBP
struct UTL_TeslaCannon_Shared_Visuals_C_LeaveStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.EnterStateBP
struct UTL_TeslaCannon_Shared_Visuals_C_EnterStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.ExecuteUbergraph_TL_TeslaCannon_Shared_Visuals
struct UTL_TeslaCannon_Shared_Visuals_C_ExecuteUbergraph_TL_TeslaCannon_Shared_Visuals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
