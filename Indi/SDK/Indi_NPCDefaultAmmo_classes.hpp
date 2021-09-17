#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NPCDefaultAmmo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPCDefaultAmmo.NPCDefaultAmmo_C
// 0x0000 (0x01A0 - 0x01A0)
class UNPCDefaultAmmo_C : public UAmmo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCDefaultAmmo.NPCDefaultAmmo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
