#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RadialContextMenu_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RadialContextMenu_BP.RadialContextMenu_BP_C.OnOutro
struct URadialContextMenu_BP_C_OnOutro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RadialContextMenu_BP.RadialContextMenu_BP_C.OnIntro
struct URadialContextMenu_BP_C_OnIntro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RadialContextMenu_BP.RadialContextMenu_BP_C.Construct
struct URadialContextMenu_BP_C_Construct_Params
{
};

// Function RadialContextMenu_BP.RadialContextMenu_BP_C.ExecuteUbergraph_RadialContextMenu_BP
struct URadialContextMenu_BP_C_ExecuteUbergraph_RadialContextMenu_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
