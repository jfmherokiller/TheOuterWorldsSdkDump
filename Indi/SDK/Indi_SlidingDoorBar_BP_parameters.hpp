#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingDoorBar_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.CanInteract
struct ASlidingDoorBar_BP_C_CanInteract_Params
{
	class AIndianaCharacter**                          Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.SetState
struct ASlidingDoorBar_BP_C_SetState_Params
{
	int*                                               StateIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.UserConstructionScript
struct ASlidingDoorBar_BP_C_UserConstructionScript_Params
{
};

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.BarAnimation__FinishedFunc
struct ASlidingDoorBar_BP_C_BarAnimation__FinishedFunc_Params
{
};

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.BarAnimation__UpdateFunc
struct ASlidingDoorBar_BP_C_BarAnimation__UpdateFunc_Params
{
};

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.OnSetState
struct ASlidingDoorBar_BP_C_OnSetState_Params
{
	bool                                               IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.ExecuteUbergraph_SlidingDoorBar_BP
struct ASlidingDoorBar_BP_C_ExecuteUbergraph_SlidingDoorBar_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
