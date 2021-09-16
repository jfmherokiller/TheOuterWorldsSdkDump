#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeHvy_TeleStaff_Shared_Visuals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C.EnterStateBP
struct UMeleeHvy_TeleStaff_Shared_Visuals_C_EnterStateBP_Params
{
	EWeaponState*                                      WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams*                         Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C.ExecuteUbergraph_MeleeHvy_TeleStaff_Shared_Visuals
struct UMeleeHvy_TeleStaff_Shared_Visuals_C_ExecuteUbergraph_MeleeHvy_TeleStaff_Shared_Visuals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
