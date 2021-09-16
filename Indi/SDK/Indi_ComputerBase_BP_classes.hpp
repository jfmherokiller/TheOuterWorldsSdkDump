#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComputerBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ComputerBase_BP.ComputerBase_BP_C
// 0x0040 (0x0540 - 0x0500)
class AComputerBase_BP_C : public AComputerTerminal
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0500(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ComputerBase_BP.ComputerBase_BP_C");
		return ptr;
	}


	bool IsLocked();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnComputerUse_Event_1(class AActor* Initiator);
	void STATIC_OnComputerUnlocked_Event_1(class AActor* Initiator);
	void STATIC_OnComputerUnlockAttemptedLocked_Event_1(class AActor* Initiator);
	void STATIC_OnComputerLocked_Event_1(class AActor* Initiator);
	void STATIC_OnComputerInsufficientSkill_Event_1(class AActor* Initiator);
	void STATIC_OnComputerHackSuccess_Event_1(class AActor* Initiator);
	void STATIC_OnComputerHackStart_Event_1(class AActor* Initiator, unsigned char HackSeconds, unsigned char HackNumResources);
	void STATIC_OnComputerHackInterrupted_Event_1(class AActor* Initiator);
	void STATIC_PlayUseAudio();
	void STATIC_PlayUnlockedAudio();
	void STATIC_PlayUnlockAttemptedLockedAudio();
	void STATIC_PlayLockedAudio();
	void STATIC_PlayInsufficientSkillAudio();
	void STATIC_PlayHackSuccessAudio();
	void STATIC_PlayHackStartAudio();
	void STATIC_PlayHackInterruptedAudio();
	void STATIC_StopHackingAudio();
	void STATIC_OnComputerHackLoopStop_Event_1(class AActor* Initiator);
	void STATIC_ExecuteUbergraph_ComputerBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
