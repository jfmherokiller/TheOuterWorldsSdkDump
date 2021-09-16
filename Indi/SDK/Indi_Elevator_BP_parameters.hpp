#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Elevator_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Elevator_BP.Elevator_BP_C.CheckCurrentState
struct AElevator_BP_C_CheckCurrentState_Params
{
};

// Function Elevator_BP.Elevator_BP_C.UserConstructionScript
struct AElevator_BP_C_UserConstructionScript_Params
{
};

// Function Elevator_BP.Elevator_BP_C.Timeline_0__FinishedFunc
struct AElevator_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function Elevator_BP.Elevator_BP_C.Timeline_0__UpdateFunc
struct AElevator_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function Elevator_BP.Elevator_BP_C.Timeline_1__FinishedFunc
struct AElevator_BP_C_Timeline_1__FinishedFunc_Params
{
};

// Function Elevator_BP.Elevator_BP_C.Timeline_1__UpdateFunc
struct AElevator_BP_C_Timeline_1__UpdateFunc_Params
{
};

// Function Elevator_BP.Elevator_BP_C.ReceiveBeginPlay
struct AElevator_BP_C_ReceiveBeginPlay_Params
{
};

// Function Elevator_BP.Elevator_BP_C.StopGearAnimation
struct AElevator_BP_C_StopGearAnimation_Params
{
};

// Function Elevator_BP.Elevator_BP_C.ForwardGearAnimation
struct AElevator_BP_C_ForwardGearAnimation_Params
{
};

// Function Elevator_BP.Elevator_BP_C.ReverseGearAnimation
struct AElevator_BP_C_ReverseGearAnimation_Params
{
};

// Function Elevator_BP.Elevator_BP_C.OnElevatorMoveStart_Event_1
struct AElevator_BP_C_OnElevatorMoveStart_Event_1_Params
{
	int*                                               DestinationFloor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FromStationary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Elevator_BP.Elevator_BP_C.OnElevatorMoveEnd_Event_1
struct AElevator_BP_C_OnElevatorMoveEnd_Event_1_Params
{
	int*                                               DestinationFloor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Elevator_BP.Elevator_BP_C.ExecuteUbergraph_Elevator_BP
struct AElevator_BP_C_ExecuteUbergraph_Elevator_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
