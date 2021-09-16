#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_SCR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function 0002_SCR.0002_SCR_C.IN74798 - Fix for Reed
struct A0002_SCR_C_IN74798___Fix_for_Reed_Params
{
};

// Function 0002_SCR.0002_SCR_C.ResetBarkStartGlobalsOnExitFunction
struct A0002_SCR_C_ResetBarkStartGlobalsOnExitFunction_Params
{
};

// Function 0002_SCR.0002_SCR_C.CheckAbernathyInJailFunction
struct A0002_SCR_C_CheckAbernathyInJailFunction_Params
{
};

// Function 0002_SCR.0002_SCR_C.HandleAbernathyInJail
struct A0002_SCR_C_HandleAbernathyInJail_Params
{
};

// Function 0002_SCR.0002_SCR_C.UnlockEdgewaterFastTravel
struct A0002_SCR_C_UnlockEdgewaterFastTravel_Params
{
};

// Function 0002_SCR.0002_SCR_C.CheckEdgewaterDead
struct A0002_SCR_C_CheckEdgewaterDead_Params
{
};

// Function 0002_SCR.0002_SCR_C.GetParvatiFromParty
struct A0002_SCR_C_GetParvatiFromParty_Params
{
	class AIndianaCharacter*                           Parvati;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.HandleRobotsKillingEveryone
struct A0002_SCR_C_HandleRobotsKillingEveryone_Params
{
};

// Function 0002_SCR.0002_SCR_C.HandleRestartingBarkDialogs
struct A0002_SCR_C_HandleRestartingBarkDialogs_Params
{
};

// Function 0002_SCR.0002_SCR_C.HandleCantinaBarkers
struct A0002_SCR_C_HandleCantinaBarkers_Params
{
};

// Function 0002_SCR.0002_SCR_C.HandleDesertersShowingUp
struct A0002_SCR_C_HandleDesertersShowingUp_Params
{
};

// Function 0002_SCR.0002_SCR_C.UnlockEVTownFastTravel
struct A0002_SCR_C_UnlockEVTownFastTravel_Params
{
};

// Function 0002_SCR.0002_SCR_C.HandleCanneryMobBarks
struct A0002_SCR_C_HandleCanneryMobBarks_Params
{
};

// Function 0002_SCR.0002_SCR_C.PlayParvatiEVBark
struct A0002_SCR_C_PlayParvatiEVBark_Params
{
	int                                                Node;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.HandleSickhouseColds
struct A0002_SCR_C_HandleSickhouseColds_Params
{
};

// Function 0002_SCR.0002_SCR_C.HandleReedParvatiBarks
struct A0002_SCR_C_HandleReedParvatiBarks_Params
{
};

// Function 0002_SCR.0002_SCR_C.UpdateReedLeftEV
struct A0002_SCR_C_UpdateReedLeftEV_Params
{
};

// Function 0002_SCR.0002_SCR_C.HandlePowerOutInEV
struct A0002_SCR_C_HandlePowerOutInEV_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_bypass_parvati_garage_K2Node_ActorBoundEvent_29_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_bypass_parvati_garage_K2Node_ActorBoundEvent_29_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_lights_out_cannery_mob_barks_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_lights_out_cannery_mob_barks_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.PlayCanneryMobBark
struct A0002_SCR_C_PlayCanneryMobBark_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_electromagnets_parvati_garage_K2Node_ActorBoundEvent_27_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_electromagnets_parvati_garage_K2Node_ActorBoundEvent_27_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__LOOT_fridge_parvati_garage_K2Node_ActorBoundEvent_26_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__LOOT_fridge_parvati_garage_K2Node_ActorBoundEvent_26_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_lights_out_cannery_mob_barks_K2Node_ActorBoundEvent_31_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_lights_out_cannery_mob_barks_K2Node_ActorBoundEvent_31_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_boarst_parvati_kitchen_K2Node_ActorBoundEvent_25_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_boarst_parvati_kitchen_K2Node_ActorBoundEvent_25_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.SetUpNextMobBark
struct A0002_SCR_C_SetUpNextMobBark_Params
{
};

// Function 0002_SCR.0002_SCR_C.StartCoughing
struct A0002_SCR_C_StartCoughing_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_punch_parvati_kitchen_K2Node_ActorBoundEvent_24_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_punch_parvati_kitchen_K2Node_ActorBoundEvent_24_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__LOOT_fridge_parvati_kitchen_K2Node_ActorBoundEvent_23_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__LOOT_fridge_parvati_kitchen_K2Node_ActorBoundEvent_23_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_wants_to_talk_cannery_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_wants_to_talk_cannery_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_bread_parvati_kitchen_K2Node_ActorBoundEvent_22_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_bread_parvati_kitchen_K2Node_ActorBoundEvent_22_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_wants_to_talk_garage_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_wants_to_talk_garage_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_conrad_sadik_K2Node_ActorBoundEvent_0_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_conrad_sadik_K2Node_ActorBoundEvent_0_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_martin_abernathy_K2Node_ActorBoundEvent_2_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_martin_abernathy_K2Node_ActorBoundEvent_2_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_phyllis_granger_K2Node_ActorBoundEvent_3_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_phyllis_granger_K2Node_ActorBoundEvent_3_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_pancakes_parvati_kitchen_K2Node_ActorBoundEvent_21_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_pancakes_parvati_kitchen_K2Node_ActorBoundEvent_21_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_constable_reyes_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_constable_reyes_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_pasta_parvati_kitchen_K2Node_ActorBoundEvent_20_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_pasta_parvati_kitchen_K2Node_ActorBoundEvent_20_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_bypass_parvati_dad_room_K2Node_ActorBoundEvent_19_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_bypass_parvati_dad_room_K2Node_ActorBoundEvent_19_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__EXAM_0002_Bounty02_190_K2Node_ActorBoundEvent_1_OnInteract__DelegateSignature
struct A0002_SCR_C_BndEvt__EXAM_0002_Bounty02_190_K2Node_ActorBoundEvent_1_OnInteract__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__EXAM_0002_Bounty03_69_K2Node_ActorBoundEvent_2_OnInteract__DelegateSignature
struct A0002_SCR_C_BndEvt__EXAM_0002_Bounty03_69_K2Node_ActorBoundEvent_2_OnInteract__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__EXAM_shocking_power_regulator_K2Node_ActorBoundEvent_3_OnInteract__DelegateSignature
struct A0002_SCR_C_BndEvt__EXAM_shocking_power_regulator_K2Node_ActorBoundEvent_3_OnInteract__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_vodka_parvati_dad_room_K2Node_ActorBoundEvent_18_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_vodka_parvati_dad_room_K2Node_ActorBoundEvent_18_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__LOOT_parvati_dad_room_K2Node_ActorBoundEvent_17_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__LOOT_parvati_dad_room_K2Node_ActorBoundEvent_17_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__Parvati_Comp_Female_82_K2Node_ActorBoundEvent_4_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__Parvati_Comp_Female_82_K2Node_ActorBoundEvent_4_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__LOOT_parvati_dad_room_02_K2Node_ActorBoundEvent_16_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__LOOT_parvati_dad_room_02_K2Node_ActorBoundEvent_16_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__LOOT_parvati_garage_balcony_K2Node_ActorBoundEvent_15_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__LOOT_parvati_garage_balcony_K2Node_ActorBoundEvent_15_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__DOOR_lights_out_cannery_elevator_bottom_K2Node_ActorBoundEvent_0_ActorSetStasisSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__DOOR_lights_out_cannery_elevator_bottom_K2Node_ActorBoundEvent_0_ActorSetStasisSignature__DelegateSignature_Params
{
	bool                                               bIsInStasis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTemporaryStasis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_cannery_elevator_K2Node_ActorBoundEvent_14_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_cannery_elevator_K2Node_ActorBoundEvent_14_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_Abernathy_bark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_Abernathy_bark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_esther_bark_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_esther_bark_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_esther_blaine_K2Node_ActorBoundEvent_38_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_esther_blaine_K2Node_ActorBoundEvent_38_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_martin_abernathy_K2Node_ActorBoundEvent_39_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_martin_abernathy_K2Node_ActorBoundEvent_39_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_cannery_floor_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_cannery_floor_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_esther_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_esther_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.DisplayQuestDependenciesTutorial
struct A0002_SCR_C_DisplayQuestDependenciesTutorial_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_complete_quest_dependency_tutorial_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_complete_quest_dependency_tutorial_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__SQ_0005_ThomasBook02_Pickup_19_K2Node_ActorBoundEvent_0_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__SQ_0005_ThomasBook02_Pickup_19_K2Node_ActorBoundEvent_0_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_general_store_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_general_store_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__EXAM_scientist_wanted_poster_262_K2Node_ActorBoundEvent_6_OnInteract__DelegateSignature
struct A0002_SCR_C_BndEvt__EXAM_scientist_wanted_poster_262_K2Node_ActorBoundEvent_6_OnInteract__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_grace_romero_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_grace_romero_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_constable_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_constable_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_thomas_kemp_K2Node_ActorBoundEvent_1_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_thomas_kemp_K2Node_ActorBoundEvent_1_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_stefan_garcia_K2Node_ActorBoundEvent_2_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_stefan_garcia_K2Node_ActorBoundEvent_2_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_osi_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_osi_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_adelaide_mcdevitt_K2Node_ActorBoundEvent_3_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_adelaide_mcdevitt_K2Node_ActorBoundEvent_3_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_zoe_chandler_K2Node_ActorBoundEvent_4_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_zoe_chandler_K2Node_ActorBoundEvent_4_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_cantina_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_cantina_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__DOOR_cannery_tower_comm_room_K2Node_ActorBoundEvent_1_OCLOpenEnd__DelegateSignature
struct A0002_SCR_C_BndEvt__DOOR_cannery_tower_comm_room_K2Node_ActorBoundEvent_1_OCLOpenEnd__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_barber_shop_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_barber_shop_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_balcony_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_balcony_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_kitchen_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_kitchen_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_townie_barks_1_K2Node_ActorBoundEvent_42_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_townie_barks_1_K2Node_ActorBoundEvent_42_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_townie_barks_2_K2Node_ActorBoundEvent_44_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_townie_barks_2_K2Node_ActorBoundEvent_44_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_garage_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_garage_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_townie_barks_3_K2Node_ActorBoundEvent_45_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_townie_barks_3_K2Node_ActorBoundEvent_45_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_her_room_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_her_room_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_near_vending_machine_K2Node_ActorBoundEvent_46_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_near_vending_machine_K2Node_ActorBoundEvent_46_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.MoveEsther
struct A0002_SCR_C_MoveEsther_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_dads_room_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_dads_room_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_lights_out_reed_confrontation_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_lights_out_reed_confrontation_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_bark_bathroom_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_bark_bathroom_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_reed_stand_down_bark_K2Node_ActorBoundEvent_47_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_reed_stand_down_bark_K2Node_ActorBoundEvent_47_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_reed_parvati_intro_K2Node_ActorBoundEvent_48_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_reed_parvati_intro_K2Node_ActorBoundEvent_48_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_reed_confrontation_beacon_switch_K2Node_ActorBoundEvent_49_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_reed_confrontation_beacon_switch_K2Node_ActorBoundEvent_49_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__ELEV_cannery_tower_K2Node_ActorBoundEvent_50_ElevatorMoveStart__DelegateSignature
struct A0002_SCR_C_BndEvt__ELEV_cannery_tower_K2Node_ActorBoundEvent_50_ElevatorMoveStart__DelegateSignature_Params
{
	int                                                DestinationFloor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromStationary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_lights_out_reed_stands_up_K2Node_ActorBoundEvent_51_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_lights_out_reed_stands_up_K2Node_ActorBoundEvent_51_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_two_guards_K2Node_ActorBoundEvent_52_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_two_guards_K2Node_ActorBoundEvent_52_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_f1_K2Node_ActorBoundEvent_54_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_f1_K2Node_ActorBoundEvent_54_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_m1_K2Node_ActorBoundEvent_55_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_m1_K2Node_ActorBoundEvent_55_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_f2_K2Node_ActorBoundEvent_56_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_f2_K2Node_ActorBoundEvent_56_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_m2_K2Node_ActorBoundEvent_57_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_m2_K2Node_ActorBoundEvent_57_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_cantina_K2Node_ActorBoundEvent_58_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_cantina_K2Node_ActorBoundEvent_58_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_osi_pre_approach_K2Node_ActorBoundEvent_59_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_osi_pre_approach_K2Node_ActorBoundEvent_59_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_osi_parishioner_f02_K2Node_ActorBoundEvent_60_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_osi_parishioner_f02_K2Node_ActorBoundEvent_60_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_osi_parishioner_f01_K2Node_ActorBoundEvent_61_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_osi_parishioner_f01_K2Node_ActorBoundEvent_61_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_lights_out_sickhouse_guard_bark_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_lights_out_sickhouse_guard_bark_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_osi_parishioners_K2Node_ActorBoundEvent_62_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_osi_parishioners_K2Node_ActorBoundEvent_62_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.OSIBarksDone
struct A0002_SCR_C_OSIBarksDone_Params
{
};

// Function 0002_SCR.0002_SCR_C.CantinaBarksDone
struct A0002_SCR_C_CantinaBarksDone_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_guard_and_townie_K2Node_ActorBoundEvent_63_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_guard_and_townie_K2Node_ActorBoundEvent_63_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.GuardCanneryWorkerBarksDone
struct A0002_SCR_C_GuardCanneryWorkerBarksDone_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_lights_out_sickhouse_guard_bark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_lights_out_sickhouse_guard_bark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.GuardBarksDone
struct A0002_SCR_C_GuardBarksDone_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_on_exit_end_osi_K2Node_ActorBoundEvent_64_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_on_exit_end_osi_K2Node_ActorBoundEvent_64_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_on_exit_end_break_K2Node_ActorBoundEvent_65_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_on_exit_end_break_K2Node_ActorBoundEvent_65_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_on_exit_end_two_guards_K2Node_ActorBoundEvent_66_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_on_exit_end_two_guards_K2Node_ActorBoundEvent_66_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_sickhouse_coughing_K2Node_ActorBoundEvent_2_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_sickhouse_coughing_K2Node_ActorBoundEvent_2_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_barks_on_exit_end_cantina_K2Node_ActorBoundEvent_67_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_barks_on_exit_end_cantina_K2Node_ActorBoundEvent_67_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.ReceiveBeginPlay
struct A0002_SCR_C_ReceiveBeginPlay_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_f4_K2Node_ActorBoundEvent_68_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_f4_K2Node_ActorBoundEvent_68_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_f1_245_K2Node_ActorBoundEvent_69_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_f1_245_K2Node_ActorBoundEvent_69_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.GenericBarksGroup02Start
struct A0002_SCR_C_GenericBarksGroup02Start_Params
{
};

// Function 0002_SCR.0002_SCR_C.GenericBarksGroup02Continue
struct A0002_SCR_C_GenericBarksGroup02Continue_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_sickhouse_coughing_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_sickhouse_coughing_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_townie_barks_2_end_K2Node_ActorBoundEvent_70_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_townie_barks_2_end_K2Node_ActorBoundEvent_70_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.StartSickhouseFemale02Cough
struct A0002_SCR_C_StartSickhouseFemale02Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_m6_K2Node_ActorBoundEvent_71_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_m6_K2Node_ActorBoundEvent_71_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_m5_K2Node_ActorBoundEvent_72_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_m5_K2Node_ActorBoundEvent_72_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.GenericBarksGroup01Start
struct A0002_SCR_C_GenericBarksGroup01Start_Params
{
};

// Function 0002_SCR.0002_SCR_C.GenericBarksGroup01Continue
struct A0002_SCR_C_GenericBarksGroup01Continue_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_townie_barks_1_end_K2Node_ActorBoundEvent_73_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_townie_barks_1_end_K2Node_ActorBoundEvent_73_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.MakeSickhouseFemale02Cough
struct A0002_SCR_C_MakeSickhouseFemale02Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_f3_K2Node_ActorBoundEvent_74_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_f3_K2Node_ActorBoundEvent_74_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_m4_K2Node_ActorBoundEvent_75_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_m4_K2Node_ActorBoundEvent_75_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.GenericBarksGroup03Continue
struct A0002_SCR_C_GenericBarksGroup03Continue_Params
{
};

// Function 0002_SCR.0002_SCR_C.GenericBarksGroup03Start
struct A0002_SCR_C_GenericBarksGroup03Start_Params
{
};

// Function 0002_SCR.0002_SCR_C.StartSickhouseFemale01Cough
struct A0002_SCR_C_StartSickhouseFemale01Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_townie_barks_3_end_K2Node_ActorBoundEvent_76_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_townie_barks_3_end_K2Node_ActorBoundEvent_76_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.MakeSickhouseFemale01Cough
struct A0002_SCR_C_MakeSickhouseFemale01Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__ENC_adjutant_bots_K2Node_ActorBoundEvent_90_EncounterComplete__DelegateSignature
struct A0002_SCR_C_BndEvt__ENC_adjutant_bots_K2Node_ActorBoundEvent_90_EncounterComplete__DelegateSignature_Params
{
};

// Function 0002_SCR.0002_SCR_C.StartSickhouseMale02Cough
struct A0002_SCR_C_StartSickhouseMale02Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_rosemary_kwan_K2Node_ActorBoundEvent_77_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_rosemary_kwan_K2Node_ActorBoundEvent_77_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.StartSickhouseMale01Cough
struct A0002_SCR_C_StartSickhouseMale01Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.StartParvatiPostReedTalk
struct A0002_SCR_C_StartParvatiPostReedTalk_Params
{
	bool                                               bIsInCombat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.MakeSickhouseMale02Cough
struct A0002_SCR_C_MakeSickhouseMale02Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_ludwig_in_edgewater_K2Node_ActorBoundEvent_79_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_ludwig_in_edgewater_K2Node_ActorBoundEvent_79_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PKUP_SAM_Sign_KickMe_2_K2Node_ActorBoundEvent_78_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PKUP_SAM_Sign_KickMe_2_K2Node_ActorBoundEvent_78_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PKUP_Max_OSI_Vial_2_K2Node_ActorBoundEvent_81_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PKUP_Max_OSI_Vial_2_K2Node_ActorBoundEvent_81_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.MakeSickhouseMale01Cough
struct A0002_SCR_C_MakeSickhouseMale01Cough_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_f2_K2Node_ActorBoundEvent_82_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_f2_K2Node_ActorBoundEvent_82_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_f3_sickhouse_K2Node_ActorBoundEvent_83_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_f3_sickhouse_K2Node_ActorBoundEvent_83_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_f4_K2Node_ActorBoundEvent_84_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_f4_K2Node_ActorBoundEvent_84_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_m2_K2Node_ActorBoundEvent_85_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_m2_K2Node_ActorBoundEvent_85_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_m3_K2Node_ActorBoundEvent_86_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_m3_K2Node_ActorBoundEvent_86_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_m4_patrol_K2Node_ActorBoundEvent_87_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_m4_patrol_K2Node_ActorBoundEvent_87_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_reed_f_K2Node_ActorBoundEvent_88_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_reed_f_K2Node_ActorBoundEvent_88_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_reed_m_K2Node_ActorBoundEvent_89_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_reed_m_K2Node_ActorBoundEvent_89_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_m1_K2Node_ActorBoundEvent_91_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_m1_K2Node_ActorBoundEvent_91_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_generic_townie_m3_K2Node_ActorBoundEvent_92_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_generic_townie_m3_K2Node_ActorBoundEvent_92_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_osi_parishioner_m01_K2Node_ActorBoundEvent_94_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_osi_parishioner_m01_K2Node_ActorBoundEvent_94_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_osi_parishioner_m02_K2Node_ActorBoundEvent_95_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_osi_parishioner_m02_K2Node_ActorBoundEvent_95_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_f1_K2Node_ActorBoundEvent_96_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_f1_K2Node_ActorBoundEvent_96_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_f2_K2Node_ActorBoundEvent_97_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_f2_K2Node_ActorBoundEvent_97_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_f3_K2Node_ActorBoundEvent_98_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_f3_K2Node_ActorBoundEvent_98_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_m1_K2Node_ActorBoundEvent_99_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_m1_K2Node_ActorBoundEvent_99_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_m2_K2Node_ActorBoundEvent_100_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_m2_K2Node_ActorBoundEvent_100_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_m3_K2Node_ActorBoundEvent_101_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_m3_K2Node_ActorBoundEvent_101_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_m4_4035_K2Node_ActorBoundEvent_102_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_m4_4035_K2Node_ActorBoundEvent_102_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_cannery_worker_m5_K2Node_ActorBoundEvent_103_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_cannery_worker_m5_K2Node_ActorBoundEvent_103_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_sickhouse_f1_K2Node_ActorBoundEvent_104_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_sickhouse_f1_K2Node_ActorBoundEvent_104_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_sickhouse_f2_K2Node_ActorBoundEvent_105_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_sickhouse_f2_K2Node_ActorBoundEvent_105_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_sickhouse_m1_K2Node_ActorBoundEvent_106_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_sickhouse_m1_K2Node_ActorBoundEvent_106_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_sickhouse_m2_K2Node_ActorBoundEvent_107_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_sickhouse_m2_K2Node_ActorBoundEvent_107_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_amelia_kim_K2Node_ActorBoundEvent_109_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_amelia_kim_K2Node_ActorBoundEvent_109_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_sickhouse_guard_bark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_sickhouse_guard_bark_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_conrad_sadik_K2Node_ActorBoundEvent_110_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_conrad_sadik_K2Node_ActorBoundEvent_110_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_julius_moreau_K2Node_ActorBoundEvent_111_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_julius_moreau_K2Node_ActorBoundEvent_111_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_phyllis_granger_K2Node_ActorBoundEvent_113_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_phyllis_granger_K2Node_ActorBoundEvent_113_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__EXAM_0002_Phyllis_Note_144_K2Node_ActorBoundEvent_0_OnInteract__DelegateSignature
struct A0002_SCR_C_BndEvt__EXAM_0002_Phyllis_Note_144_K2Node_ActorBoundEvent_0_OnInteract__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_winslow_K2Node_ActorBoundEvent_114_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_winslow_K2Node_ActorBoundEvent_114_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.SetUpParvatiGarage
struct A0002_SCR_C_SetUpParvatiGarage_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PU_ludwig_bundle_K2Node_ActorBoundEvent_0_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PU_ludwig_bundle_K2Node_ActorBoundEvent_0_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.MoveParvatiToGarage
struct A0002_SCR_C_MoveParvatiToGarage_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_ernest_in_edgewater_K2Node_ActorBoundEvent_28_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_ernest_in_edgewater_K2Node_ActorBoundEvent_28_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_kimball_in_edgewater_K2Node_ActorBoundEvent_115_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_kimball_in_edgewater_K2Node_ActorBoundEvent_115_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_mercer_in_edgewater_K2Node_ActorBoundEvent_116_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_mercer_in_edgewater_K2Node_ActorBoundEvent_116_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_pelham_in_edgewater_K2Node_ActorBoundEvent_117_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_pelham_in_edgewater_K2Node_ActorBoundEvent_117_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.HandleLoadingDuringIntimidate
struct A0002_SCR_C_HandleLoadingDuringIntimidate_Params
{
};

// Function 0002_SCR.0002_SCR_C.StartReedParvatiBarks
struct A0002_SCR_C_StartReedParvatiBarks_Params
{
};

// Function 0002_SCR.0002_SCR_C.CheckAbernathyInJailEvent
struct A0002_SCR_C_CheckAbernathyInJailEvent_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_reed_parvati_barks_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_reed_parvati_barks_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.MakeLudwigAttackMechanicals
struct A0002_SCR_C_MakeLudwigAttackMechanicals_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_not_in_party_garage_barks_K2Node_ActorBoundEvent_108_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_not_in_party_garage_barks_K2Node_ActorBoundEvent_108_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.PlayParvatiGarageBarks
struct A0002_SCR_C_PlayParvatiGarageBarks_Params
{
};

// Function 0002_SCR.0002_SCR_C.ContinueParvatiGarageBarks
struct A0002_SCR_C_ContinueParvatiGarageBarks_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_parvati_not_in_party_garage_barks_exit_K2Node_ActorBoundEvent_119_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_parvati_not_in_party_garage_barks_exit_K2Node_ActorBoundEvent_119_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_abernathy_prison_bark_K2Node_ActorBoundEvent_118_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_abernathy_prison_bark_K2Node_ActorBoundEvent_118_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_reed_tobson_K2Node_ActorBoundEvent_0_ItemStackDelegate__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_reed_tobson_K2Node_ActorBoundEvent_0_ItemStackDelegate__DelegateSignature_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.PostDialogReedParvatiBarks
struct A0002_SCR_C_PostDialogReedParvatiBarks_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_make_generator_guards_hostile_K2Node_ActorBoundEvent_120_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_make_generator_guards_hostile_K2Node_ActorBoundEvent_120_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__PQ_0001_PowerRegulator_133_K2Node_ActorBoundEvent_0_OnPickup__DelegateSignature
struct A0002_SCR_C_BndEvt__PQ_0001_PowerRegulator_133_K2Node_ActorBoundEvent_0_OnPickup__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_f1_K2Node_ActorBoundEvent_126_OnCombatStateChange__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_f1_K2Node_ActorBoundEvent_126_OnCombatStateChange__DelegateSignature_Params
{
	bool                                               bIsInCombat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_f2_K2Node_ActorBoundEvent_127_OnCombatStateChange__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_f2_K2Node_ActorBoundEvent_127_OnCombatStateChange__DelegateSignature_Params
{
	bool                                               bIsInCombat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_m1_K2Node_ActorBoundEvent_129_OnCombatStateChange__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_m1_K2Node_ActorBoundEvent_129_OnCombatStateChange__DelegateSignature_Params
{
	bool                                               bIsInCombat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_m3_K2Node_ActorBoundEvent_130_OnCombatStateChange__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_m3_K2Node_ActorBoundEvent_130_OnCombatStateChange__DelegateSignature_Params
{
	bool                                               bIsInCombat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__NPC_guard_m4_patrol_K2Node_ActorBoundEvent_131_OnCombatStateChange__DelegateSignature
struct A0002_SCR_C_BndEvt__NPC_guard_m4_patrol_K2Node_ActorBoundEvent_131_OnCombatStateChange__DelegateSignature_Params
{
	bool                                               bIsInCombat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.ResetBarkStartGlobalsOnExitEvent
struct A0002_SCR_C_ResetBarkStartGlobalsOnExitEvent_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__EXAM_0002_Bounty01_2_K2Node_ActorBoundEvent_36_OnInteract__DelegateSignature
struct A0002_SCR_C_BndEvt__EXAM_0002_Bounty01_2_K2Node_ActorBoundEvent_36_OnInteract__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_reeds_office_K2Node_ActorBoundEvent_121_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_reeds_office_K2Node_ActorBoundEvent_121_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_reeds_office_K2Node_ActorBoundEvent_122_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_reeds_office_K2Node_ActorBoundEvent_122_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__Max_Comp_Male_3942_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__Max_Comp_Male_3942_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.UpdateParvatiWTT
struct A0002_SCR_C_UpdateParvatiWTT_Params
{
};

// Function 0002_SCR.0002_SCR_C.BndEvt__0002_Reed_3962_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature
struct A0002_SCR_C_BndEvt__0002_Reed_3962_K2Node_ActorBoundEvent_0_CharacterDeath__DelegateSignature_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_pc_moves_behind_julius_K2Node_ActorBoundEvent_123_ActorBeginOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_pc_moves_behind_julius_K2Node_ActorBoundEvent_123_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.BndEvt__TRIG_pc_moves_behind_julius_K2Node_ActorBoundEvent_124_ActorEndOverlapSignature__DelegateSignature
struct A0002_SCR_C_BndEvt__TRIG_pc_moves_behind_julius_K2Node_ActorBoundEvent_124_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_SCR.0002_SCR_C.ExecuteUbergraph_0002_SCR
struct A0002_SCR_C_ExecuteUbergraph_0002_SCR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
