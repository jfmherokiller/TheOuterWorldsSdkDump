#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RangedMod_Magazine_ShockDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RangedMod_Magazine_ShockDamage.RangedMod_Magazine_ShockDamage_C
// 0x0000 (0x01D0 - 0x01D0)
class URangedMod_Magazine_ShockDamage_C : public URangedMagazineMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedMod_Magazine_ShockDamage.RangedMod_Magazine_ShockDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif