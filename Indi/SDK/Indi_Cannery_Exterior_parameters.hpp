#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Cannery_Exterior_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cannery_Exterior.Cannery_Exterior_C.ReceiveBeginPlay
struct ACannery_Exterior_C_ReceiveBeginPlay_Params
{
};

// Function Cannery_Exterior.Cannery_Exterior_C.StopSignsOnLowPower
struct ACannery_Exterior_C_StopSignsOnLowPower_Params
{
};

// Function Cannery_Exterior.Cannery_Exterior_C.ExecuteUbergraph_Cannery_Exterior
struct ACannery_Exterior_C_ExecuteUbergraph_Cannery_Exterior_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
