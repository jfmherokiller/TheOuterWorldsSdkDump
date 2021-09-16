#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Joch_BolterPistol_Weapon_T3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Joch_BolterPistol_Weapon_T3.Joch_BolterPistol_Weapon_T3_C
// 0x0000 (0x05A8 - 0x05A8)
class UJoch_BolterPistol_Weapon_T3_C : public UJoch_BolterPistol_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Joch_BolterPistol_Weapon_T3.Joch_BolterPistol_Weapon_T3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
