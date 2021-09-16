#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SimpleContainer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SimpleContainer_BP.SimpleContainer_BP_C.ApplyLight
struct ASimpleContainer_BP_C_ApplyLight_Params
{
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.GetLightingConfig
struct ASimpleContainer_BP_C_GetLightingConfig_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MaterialSlot;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.UserConstructionScript
struct ASimpleContainer_BP_C_UserConstructionScript_Params
{
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.AnimateLid__FinishedFunc
struct ASimpleContainer_BP_C_AnimateLid__FinishedFunc_Params
{
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.AnimateLid__UpdateFunc
struct ASimpleContainer_BP_C_AnimateLid__UpdateFunc_Params
{
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.OnAnimateOpen
struct ASimpleContainer_BP_C_OnAnimateOpen_Params
{
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.OnAnimateClose
struct ASimpleContainer_BP_C_OnAnimateClose_Params
{
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_ItemStackDelegate__DelegateSignature
struct ASimpleContainer_BP_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_ItemStackDelegate__DelegateSignature
struct ASimpleContainer_BP_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.ReceiveBeginPlay
struct ASimpleContainer_BP_C_ReceiveBeginPlay_Params
{
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.OnPlayerOpenedContainer_Event_1
struct ASimpleContainer_BP_C_OnPlayerOpenedContainer_Event_1_Params
{
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.OnStateChanged
struct ASimpleContainer_BP_C_OnStateChanged_Params
{
};

// Function SimpleContainer_BP.SimpleContainer_BP_C.ExecuteUbergraph_SimpleContainer_BP
struct ASimpleContainer_BP_C_ExecuteUbergraph_SimpleContainer_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
