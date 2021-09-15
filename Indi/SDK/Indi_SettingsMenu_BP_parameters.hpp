#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SettingsMenu_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SettingsMenu_BP.SettingsMenu_BP_C.OnIntro
struct USettingsMenu_BP_C_OnIntro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SettingsMenu_BP.SettingsMenu_BP_C.OnOutro
struct USettingsMenu_BP_C_OnOutro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
