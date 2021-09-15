#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerStats_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerStats_BP.PlayerStats_BP_C.Construct
struct UPlayerStats_BP_C_Construct_Params
{
};

// Function PlayerStats_BP.PlayerStats_BP_C.SetXPRatio
struct UPlayerStats_BP_C_SetXPRatio_Params
{
	float*                                             XPRatio;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStats_BP.PlayerStats_BP_C.ExecuteUbergraph_PlayerStats_BP
struct UPlayerStats_BP_C_ExecuteUbergraph_PlayerStats_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
