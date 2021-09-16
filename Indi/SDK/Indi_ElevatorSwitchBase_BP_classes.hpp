#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ElevatorSwitchBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C
// 0x0050 (0x0488 - 0x0438)
class AElevatorSwitchBase_BP_C : public ASwitchBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0438(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorSwitchBase_BP.ElevatorSwitchBase_BP_C");
		return ptr;
	}


	void STATIC_SetState(int* StateIndex, bool* IgnoreSound, bool* InstantAnimation, bool* Unused);
	bool CanInteract(class AIndianaCharacter** Initiator, struct FInteractPayload* Payload);
	void STATIC_UserConstructionScript();
	void STATIC_LeverAnimation__FinishedFunc();
	void STATIC_LeverAnimation__UpdateFunc();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnSetState(bool IsOn, bool InstantAnimation);
	void STATIC_ExecuteUbergraph_ElevatorSwitchBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
