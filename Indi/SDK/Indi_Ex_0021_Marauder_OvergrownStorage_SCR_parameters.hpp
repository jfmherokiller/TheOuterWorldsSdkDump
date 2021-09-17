#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0021_Marauder_OvergrownStorage_SCR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ex_0021_Marauder_OvergrownStorage_SCR.Ex_0021_Marauder_OvergrownStorage_SCR_C.ReceiveBeginPlay
struct AEx_0021_Marauder_OvergrownStorage_SCR_C_ReceiveBeginPlay_Params
{
};

// Function Ex_0021_Marauder_OvergrownStorage_SCR.Ex_0021_Marauder_OvergrownStorage_SCR_C.BndEvt__Enc_MarauderCamp_Crates_K2Node_ActorBoundEvent_1_EncounterActorCombatChanged__DelegateSignature
struct AEx_0021_Marauder_OvergrownStorage_SCR_C_BndEvt__Enc_MarauderCamp_Crates_K2Node_ActorBoundEvent_1_EncounterActorCombatChanged__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInCombat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ex_0021_Marauder_OvergrownStorage_SCR.Ex_0021_Marauder_OvergrownStorage_SCR_C.HandleBertieSpawning
struct AEx_0021_Marauder_OvergrownStorage_SCR_C_HandleBertieSpawning_Params
{
};

// Function Ex_0021_Marauder_OvergrownStorage_SCR.Ex_0021_Marauder_OvergrownStorage_SCR_C.BndEvt__SQ_0003_BountiedMarauder03_1822_K2Node_ActorBoundEvent_0_ItemStackDelegate__DelegateSignature
struct AEx_0021_Marauder_OvergrownStorage_SCR_C_BndEvt__SQ_0003_BountiedMarauder03_1822_K2Node_ActorBoundEvent_0_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ex_0021_Marauder_OvergrownStorage_SCR.Ex_0021_Marauder_OvergrownStorage_SCR_C.ExecuteUbergraph_Ex_0021_Marauder_OvergrownStorage_SCR
struct AEx_0021_Marauder_OvergrownStorage_SCR_C_ExecuteUbergraph_Ex_0021_Marauder_OvergrownStorage_SCR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
