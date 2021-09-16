#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TownDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TownDoor_BP.TownDoor_BP_C.UserConstructionScript
struct ATownDoor_BP_C_UserConstructionScript_Params
{
};

// Function TownDoor_BP.TownDoor_BP_C.AnimateDoors__FinishedFunc
struct ATownDoor_BP_C_AnimateDoors__FinishedFunc_Params
{
};

// Function TownDoor_BP.TownDoor_BP_C.AnimateDoors__UpdateFunc
struct ATownDoor_BP_C_AnimateDoors__UpdateFunc_Params
{
};

// Function TownDoor_BP.TownDoor_BP_C.OnStateChanged
struct ATownDoor_BP_C_OnStateChanged_Params
{
};

// Function TownDoor_BP.TownDoor_BP_C.OnAnimateOpen
struct ATownDoor_BP_C_OnAnimateOpen_Params
{
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TownDoor_BP.TownDoor_BP_C.OnAnimateClose
struct ATownDoor_BP_C_OnAnimateClose_Params
{
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TownDoor_BP.TownDoor_BP_C.ExecuteUbergraph_TownDoor_BP
struct ATownDoor_BP_C_ExecuteUbergraph_TownDoor_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
