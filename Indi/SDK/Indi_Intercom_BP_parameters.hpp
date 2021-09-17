#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Intercom_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Intercom_BP.Intercom_BP_C.GetConversationDescription
struct AIntercom_BP_C_GetConversationDescription_Params
{
	struct FConversationDescription                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Intercom_BP.Intercom_BP_C.GetSpeakerGameDataID
struct AIntercom_BP_C_GetSpeakerGameDataID_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Intercom_BP.Intercom_BP_C.GetInteraction
struct AIntercom_BP_C_GetInteraction_Params
{
	struct FInteractionDescription*                    Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             InteractDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Intercom_BP.Intercom_BP_C.SetState
struct AIntercom_BP_C_SetState_Params
{
	int*                                               StateIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Intercom_BP.Intercom_BP_C.UserConstructionScript
struct AIntercom_BP_C_UserConstructionScript_Params
{
};

// Function Intercom_BP.Intercom_BP_C.KnobAnimation__FinishedFunc
struct AIntercom_BP_C_KnobAnimation__FinishedFunc_Params
{
};

// Function Intercom_BP.Intercom_BP_C.KnobAnimation__UpdateFunc
struct AIntercom_BP_C_KnobAnimation__UpdateFunc_Params
{
};

// Function Intercom_BP.Intercom_BP_C.OnSetState
struct AIntercom_BP_C_OnSetState_Params
{
	bool                                               IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intercom_BP.Intercom_BP_C.ReceiveBeginPlay
struct AIntercom_BP_C_ReceiveBeginPlay_Params
{
};

// Function Intercom_BP.Intercom_BP_C.ExecuteUbergraph_Intercom_BP
struct AIntercom_BP_C_ExecuteUbergraph_Intercom_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
