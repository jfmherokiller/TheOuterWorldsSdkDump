#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi____WeaponSFX_Ranged_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ___WeaponSFX_Ranged.___WeaponSFX_Ranged_C
// 0x0000 (0x0200 - 0x0200)
class U___WeaponSFX_Ranged_C : public UWeaponAudio
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ___WeaponSFX_Ranged.___WeaponSFX_Ranged_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
