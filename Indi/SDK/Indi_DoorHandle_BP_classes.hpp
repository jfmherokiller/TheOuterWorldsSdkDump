#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DoorHandle_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DoorHandle_BP.DoorHandle_BP_C
// 0x0028 (0x0460 - 0x0438)
class ADoorHandle_BP_C : public ASwitchBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0438(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DoorHandle_BP.DoorHandle_BP_C");
		return ptr;
	}


	EInteractionType GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance);
	bool CanInteract(class AIndianaCharacter** Initiator, struct FInteractPayload* Payload);
	void STATIC_SetState(int* StateIndex, bool* IgnoreSound, bool* InstantAnimation, bool* Unused);
	void STATIC_UserConstructionScript();
	void STATIC_HandleAnimation__FinishedFunc();
	void STATIC_HandleAnimation__UpdateFunc();
	void STATIC_OnSetState(bool IsOn, bool InstantAnimation);
	void STATIC_ExecuteUbergraph_DoorHandle_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
