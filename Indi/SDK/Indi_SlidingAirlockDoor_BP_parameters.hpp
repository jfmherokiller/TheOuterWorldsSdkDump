#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingAirlockDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.UserConstructionScript
struct ASlidingAirlockDoor_BP_C_UserConstructionScript_Params
{
};

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.AnimateDoors__FinishedFunc
struct ASlidingAirlockDoor_BP_C_AnimateDoors__FinishedFunc_Params
{
};

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.AnimateDoors__UpdateFunc
struct ASlidingAirlockDoor_BP_C_AnimateDoors__UpdateFunc_Params
{
};

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.AnimateDoors__NewTrack_0__EventFunc
struct ASlidingAirlockDoor_BP_C_AnimateDoors__NewTrack_0__EventFunc_Params
{
};

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.OnStateChanged
struct ASlidingAirlockDoor_BP_C_OnStateChanged_Params
{
};

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.OnAnimateOpen
struct ASlidingAirlockDoor_BP_C_OnAnimateOpen_Params
{
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.OnAnimateClose
struct ASlidingAirlockDoor_BP_C_OnAnimateClose_Params
{
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C.ExecuteUbergraph_SlidingAirlockDoor_BP
struct ASlidingAirlockDoor_BP_C_ExecuteUbergraph_SlidingAirlockDoor_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
