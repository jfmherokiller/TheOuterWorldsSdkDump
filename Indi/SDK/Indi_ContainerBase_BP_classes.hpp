#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ContainerBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ContainerBase_BP.ContainerBase_BP_C
// 0x0059 (0x0571 - 0x0518)
class AContainerBase_BP_C : public AContainer
{
public:
	unsigned char                                      UnknownData00[0x59];                                      // 0x0518(0x0059) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ContainerBase_BP.ContainerBase_BP_C");
		return ptr;
	}


	void STATIC_ToggleOpenCloseState(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool InstantAnimation, bool* IsOpen, bool* IsOpening, bool* IsClosed, bool* IsClosing);
	void STATIC_IsSealed(bool* IsSealed);
	void STATIC_IsClosed(bool* IsClosed);
	void STATIC_IsBarred(bool* IsBarred);
	void STATIC_SetIsLocked(bool IsLocked, bool* IsLockedOut);
	void STATIC_IsOpen(bool* IsOpen, bool* IsOpening);
	void STATIC_IsLocked(bool* IsLocked);
	void STATIC_SetupCAC();
	void STATIC_SignalAnimationComplete();
	void STATIC_Update();
	void STATIC_CheckCAC(bool Use, class USceneComponent* Attach_Point, class AActor** CAC_Actor);
	void STATIC_UserConstructionScript();
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLOpenAttemptedLocked__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_5_OCLOpenAttemptedLocked__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_6_OCLLocked__DelegateSignature(class AActor* Initiator, bool IgnoreSound, bool InstantAnimation);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_7_OCLUnlocked__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_8_OCLUnbarred__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLCloseEnd__DelegateSignature(class AActor* Initiator);
	void STATIC_PlayOpenAudio();
	void STATIC_PlayClosedAudio();
	void STATIC_PlayLockedAudio();
	void STATIC_PlayUnlockedAudio();
	void STATIC_PlayBarredAudio();
	void STATIC_PlayLockpickSucceedAudio();
	void STATIC_PlayLockpickInterruptedAudio();
	void STATIC_PlayLockpickAudio();
	void STATIC_StopLockpickAudio();
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLAnimateOpen__DelegateSignature(class AActor* Initiator, bool InFrontOfDoor, bool IgnoreSound, bool InstantAnimation);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLAnimateClose__DelegateSignature(class AActor* Initiator, bool IgnoreSound, bool InstantAnimation);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLCloseStart__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLLockpickStart__DelegateSignature(class AActor* Initiator, float LockpickSeconds, unsigned char LockpickNumResources);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLLockpickInterrupted__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLLockpickSuccess__DelegateSignature(class AActor* Initiator);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLOpenEnd__DelegateSignature(class AActor* Initiator);
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnAnimateOpenComplete();
	void STATIC_OnAnimateCloseComplete();
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLOpenStart__DelegateSignature(class AActor* Initiator);
	void STATIC_OnPostConstruction();
	void STATIC_OnStateChanged();
	void STATIC_OnAnimateClose(bool IgnoreSound, bool InstantAnimation);
	void STATIC_PlayOpeningAudio();
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLBarred__DelegateSignature(class AActor* Initiator);
	void STATIC_PlayClosingAudio();
	void STATIC_PlayUnbarredAudio();
	void STATIC_OnAnimateOpen(bool InstantAnimation);
	void STATIC_PlayAmbientAudio();
	void STATIC_OpenOCL(class AActor* Initiator, bool Force, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation);
	void STATIC_CloseOCL(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation);
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_9_OCLLockpickLoopStop__DelegateSignature(class AActor* Initiator);
	void STATIC_StopLockpickLoopAudio();
	void STATIC_ExecuteUbergraph_ContainerBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
