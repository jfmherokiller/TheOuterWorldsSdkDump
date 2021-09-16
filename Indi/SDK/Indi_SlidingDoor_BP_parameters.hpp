#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SlidingDoor_BP.SlidingDoor_BP_C.UserConstructionScript
struct ASlidingDoor_BP_C_UserConstructionScript_Params
{
};

// Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__FinishedFunc
struct ASlidingDoor_BP_C_AnimateDoors__FinishedFunc_Params
{
};

// Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__UpdateFunc
struct ASlidingDoor_BP_C_AnimateDoors__UpdateFunc_Params
{
};

// Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__NewTrack_0__EventFunc
struct ASlidingDoor_BP_C_AnimateDoors__NewTrack_0__EventFunc_Params
{
};

// Function SlidingDoor_BP.SlidingDoor_BP_C.OnStateChanged
struct ASlidingDoor_BP_C_OnStateChanged_Params
{
};

// Function SlidingDoor_BP.SlidingDoor_BP_C.OnAnimateOpen
struct ASlidingDoor_BP_C_OnAnimateOpen_Params
{
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlidingDoor_BP.SlidingDoor_BP_C.OnAnimateClose
struct ASlidingDoor_BP_C_OnAnimateClose_Params
{
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlidingDoor_BP.SlidingDoor_BP_C.ExecuteUbergraph_SlidingDoor_BP
struct ASlidingDoor_BP_C_ExecuteUbergraph_SlidingDoor_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
