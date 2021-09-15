#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_AssaultRifle_Weapon_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TL_AssaultRifle_Weapon_Base.TL_AssaultRifle_Weapon_Base_C
// 0x0000 (0x05A8 - 0x05A8)
class UTL_AssaultRifle_Weapon_Base_C : public UWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TL_AssaultRifle_Weapon_Base.TL_AssaultRifle_Weapon_Base_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
