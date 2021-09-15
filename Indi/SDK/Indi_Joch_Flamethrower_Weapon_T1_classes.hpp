#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Joch_Flamethrower_Weapon_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Joch_Flamethrower_Weapon_T1.Joch_Flamethrower_Weapon_T1_C
// 0x0000 (0x05B0 - 0x05B0)
class UJoch_Flamethrower_Weapon_T1_C : public UJoch_Flamethrower_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Joch_Flamethrower_Weapon_T1.Joch_Flamethrower_Weapon_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
