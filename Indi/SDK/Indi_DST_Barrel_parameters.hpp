#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DST_Barrel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DST_Barrel.DST_Barrel_C.UserConstructionScript
struct ADST_Barrel_C_UserConstructionScript_Params
{
};

// Function DST_Barrel.DST_Barrel_C.ReceiveBeginPlay
struct ADST_Barrel_C_ReceiveBeginPlay_Params
{
};

// Function DST_Barrel.DST_Barrel_C.OnDestructibleDestroyed_Event_1
struct ADST_Barrel_C_OnDestructibleDestroyed_Event_1_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DST_Barrel.DST_Barrel_C.ExecuteUbergraph_DST_Barrel
struct ADST_Barrel_C_ExecuteUbergraph_DST_Barrel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
