#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Heavy_ArmorPiercing_Ammo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Heavy_ArmorPiercing_Ammo.Heavy_ArmorPiercing_Ammo_C
// 0x0000 (0x01A0 - 0x01A0)
class UHeavy_ArmorPiercing_Ammo_C : public UAmmo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Heavy_ArmorPiercing_Ammo.Heavy_ArmorPiercing_Ammo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
