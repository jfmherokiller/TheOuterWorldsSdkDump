#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Trigger_Volume_Bound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.UserConstructionScript
struct ABP_Trigger_Volume_Bound_C_UserConstructionScript_Params
{
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Trigger_Volume_Bound_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.Actor_End_Overlap
struct ABP_Trigger_Volume_Bound_C_Actor_End_Overlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.Actor_Begin_Overlap
struct ABP_Trigger_Volume_Bound_C_Actor_Begin_Overlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.Bind
struct ABP_Trigger_Volume_Bound_C_Bind_Params
{
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Trigger_Volume_Bound_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature
struct ABP_Trigger_Volume_Bound_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.ExecuteUbergraph_BP_Trigger_Volume_Bound
struct ABP_Trigger_Volume_Bound_C_ExecuteUbergraph_BP_Trigger_Volume_Bound_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.Disp_End_Overlap__DelegateSignature
struct ABP_Trigger_Volume_Bound_C_Disp_End_Overlap__DelegateSignature_Params
{
};

// Function BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C.Disp_Begin_Overlap__DelegateSignature
struct ABP_Trigger_Volume_Bound_C_Disp_Begin_Overlap__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
