#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0015_ShipInt_Scr_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ex_0015_ShipInt_Scr.Ex_0015_ShipInt_Scr_C
// 0x23E0 (0x2770 - 0x0390)
class AEx_0015_ShipInt_Scr_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x23E0];                                    // 0x0390(0x23E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ex_0015_ShipInt_Scr.Ex_0015_ShipInt_Scr_C");
		return ptr;
	}


	void STATIC_CheckForPcOnShip();
	void STATIC_CheckForVicarOnShip();
	void STATIC_HandleStuffOnTakeoff();
	void STATIC_Objective_1_Var_Check();
	void STATIC_BndEvt__TRIG_ship_ai_bark_02_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_ship_ai_bark_01_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ReceiveBeginPlay();
	void STATIC_On_Takeoff_End(bool bSkipped);
	void STATIC_BndEvt__HatchDoor_BP_A_176_K2Node_ActorBoundEvent_32_OnInteract__DelegateSignature(class AActor* Actor);
	void STATIC_BndEvt__HatchDoor_BP_A2_K2Node_ActorBoundEvent_3_OnInteract__DelegateSignature(class AActor* Actor);
	void STATIC_BndEvt__FridgeContainer_A_BP7_K2Node_ActorBoundEvent_4_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item);
	void STATIC_BndEvt__Pickup3_K2Node_ActorBoundEvent_6_OnPickup__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__TossballStick_Pickup2_K2Node_ActorBoundEvent_7_OnPickup__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__SawedOffFlechette_Pickup_Damaged_2_K2Node_ActorBoundEvent_8_OnPickup__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__LockerContainer_A_BP8_K2Node_ActorBoundEvent_9_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item);
	void STATIC_BndEvt__LockerContainer_A_BP7_K2Node_ActorBoundEvent_10_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item);
	void STATIC_MakeMaxInteractableAgain();
	void STATIC_HandleVicarBark();
	void STATIC_BndEvt__TRIG_bark_ada_workbench_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_engine_room_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_crew_quarters_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_respecc_machine_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_nav_console_K2Node_ActorBoundEvent_14_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_camera_cargo_hold_K2Node_ActorBoundEvent_16_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_camera_engine_room_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_camera_galley_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_sealed_door_capt_quarters_K2Node_ActorBoundEvent_19_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_sealed_door_SAM_K2Node_ActorBoundEvent_20_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_bark_ada_sealed_door_bathroom_K2Node_ActorBoundEvent_21_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__EXAM_ship_power_regulator_housing_K2Node_ActorBoundEvent_1_OnInteract__DelegateSignature(class AActor* Actor);
	void STATIC_BndEvt__LockerContainer_A_BP8_K2Node_ActorBoundEvent_22_OCLUnlocked__DelegateSignature(class AActor* Initiator);
	void STATIC_HandlePeriodicADABarks();
	void STATIC_PlayPeriodicADABark();
	void STATIC_BndEvt__Ship_Volume_K2Node_ActorBoundEvent_125_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Ship_Volume_K2Node_ActorBoundEvent_106_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__Parts_Weapon_Pickup_2_K2Node_ActorBoundEvent_23_OnPickup__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__TRIG_bark_ada_camera_entrance_K2Node_ActorBoundEvent_24_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_CutOffShipWorkbenchBark(const struct FInteractionDescription& Description);
	void STATIC_Playership_flyoff();
	void STATIC_BndEvt__POI_fake_ship_workbench_K2Node_ActorBoundEvent_15_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_HandleRestartingFakeShipFX();
	void STATIC_ExecuteUbergraph_Ex_0015_ShipInt_Scr(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
