#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_KeyCard_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KeyCard_BP.KeyCard_BP_C
// 0x006D (0x0445 - 0x03D8)
class AKeyCard_BP_C : public AInteractableActor
{
public:
	unsigned char                                      UnknownData00[0x6D];                                      // 0x03D8(0x006D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KeyCard_BP.KeyCard_BP_C");
		return ptr;
	}


	void STATIC_Update(bool IsEmpty, bool* Unused);
	void STATIC_Setup(class UOCLComponent* OCL, bool* Unused);
	void STATIC_Set_ContainerState(bool Container_Empty_Value);
	bool CanInteract(class AIndianaCharacter** Initiator, struct FInteractPayload* Payload);
	void STATIC_ApplyLights(bool IsEmpty);
	void STATIC_UserConstructionScript();
	void STATIC_GearAnimation__FinishedFunc();
	void STATIC_GearAnimation__UpdateFunc();
	void STATIC_Timeline_0__FinishedFunc();
	void STATIC_Timeline_0__UpdateFunc();
	void STATIC_BindEvents(class UOCLComponent* OCL);
	void STATIC_OnOCLLockpickStart_Event_1(class AActor* Initiator, float LockpickSeconds, unsigned char LockpickNumResources);
	void STATIC_OnOCLLockpickInterrupted_Event_1(class AActor* Initiator);
	void STATIC_OnOCLLockpickSuccess_Event_1(class AActor* Initiator);
	void STATIC_OnOCLAnimateOpen_Event_1(class AActor* Initiator, bool InFrontOfDoor, bool IgnoreSound, bool InstantAnimation);
	void STATIC_OnOCLAnimateClose_Event_1(class AActor* Initiator, bool IgnoreSound, bool InstantAnimation);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_KeyCard_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
