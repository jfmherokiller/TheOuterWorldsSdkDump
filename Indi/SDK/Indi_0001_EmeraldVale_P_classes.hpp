#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_EmeraldVale_P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_EmeraldVale_P.0001_EmeraldVale_P_C
// 0x0008 (0x0398 - 0x0390)
class A0001_EmeraldVale_P_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_EmeraldVale_P.0001_EmeraldVale_P_C");
		return ptr;
	}


	void STATIC_SetShipLocation();
	void STATIC_BndEvt__TRIG_parvati_bark_thomas_east_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_geo_ext_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_silas_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_ship_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_zoe_camp_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_thomas_west_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_greenhouse_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_peak_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_river_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_BndEvt__TRIG_parvati_bark_landing_pad_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ReceiveBeginPlay();
	void STATIC_HandleFakeShipLocation();
	void STATIC_BndEvt__TRIG_parvati_bark_robot_scout_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ExecuteUbergraph_0001_EmeraldVale_P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
