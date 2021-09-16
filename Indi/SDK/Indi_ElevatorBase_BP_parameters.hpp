#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ElevatorBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ElevatorBase_BP.ElevatorBase_BP_C.IsOnGround
struct AElevatorBase_BP_C_IsOnGround_Params
{
	bool                                               OnGround;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ElevatorBase_BP.ElevatorBase_BP_C.UserConstructionScript
struct AElevatorBase_BP_C_UserConstructionScript_Params
{
};

// Function ElevatorBase_BP.ElevatorBase_BP_C.PlayStartAudio
struct AElevatorBase_BP_C_PlayStartAudio_Params
{
};

// Function ElevatorBase_BP.ElevatorBase_BP_C.PlayStopAudio
struct AElevatorBase_BP_C_PlayStopAudio_Params
{
};

// Function ElevatorBase_BP.ElevatorBase_BP_C.OnElevatorMoveStart_Event_1
struct AElevatorBase_BP_C_OnElevatorMoveStart_Event_1_Params
{
	int                                                DestinationFloor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromStationary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElevatorBase_BP.ElevatorBase_BP_C.OnElevatorMoveEnd_Event_1
struct AElevatorBase_BP_C_OnElevatorMoveEnd_Event_1_Params
{
	int                                                DestinationFloor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElevatorBase_BP.ElevatorBase_BP_C.ReceiveBeginPlay
struct AElevatorBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function ElevatorBase_BP.ElevatorBase_BP_C.ExecuteUbergraph_ElevatorBase_BP
struct AElevatorBase_BP_C_ExecuteUbergraph_ElevatorBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
