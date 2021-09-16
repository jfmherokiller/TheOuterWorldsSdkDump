#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AB_PlasmaCutter_Weapon_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AB_PlasmaCutter_Weapon_Base.AB_PlasmaCutter_Weapon_Base_C
// 0x0000 (0x05A8 - 0x05A8)
class UAB_PlasmaCutter_Weapon_Base_C : public UWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AB_PlasmaCutter_Weapon_Base.AB_PlasmaCutter_Weapon_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
