#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DialogBoxKeybind_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.Construct
struct UDialogBoxKeybind_BP_C_Construct_Params
{
};

// Function DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.SetNewBackingMaterialHeight
struct UDialogBoxKeybind_BP_C_SetNewBackingMaterialHeight_Params
{
	float*                                             NewHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DialogBoxKeybind_BP.DialogBoxKeybind_BP_C.ExecuteUbergraph_DialogBoxKeybind_BP
struct UDialogBoxKeybind_BP_C_ExecuteUbergraph_DialogBoxKeybind_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
