#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SwitchBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SwitchBase_BP.SwitchBase_BP_C.SetState
struct ASwitchBase_BP_C_SetState_Params
{
	int                                                StateIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchBase_BP.SwitchBase_BP_C.UpdateCurrentState
struct ASwitchBase_BP_C_UpdateCurrentState_Params
{
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchBase_BP.SwitchBase_BP_C.UserConstructionScript
struct ASwitchBase_BP_C_UserConstructionScript_Params
{
};

// Function SwitchBase_BP.SwitchBase_BP_C.ReceiveBeginPlay
struct ASwitchBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function SwitchBase_BP.SwitchBase_BP_C.PlayChangedAudio
struct ASwitchBase_BP_C_PlayChangedAudio_Params
{
};

// Function SwitchBase_BP.SwitchBase_BP_C.OnSwitchStateChanged_Event_1
struct ASwitchBase_BP_C_OnSwitchStateChanged_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SwitchBase_BP.SwitchBase_BP_C.ExecuteUbergraph_SwitchBase_BP
struct ASwitchBase_BP_C_ExecuteUbergraph_SwitchBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
