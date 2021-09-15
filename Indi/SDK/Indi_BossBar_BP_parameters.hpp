#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BossBar_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossBar_BP.BossBar_BP_C.GetHideAnimation
struct UBossBar_BP_C_GetHideAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BossBar_BP.BossBar_BP_C.GetShowAnimation
struct UBossBar_BP_C_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
