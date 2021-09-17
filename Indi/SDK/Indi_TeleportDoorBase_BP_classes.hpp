#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TeleportDoorBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TeleportDoorBase_BP.TeleportDoorBase_BP_C
// 0x0074 (0x0454 - 0x03E0)
class ATeleportDoorBase_BP_C : public AInteractableActorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x03E0(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeleportDoorBase_BP.TeleportDoorBase_BP_C");
		return ptr;
	}


	void STATIC_ResetState();
	void STATIC_OnOpen();
	struct FLocString GetInteractLocString();
	void STATIC_FadeIn(float FadeInTime, const struct FScriptDelegate& FadeInComplete);
	void STATIC_FadeOut(float FadeOutTime, const struct FScriptDelegate& FadeOutComplete);
	void STATIC_TeleportToStart();
	EInteractionType GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnInteract_Event(class AActor* Actor);
	void STATIC_OnFadeOutComplete();
	void STATIC_OnFadeInComplete();
	void STATIC_ExecuteUbergraph_TeleportDoorBase_BP(int EntryPoint);
	void STATIC_On_Sequence_End__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
