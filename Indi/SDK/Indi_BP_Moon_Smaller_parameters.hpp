#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Moon_Smaller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Moon_Smaller.BP_Moon_Smaller_C.UserConstructionScript
struct ABP_Moon_Smaller_C_UserConstructionScript_Params
{
};

// Function BP_Moon_Smaller.BP_Moon_Smaller_C.ReceiveBeginPlay
struct ABP_Moon_Smaller_C_ReceiveBeginPlay_Params
{
};

// Function BP_Moon_Smaller.BP_Moon_Smaller_C.ReceiveTick
struct ABP_Moon_Smaller_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Moon_Smaller.BP_Moon_Smaller_C.ExecuteUbergraph_BP_Moon_Smaller
struct ABP_Moon_Smaller_C_ExecuteUbergraph_BP_Moon_Smaller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
