#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DialogBoxRespec_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.Construct
struct UDialogBoxRespec_BP_C_Construct_Params
{
};

// Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.SetNewBackingMaterialHeight
struct UDialogBoxRespec_BP_C_SetNewBackingMaterialHeight_Params
{
	float*                                             NewHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DialogBoxRespec_BP.DialogBoxRespec_BP_C.ExecuteUbergraph_DialogBoxRespec_BP
struct UDialogBoxRespec_BP_C_ExecuteUbergraph_DialogBoxRespec_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
