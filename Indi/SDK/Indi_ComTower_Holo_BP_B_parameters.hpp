#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComTower_Holo_BP_B_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.UserConstructionScript
struct AComTower_Holo_BP_B_C_UserConstructionScript_Params
{
};

// Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.ReceiveTick
struct AComTower_Holo_BP_B_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComTower_Holo_BP_B.ComTower_Holo_BP_B_C.ExecuteUbergraph_ComTower_Holo_BP_B
struct AComTower_Holo_BP_B_C_ExecuteUbergraph_ComTower_Holo_BP_B_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
