#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AmmoReadout_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AmmoReadout_BP.AmmoReadout_BP_C.ColorTextBlock
struct UAmmoReadout_BP_C_ColorTextBlock_Params
{
	bool                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlockBase*                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AmmoReadout_BP.AmmoReadout_BP_C.EvaluateLowAmmoWarning
struct UAmmoReadout_BP_C_EvaluateLowAmmoWarning_Params
{
	int*                                               MaxClipSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CurrentClipSize;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RemainingAmmo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmmoReadout_BP.AmmoReadout_BP_C.ExecuteUbergraph_AmmoReadout_BP
struct UAmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
