#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi____WeaponSFX_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ___WeaponSFX_Melee.___WeaponSFX_Melee_C
// 0x0000 (0x0200 - 0x0200)
class U___WeaponSFX_Melee_C : public UWeaponAudio
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ___WeaponSFX_Melee.___WeaponSFX_Melee_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
