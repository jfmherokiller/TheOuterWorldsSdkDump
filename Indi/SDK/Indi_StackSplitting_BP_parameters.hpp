#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StackSplitting_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StackSplitting_BP.StackSplitting_BP_C.Construct
struct UStackSplitting_BP_C_Construct_Params
{
};

// Function StackSplitting_BP.StackSplitting_BP_C.SetNewBackingMaterialHeight
struct UStackSplitting_BP_C_SetNewBackingMaterialHeight_Params
{
	float*                                             NewHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StackSplitting_BP.StackSplitting_BP_C.ExecuteUbergraph_StackSplitting_BP
struct UStackSplitting_BP_C_ExecuteUbergraph_StackSplitting_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
