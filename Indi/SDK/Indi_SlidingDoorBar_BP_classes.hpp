#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingDoorBar_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlidingDoorBar_BP.SlidingDoorBar_BP_C
// 0x0034 (0x046C - 0x0438)
class ASlidingDoorBar_BP_C : public ASwitchBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0438(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlidingDoorBar_BP.SlidingDoorBar_BP_C");
		return ptr;
	}


	bool CanInteract(class AIndianaCharacter** Initiator, struct FInteractPayload* Payload);
	void STATIC_SetState(int* StateIndex, bool* IgnoreSound, bool* InstantAnimation, bool* Unused);
	void STATIC_UserConstructionScript();
	void STATIC_BarAnimation__FinishedFunc();
	void STATIC_BarAnimation__UpdateFunc();
	void STATIC_OnSetState(bool IsOn, bool InstantAnimation);
	void STATIC_ExecuteUbergraph_SlidingDoorBar_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
