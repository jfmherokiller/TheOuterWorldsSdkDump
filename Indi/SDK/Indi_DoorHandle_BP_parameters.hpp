#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DoorHandle_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DoorHandle_BP.DoorHandle_BP_C.GetInteraction
struct ADoorHandle_BP_C_GetInteraction_Params
{
	struct FInteractionDescription*                    Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             InteractDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DoorHandle_BP.DoorHandle_BP_C.CanInteract
struct ADoorHandle_BP_C_CanInteract_Params
{
	class AIndianaCharacter**                          Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DoorHandle_BP.DoorHandle_BP_C.SetState
struct ADoorHandle_BP_C_SetState_Params
{
	int*                                               StateIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DoorHandle_BP.DoorHandle_BP_C.UserConstructionScript
struct ADoorHandle_BP_C_UserConstructionScript_Params
{
};

// Function DoorHandle_BP.DoorHandle_BP_C.HandleAnimation__FinishedFunc
struct ADoorHandle_BP_C_HandleAnimation__FinishedFunc_Params
{
};

// Function DoorHandle_BP.DoorHandle_BP_C.HandleAnimation__UpdateFunc
struct ADoorHandle_BP_C_HandleAnimation__UpdateFunc_Params
{
};

// Function DoorHandle_BP.DoorHandle_BP_C.OnSetState
struct ADoorHandle_BP_C_OnSetState_Params
{
	bool                                               IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DoorHandle_BP.DoorHandle_BP_C.ExecuteUbergraph_DoorHandle_BP
struct ADoorHandle_BP_C_ExecuteUbergraph_DoorHandle_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
