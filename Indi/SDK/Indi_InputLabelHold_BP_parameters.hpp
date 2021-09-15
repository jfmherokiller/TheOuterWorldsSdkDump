#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputLabelHold_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InputLabelHold_BP.InputLabelHold_BP_C.Construct
struct UInputLabelHold_BP_C_Construct_Params
{
};

// Function InputLabelHold_BP.InputLabelHold_BP_C.SetRadialFill
struct UInputLabelHold_BP_C_SetRadialFill_Params
{
	float*                                             FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputLabelHold_BP.InputLabelHold_BP_C.SetWidth
struct UInputLabelHold_BP_C_SetWidth_Params
{
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputLabelHold_BP.InputLabelHold_BP_C.ExecuteUbergraph_InputLabelHold_BP
struct UInputLabelHold_BP_C_ExecuteUbergraph_InputLabelHold_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
