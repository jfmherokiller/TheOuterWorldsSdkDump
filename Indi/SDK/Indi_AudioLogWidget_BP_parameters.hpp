#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AudioLogWidget_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AudioLogWidget_BP.AudioLogWidget_BP_C.ShowAudioLog
struct UAudioLogWidget_BP_C_ShowAudioLog_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentRenderOpacity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioLogWidget_BP.AudioLogWidget_BP_C.ExecuteUbergraph_AudioLogWidget_BP
struct UAudioLogWidget_BP_C_ExecuteUbergraph_AudioLogWidget_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
