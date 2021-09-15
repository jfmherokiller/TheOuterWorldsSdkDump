#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemToolTip_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemToolTip_BP.ItemToolTip_BP_C.OnIntro
struct UItemToolTip_BP_C_OnIntro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemToolTip_BP.ItemToolTip_BP_C.SetBackgroundBrush
struct UItemToolTip_BP_C_SetBackgroundBrush_Params
{
};

// Function ItemToolTip_BP.ItemToolTip_BP_C.ExecuteUbergraph_ItemToolTip_BP
struct UItemToolTip_BP_C_ExecuteUbergraph_ItemToolTip_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
