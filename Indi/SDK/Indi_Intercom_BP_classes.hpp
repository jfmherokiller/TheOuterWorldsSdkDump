#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Intercom_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Intercom_BP.Intercom_BP_C
// 0x0231 (0x0669 - 0x0438)
class AIntercom_BP_C : public ASwitchBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x231];                                     // 0x0438(0x0231) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Intercom_BP.Intercom_BP_C");
		return ptr;
	}


	struct FConversationDescription GetConversationDescription();
	struct FGuid GetSpeakerGameDataID();
	EInteractionType GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance);
	void STATIC_SetState(int* StateIndex, bool* IgnoreSound, bool* InstantAnimation, bool* Unused);
	void STATIC_UserConstructionScript();
	void STATIC_KnobAnimation__FinishedFunc();
	void STATIC_KnobAnimation__UpdateFunc();
	void STATIC_OnSetState(bool IsOn, bool InstantAnimation);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Intercom_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
