#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CinematicPlayer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeIn
struct UCinematicPlayer_BP_C_InitiateFadeIn_Params
{
};

// Function CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeOut
struct UCinematicPlayer_BP_C_InitiateFadeOut_Params
{
};

// Function CinematicPlayer_BP.CinematicPlayer_BP_C.ExecuteUbergraph_CinematicPlayer_BP
struct UCinematicPlayer_BP_C_ExecuteUbergraph_CinematicPlayer_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
