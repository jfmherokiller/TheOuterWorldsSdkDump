#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DialogBox1_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DialogBox1_BP.DialogBox1_BP_C.Construct
struct UDialogBox1_BP_C_Construct_Params
{
};

// Function DialogBox1_BP.DialogBox1_BP_C.SetNewBackingMaterialHeight
struct UDialogBox1_BP_C_SetNewBackingMaterialHeight_Params
{
	float*                                             NewHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DialogBox1_BP.DialogBox1_BP_C.ExecuteUbergraph_DialogBox1_BP
struct UDialogBox1_BP_C_ExecuteUbergraph_DialogBox1_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
