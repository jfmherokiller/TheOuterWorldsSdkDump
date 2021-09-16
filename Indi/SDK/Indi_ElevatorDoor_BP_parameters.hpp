#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ElevatorDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ElevatorDoor_BP.ElevatorDoor_BP_C.UserConstructionScript
struct AElevatorDoor_BP_C_UserConstructionScript_Params
{
};

// Function ElevatorDoor_BP.ElevatorDoor_BP_C.AnimateDoors__FinishedFunc
struct AElevatorDoor_BP_C_AnimateDoors__FinishedFunc_Params
{
};

// Function ElevatorDoor_BP.ElevatorDoor_BP_C.AnimateDoors__UpdateFunc
struct AElevatorDoor_BP_C_AnimateDoors__UpdateFunc_Params
{
};

// Function ElevatorDoor_BP.ElevatorDoor_BP_C.OnStateChanged
struct AElevatorDoor_BP_C_OnStateChanged_Params
{
};

// Function ElevatorDoor_BP.ElevatorDoor_BP_C.OnAnimateOpen
struct AElevatorDoor_BP_C_OnAnimateOpen_Params
{
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElevatorDoor_BP.ElevatorDoor_BP_C.OnAnimateClose
struct AElevatorDoor_BP_C_OnAnimateClose_Params
{
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElevatorDoor_BP.ElevatorDoor_BP_C.ExecuteUbergraph_ElevatorDoor_BP
struct AElevatorDoor_BP_C_ExecuteUbergraph_ElevatorDoor_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
