#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Ground_Spawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Ground_Spawner.BP_Ground_Spawner_C.UserConstructionScript
struct ABP_Ground_Spawner_C_UserConstructionScript_Params
{
};

// Function BP_Ground_Spawner.BP_Ground_Spawner_C.ReceiveBeginPlay
struct ABP_Ground_Spawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ground_Spawner.BP_Ground_Spawner_C.ExecuteUbergraph_BP_Ground_Spawner
struct ABP_Ground_Spawner_C_ExecuteUbergraph_BP_Ground_Spawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
