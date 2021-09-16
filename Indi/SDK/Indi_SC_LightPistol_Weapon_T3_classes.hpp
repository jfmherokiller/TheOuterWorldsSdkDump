#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_LightPistol_Weapon_T3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_LightPistol_Weapon_T3.SC_LightPistol_Weapon_T3_C
// 0x0000 (0x05B0 - 0x05B0)
class USC_LightPistol_Weapon_T3_C : public USC_LightPistol_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_LightPistol_Weapon_T3.SC_LightPistol_Weapon_T3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
