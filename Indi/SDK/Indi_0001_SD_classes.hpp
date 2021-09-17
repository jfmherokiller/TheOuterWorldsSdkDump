#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_SD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_SD.0001_SD_C
// 0x0058 (0x03E8 - 0x0390)
class A0001_SD_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0390(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_SD.0001_SD_C");
		return ptr;
	}


	void STATIC_Timeline_1__FinishedFunc();
	void STATIC_Timeline_1__UpdateFunc();
	void STATIC_Timeline_0__FinishedFunc();
	void STATIC_Timeline_0__UpdateFunc();
	void STATIC_sfx_scr_repair_sentry_bot_intro();
	void STATIC_sfx_scr_repair_sentry_bot_outro();
	void STATIC_ShipPowerOn();
	void STATIC_sfx_scr_injured_cave_guard_heal();
	void STATIC_stop_sfx_scr_pod_falling_computer();
	void STATIC_stop_sfx_scr_pod_falling_foley();
	void STATIC_stop_sfx_scr_pod_falling_int_lp();
	void STATIC_sfx_scr_pod_falling_computer();
	void STATIC_sfx_scr_pod_falling_foley();
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box_2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box6_6_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box7_9_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Music_Exited_Ship2_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ReceiveBeginPlay();
	void STATIC_CustomEvent_1();
	void STATIC_sfx_scr_ada_emergency_procedure_start();
	void STATIC_sfx_scr_ada_emergency_procedure_stop();
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box_Jingle_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box_Jingle2_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_SD_TTD_Stop();
	void STATIC_On_Pod_Crash();
	void STATIC_SD_TTD_Stop_3();
	void STATIC_SD_TTD_Start_Breath();
	void STATIC_SD_TTD_Stop_Breath();
	void STATIC_SD_TTD_Start_Breath_3();
	void STATIC_SD_TTD_Stop_Breath_3();
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box_Jingle3_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Trigger_Saveable_PlayerOnly_Box_IntroCave_FallDamage_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ExecuteUbergraph_0001_SD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
