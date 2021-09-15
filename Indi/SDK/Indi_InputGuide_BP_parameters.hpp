#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputGuide_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InputGuide_BP.InputGuide_BP_C.InteractChanged
struct UInputGuide_BP_C_InteractChanged_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputGuide_BP.InputGuide_BP_C.OnInteractionProgressChange
struct UInputGuide_BP_C_OnInteractionProgressChange_Params
{
	float*                                             CurrentProgressRatio;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputGuide_BP.InputGuide_BP_C.Construct
struct UInputGuide_BP_C_Construct_Params
{
};

// Function InputGuide_BP.InputGuide_BP_C.ExecuteUbergraph_InputGuide_BP
struct UInputGuide_BP_C_ExecuteUbergraph_InputGuide_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
