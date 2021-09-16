#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SwitchBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SwitchBase_BP.SwitchBase_BP_C
// 0x0018 (0x0438 - 0x0420)
class ASwitchBase_BP_C : public ASwitch
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0420(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SwitchBase_BP.SwitchBase_BP_C");
		return ptr;
	}


	void STATIC_SetState(int StateIndex, bool IgnoreSound, bool InstantAnimation, bool* Unused);
	void STATIC_UpdateCurrentState(bool IgnoreSound, bool InstantAnimation);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_PlayChangedAudio();
	void STATIC_OnSwitchStateChanged_Event_1(class AActor* Initiator, int StateIndex);
	void STATIC_ExecuteUbergraph_SwitchBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
