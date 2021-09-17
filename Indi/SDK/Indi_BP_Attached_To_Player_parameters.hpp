#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Attached_To_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.UserConstructionScript
struct ABP_Attached_To_Player_C_UserConstructionScript_Params
{
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.ReceiveBeginPlay
struct ABP_Attached_To_Player_C_ReceiveBeginPlay_Params
{
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Entrance
struct ABP_Attached_To_Player_C_Begin_Overlap_Entrance_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Exit
struct ABP_Attached_To_Player_C_Begin_Overlap_Exit_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Container
struct ABP_Attached_To_Player_C_Begin_Overlap_Container_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.End_Overlap_Container
struct ABP_Attached_To_Player_C_End_Overlap_Container_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.ReceiveEndPlay
struct ABP_Attached_To_Player_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Activate
struct ABP_Attached_To_Player_C_Activate_Params
{
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Bind
struct ABP_Attached_To_Player_C_Bind_Params
{
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Entered
struct ABP_Attached_To_Player_C_Entered_Params
{
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Exited
struct ABP_Attached_To_Player_C_Exited_Params
{
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Grab_Triggers_Event
struct ABP_Attached_To_Player_C_Grab_Triggers_Event_Params
{
};

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.ExecuteUbergraph_BP_Attached_To_Player
struct ABP_Attached_To_Player_C_ExecuteUbergraph_BP_Attached_To_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
