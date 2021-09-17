#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TeleportDoorBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ResetState
struct ATeleportDoorBase_BP_C_ResetState_Params
{
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnOpen
struct ATeleportDoorBase_BP_C_OnOpen_Params
{
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.GetInteractLocString
struct ATeleportDoorBase_BP_C_GetInteractLocString_Params
{
	struct FLocString                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.FadeIn
struct ATeleportDoorBase_BP_C_FadeIn_Params
{
	float                                              FadeInTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             FadeInComplete;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.FadeOut
struct ATeleportDoorBase_BP_C_FadeOut_Params
{
	float                                              FadeOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             FadeOutComplete;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.TeleportToStart
struct ATeleportDoorBase_BP_C_TeleportToStart_Params
{
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.GetInteraction
struct ATeleportDoorBase_BP_C_GetInteraction_Params
{
	struct FInteractionDescription*                    Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             InteractDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.UserConstructionScript
struct ATeleportDoorBase_BP_C_UserConstructionScript_Params
{
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ReceiveBeginPlay
struct ATeleportDoorBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnInteract_Event
struct ATeleportDoorBase_BP_C_OnInteract_Event_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnFadeOutComplete
struct ATeleportDoorBase_BP_C_OnFadeOutComplete_Params
{
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnFadeInComplete
struct ATeleportDoorBase_BP_C_OnFadeInComplete_Params
{
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ExecuteUbergraph_TeleportDoorBase_BP
struct ATeleportDoorBase_BP_C_ExecuteUbergraph_TeleportDoorBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.On_Sequence_End__DelegateSignature
struct ATeleportDoorBase_BP_C_On_Sequence_End__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
