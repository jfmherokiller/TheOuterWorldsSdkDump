#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputLabelHoldSmall_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.Construct
struct UInputLabelHoldSmall_BP_C_Construct_Params
{
};

// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetRadialFill
struct UInputLabelHoldSmall_BP_C_SetRadialFill_Params
{
	float*                                             FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetWidth
struct UInputLabelHoldSmall_BP_C_SetWidth_Params
{
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.ExecuteUbergraph_InputLabelHoldSmall_BP
struct UInputLabelHoldSmall_BP_C_ExecuteUbergraph_InputLabelHoldSmall_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
