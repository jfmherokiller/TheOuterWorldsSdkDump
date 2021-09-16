#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ElevatorSwitchBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.SetState
struct AElevatorSwitchBase_BP_C_SetState_Params
{
	int*                                               StateIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.CanInteract
struct AElevatorSwitchBase_BP_C_CanInteract_Params
{
	class AIndianaCharacter**                          Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.UserConstructionScript
struct AElevatorSwitchBase_BP_C_UserConstructionScript_Params
{
};

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.LeverAnimation__FinishedFunc
struct AElevatorSwitchBase_BP_C_LeverAnimation__FinishedFunc_Params
{
};

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.LeverAnimation__UpdateFunc
struct AElevatorSwitchBase_BP_C_LeverAnimation__UpdateFunc_Params
{
};

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.ReceiveBeginPlay
struct AElevatorSwitchBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.OnSetState
struct AElevatorSwitchBase_BP_C_OnSetState_Params
{
	bool                                               IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C.ExecuteUbergraph_ElevatorSwitchBase_BP
struct AElevatorSwitchBase_BP_C_ExecuteUbergraph_ElevatorSwitchBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
