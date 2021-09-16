#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OCL_Interactable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OCL_Interactable.OCL_Interactable_C
// 0x0000 (0x0030 - 0x0030)
class UOCL_Interactable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OCL_Interactable.OCL_Interactable_C");
		return ptr;
	}


	void STATIC_CloseOCL(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation);
	void STATIC_OpenOCL(class AActor* Initiator, bool Force, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation);
	void STATIC_ToggleOpenCloseState(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool InstantAnimation, bool* IsOpen, bool* IsOpening, bool* IsClosed, bool* IsClosing);
	void STATIC_OnPostConstruction();
	void STATIC_OnAnimateCloseComplete();
	void STATIC_OnAnimateOpenComplete();
	void STATIC_OnStateChanged();
	void STATIC_OnAnimateClose(bool IgnoreSound, bool InstantAnimation);
	void STATIC_OnAnimateOpen(bool InstantAnimation);
	void STATIC_IsSealed(bool* IsSealed);
	void STATIC_IsClosed(bool* IsClosed);
	void STATIC_IsBarred(bool* IsBarred);
	void STATIC_SetIsLocked(bool IsLocked, bool* IsLockedOut);
	void STATIC_IsOpen(bool* IsOpen, bool* IsOpening);
	void STATIC_IsLocked(bool* IsLocked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
