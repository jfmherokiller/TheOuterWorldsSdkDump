#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Aurora_A_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Aurora_A.BP_Aurora_A_C.SetOpacity
struct ABP_Aurora_A_C_SetOpacity_Params
{
	float                                              NewOpacity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Aurora_A.BP_Aurora_A_C.UserConstructionScript
struct ABP_Aurora_A_C_UserConstructionScript_Params
{
};

// Function BP_Aurora_A.BP_Aurora_A_C.FadeInTimeline__FinishedFunc
struct ABP_Aurora_A_C_FadeInTimeline__FinishedFunc_Params
{
};

// Function BP_Aurora_A.BP_Aurora_A_C.FadeInTimeline__UpdateFunc
struct ABP_Aurora_A_C_FadeInTimeline__UpdateFunc_Params
{
};

// Function BP_Aurora_A.BP_Aurora_A_C.FadeIn
struct ABP_Aurora_A_C_FadeIn_Params
{
	float                                              FadeTimeSeconds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Aurora_A.BP_Aurora_A_C.FadeOut
struct ABP_Aurora_A_C_FadeOut_Params
{
	float                                              FadeTimeSeconds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Aurora_A.BP_Aurora_A_C.ExecuteUbergraph_BP_Aurora_A
struct ABP_Aurora_A_C_ExecuteUbergraph_BP_Aurora_A_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
