#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Imp_ClawRake_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Imp_ClawRake_Weapon.Imp_ClawRake_Weapon_C
// 0x0000 (0x05A8 - 0x05A8)
class UImp_ClawRake_Weapon_C : public UWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Imp_ClawRake_Weapon.Imp_ClawRake_Weapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
