#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0020_ShipWreckage_SCR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ex_0020_ShipWreckage_SCR.Ex_0020_ShipWreckage_SCR_C
// 0x0010 (0x03A0 - 0x0390)
class AEx_0020_ShipWreckage_SCR_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ex_0020_ShipWreckage_SCR.Ex_0020_ShipWreckage_SCR_C");
		return ptr;
	}


	void STATIC_BndEvt__Trigger_Marauder_Ambush_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ExecuteUbergraph_Ex_0020_ShipWreckage_SCR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
