#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaPlayerCharacter_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.CheckVodka
struct AIndianaPlayerCharacter_BP_C_CheckVodka_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.UserConstructionScript
struct AIndianaPlayerCharacter_BP_C_UserConstructionScript_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature
struct AIndianaPlayerCharacter_BP_C_BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_2_NewStateOfBeingEvent__DelegateSignature
struct AIndianaPlayerCharacter_BP_C_BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_2_NewStateOfBeingEvent__DelegateSignature_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.PP_Update
struct AIndianaPlayerCharacter_BP_C_PP_Update_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.MPC_Update
struct AIndianaPlayerCharacter_BP_C_MPC_Update_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerStealthEnteredBP
struct AIndianaPlayerCharacter_BP_C_OnPlayerStealthEnteredBP_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerStealthExitedBP
struct AIndianaPlayerCharacter_BP_C_OnPlayerStealthExitedBP_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerSoftCoverEnteredBP
struct AIndianaPlayerCharacter_BP_C_OnPlayerSoftCoverEnteredBP_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.OnPlayerSoftCoverExitedBP
struct AIndianaPlayerCharacter_BP_C_OnPlayerSoftCoverExitedBP_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.Stealth
struct AIndianaPlayerCharacter_BP_C_Stealth_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.Stealth_Exit
struct AIndianaPlayerCharacter_BP_C_Stealth_Exit_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.ReceiveBeginPlay
struct AIndianaPlayerCharacter_BP_C_ReceiveBeginPlay_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.PlayerCinematicChange
struct AIndianaPlayerCharacter_BP_C_PlayerCinematicChange_Params
{
	bool                                               bCinematicMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.ItemAcquired
struct AIndianaPlayerCharacter_BP_C_ItemAcquired_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.VodkaItemBind
struct AIndianaPlayerCharacter_BP_C_VodkaItemBind_Params
{
};

// Function IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C.ExecuteUbergraph_IndianaPlayerCharacter_BP
struct AIndianaPlayerCharacter_BP_C_ExecuteUbergraph_IndianaPlayerCharacter_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
