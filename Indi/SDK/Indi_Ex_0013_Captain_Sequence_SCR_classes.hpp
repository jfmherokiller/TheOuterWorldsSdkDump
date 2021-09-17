#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0013_Captain_Sequence_SCR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ex_0013_Captain_Sequence_SCR.Ex_0013_Captain_Sequence_SCR_C
// 0x02D0 (0x0660 - 0x0390)
class AEx_0013_Captain_Sequence_SCR_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0390(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ex_0013_Captain_Sequence_SCR.Ex_0013_Captain_Sequence_SCR_C");
		return ptr;
	}


	void STATIC_HandleDisablingWeatherDuringIntro();
	void STATIC_HandleReturningAfterRegulator();
	void STATIC_CheckIntroNPCsDead();
	void STATIC_CheckEdgewaterDead();
	void STATIC_VFX_TTD_Intro__FinishedFunc();
	void STATIC_VFX_TTD_Intro__UpdateFunc();
	void STATIC_BndEvt__TRIG_autosave_tutorial_4_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_autosave_tutorial_5_K2Node_ActorBoundEvent_14_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__0001_SC_Guard_Intro_Lt_2_K2Node_ActorBoundEvent_15_CharacterDeath__DelegateSignature(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_PQ0001_MarauderBeGone();
	void STATIC_BndEvt__TRIG_autosave_tutorial_3_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_guardconvo_ship2_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_autosave_tutorial_2_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Enc_Marauder_Tutorial_3_K2Node_ActorBoundEvent_21_EncounterActorKilled__DelegateSignature(class AActor* Actor);
	void STATIC_BndEvt__Enc_Marauder_Tutorial_3_K2Node_ActorBoundEvent_22_EncounterComplete__DelegateSignature();
	void STATIC_UpdateIntroNPCStasis();
	void STATIC_BndEvt__0001_SC_Guard_Intro_Lt_2_K2Node_ActorBoundEvent_24_TakeAnyDamageSignature__DelegateSignature(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_BndEvt__0002_SC_Recruit_Guard_Intro03_2_K2Node_ActorBoundEvent_25_TakeAnyDamageSignature__DelegateSignature(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_BndEvt__0002_SC_Recruit_Guard_Intro03_2_K2Node_ActorBoundEvent_26_CharacterDeath__DelegateSignature(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_PQ0001_PhineasBarkStart_01();
	void STATIC_PQ_0001_TTDEnd_Fall();
	void STATIC_PQ0001_PhineasBarkStart_02();
	void STATIC_PQ0001_PhineasBarkDelay01();
	void STATIC_BndEvt__TRIG_TTD_Fall_Start4_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__0002_SC_Recruit_IntroCave_K2Node_ActorBoundEvent_28_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item);
	void STATIC_BndEvt__TRIG_mercer_stops_waving_K2Node_ActorBoundEvent_23_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_TTD_Fall_Start_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_intro_cave_guard_0_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_intro_entering_guard_cave_K2Node_ActorBoundEvent_31_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_intro_cave_guard2_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_ttd_tutorial_K2Node_ActorBoundEvent_16_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_EndSecondTTDEpisode();
	void STATIC_BndEvt__0002_SC_Recruit_Guard_M_A_2_K2Node_ActorBoundEvent_2_CharacterDeath__DelegateSignature(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_PQ_0001_CombatTutorialAmmoCheck();
	void STATIC_HideFakeShipMarauders();
	void STATIC_MercerAndKimballAttack();
	void STATIC_BndEvt__NPC_intro_ernest_K2Node_ActorBoundEvent_11_CharacterDeath__DelegateSignature(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_BndEvt__TRIG_intro_guard_confront_K2Node_ActorBoundEvent_16_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ReplayPhineasIntroBark01();
	void STATIC_ReplayPhineasIntroBark02();
	void STATIC_HandlePhineasIntroBarkReplays();
	void STATIC_BndEvt__Trigger_Advance_Tutorial_State_K2Node_ActorBoundEvent_20_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Advance_Tutorial_State2_K2Node_ActorBoundEvent_27_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_PQ_0001_CombatTutorialTrigger();
	void STATIC_BndEvt__TutorialTrigger_Complete_Jump_0_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__DST_Barrel_Thermal_BP7_K2Node_ActorBoundEvent_7_DestructibleDestroyed__DelegateSignature(class AActor* Instigator);
	void STATIC_BndEvt__DST_Barrel_Thermal_BP10_K2Node_ActorBoundEvent_6_DestructibleDestroyed__DelegateSignature(class AActor* Instigator);
	void STATIC_BndEvt__TutorialTrigger_Complete_Crouch_0_K2Node_ActorBoundEvent_34_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TutorialTrigger_Complete_Sneak_K2Node_ActorBoundEvent_35_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__DST_Barrel_Thermal_BP9_K2Node_ActorBoundEvent_5_DestructibleDestroyed__DelegateSignature(class AActor* Instigator);
	void STATIC_BndEvt__TutorialTrigger_Jump_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__DST_Barrel_Thermal_BP11_K2Node_ActorBoundEvent_4_DestructibleDestroyed__DelegateSignature(class AActor* Instigator);
	void STATIC_BndEvt__TutorialTrigger_Crouch_K2Node_ActorBoundEvent_38_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box_2_K2Node_ActorBoundEvent_39_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box2_K2Node_ActorBoundEvent_40_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box3_K2Node_ActorBoundEvent_41_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box4_K2Node_ActorBoundEvent_42_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box5_K2Node_ActorBoundEvent_43_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Creature_Canid_Feral_StealthTutorial_84_K2Node_ActorBoundEvent_32_OnCombatStateChange__DelegateSignature(bool bIsInCombat, bool bRestoring);
	void STATIC_BndEvt__Creature_Canid_Feral_StealthTutorial2_K2Node_ActorBoundEvent_36_OnCombatStateChange__DelegateSignature(bool bIsInCombat, bool bRestoring);
	void STATIC_BndEvt__DST_Barrel_Thermal_BP8_K2Node_ActorBoundEvent_0_DestructibleDestroyed__DelegateSignature(class AActor* Instigator);
	void STATIC_BndEvt__TRIG_parvati_before_leaving_ev_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ReceiveBeginPlay();
	void STATIC_BndEvt__TRIG_resume_weather_K2Node_ActorBoundEvent_27_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_DisplayInhalerTutorial();
	void STATIC_HideInhalerTutorial();
	void STATIC_ClearMercerAndKimballHostility();
	void STATIC_Stop_TTD_Sound();
	void STATIC_TTD_Episode();
	void STATIC_Stop_TTD_Sound_3();
	void STATIC_TTD_Episode_3();
	void STATIC_ExecuteUbergraph_Ex_0013_Captain_Sequence_SCR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
