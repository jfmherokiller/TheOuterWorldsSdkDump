#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SavingWidget_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SavingWidget_BP.SavingWidget_BP_C.OnMinimize
struct USavingWidget_BP_C_OnMinimize_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SavingWidget_BP.SavingWidget_BP_C.OnMaximize
struct USavingWidget_BP_C_OnMaximize_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
