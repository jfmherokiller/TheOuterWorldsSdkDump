#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BarkVolume_Companion_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C
// 0x0200 (0x05E0 - 0x03E0)
class ABarkVolume_Companion_Generic_C : public ATrigger_Saveable_PlayerOnly_Box_C
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x03E0(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnActorBeginOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ExecuteUbergraph_BarkVolume_Companion_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
