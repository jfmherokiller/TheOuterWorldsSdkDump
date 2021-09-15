#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerHudEvents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerHudEvents.PlayerHudEvents_C
// 0x0000 (0x0030 - 0x0030)
class UPlayerHudEvents_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerHudEvents.PlayerHudEvents_C");
		return ptr;
	}


	void STATIC_SetObjective(class AActor* Objective, const class FString& ObjectiveName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
