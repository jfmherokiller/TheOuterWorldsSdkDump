#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionOverview_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CompanionOverview_BP.CompanionOverview_BP_C.Construct
struct UCompanionOverview_BP_C_Construct_Params
{
};

// Function CompanionOverview_BP.CompanionOverview_BP_C.Tick
struct UCompanionOverview_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CompanionOverview_BP.CompanionOverview_BP_C.OnMadeActive
struct UCompanionOverview_BP_C_OnMadeActive_Params
{
};

// Function CompanionOverview_BP.CompanionOverview_BP_C.OnMadeInactive
struct UCompanionOverview_BP_C_OnMadeInactive_Params
{
};

// Function CompanionOverview_BP.CompanionOverview_BP_C.OnNoStatusEffect
struct UCompanionOverview_BP_C_OnNoStatusEffect_Params
{
};

// Function CompanionOverview_BP.CompanionOverview_BP_C.OnFirstStatusEffect
struct UCompanionOverview_BP_C_OnFirstStatusEffect_Params
{
};

// Function CompanionOverview_BP.CompanionOverview_BP_C.OnAnimInOutComplete
struct UCompanionOverview_BP_C_OnAnimInOutComplete_Params
{
};

// Function CompanionOverview_BP.CompanionOverview_BP_C.ExecuteUbergraph_CompanionOverview_BP
struct UCompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
