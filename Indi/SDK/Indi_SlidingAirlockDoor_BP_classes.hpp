#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingAirlockDoor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C
// 0x0054 (0x064C - 0x05F8)
class ASlidingAirlockDoor_BP_C : public ADoorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x05F8(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlidingAirlockDoor_BP.SlidingAirlockDoor_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_AnimateDoors__FinishedFunc();
	void STATIC_AnimateDoors__UpdateFunc();
	void STATIC_AnimateDoors__NewTrack_0__EventFunc();
	void STATIC_OnStateChanged();
	void STATIC_OnAnimateOpen(bool* InstantAnimation);
	void STATIC_OnAnimateClose(bool* IgnoreSound, bool* InstantAnimation);
	void STATIC_ExecuteUbergraph_SlidingAirlockDoor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
