#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AbilityOverview_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AbilityOverview_BP.AbilityOverview_BP_C.OnPlayerCombatStateChange
struct UAbilityOverview_BP_C_OnPlayerCombatStateChange_Params
{
	bool*                                              IsPlayerInCombat;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityOverview_BP.AbilityOverview_BP_C.Tick
struct UAbilityOverview_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityOverview_BP.AbilityOverview_BP_C.OnAbilityCooldownFinished
struct UAbilityOverview_BP_C_OnAbilityCooldownFinished_Params
{
	EAbilityPosition*                                  AbillityPosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityOverview_BP.AbilityOverview_BP_C.ExecuteUbergraph_AbilityOverview_BP
struct UAbilityOverview_BP_C_ExecuteUbergraph_AbilityOverview_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
