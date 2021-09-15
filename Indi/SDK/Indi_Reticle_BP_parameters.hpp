#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Reticle_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Reticle_BP.Reticle_BP_C.Tick
struct UReticle_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Reticle_BP.Reticle_BP_C.ExpandTTDRotator
struct UReticle_BP_C_ExpandTTDRotator_Params
{
};

// Function Reticle_BP.Reticle_BP_C.ShrinkTTDRotator
struct UReticle_BP_C_ShrinkTTDRotator_Params
{
};

// Function Reticle_BP.Reticle_BP_C.SetTTDProgressRatio
struct UReticle_BP_C_SetTTDProgressRatio_Params
{
	float*                                             NewTTDRatio;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Reticle_BP.Reticle_BP_C.Construct
struct UReticle_BP_C_Construct_Params
{
};

// Function Reticle_BP.Reticle_BP_C.ExecuteUbergraph_Reticle_BP
struct UReticle_BP_C_ExecuteUbergraph_Reticle_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
