#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Switch_Interactable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Switch_Interactable.Switch_Interactable_C
// 0x0000 (0x0030 - 0x0030)
class USwitch_Interactable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Switch_Interactable.Switch_Interactable_C");
		return ptr;
	}


	void STATIC_SetState(int StateIndex, bool IgnoreSound, bool InstantAnimation, bool* Unused);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
