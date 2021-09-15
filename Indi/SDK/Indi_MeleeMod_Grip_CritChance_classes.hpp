#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeMod_Grip_CritChance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeMod_Grip_CritChance.MeleeMod_Grip_CritChance_C
// 0x0000 (0x01D0 - 0x01D0)
class UMeleeMod_Grip_CritChance_C : public UMeleeGripMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeMod_Grip_CritChance.MeleeMod_Grip_CritChance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
