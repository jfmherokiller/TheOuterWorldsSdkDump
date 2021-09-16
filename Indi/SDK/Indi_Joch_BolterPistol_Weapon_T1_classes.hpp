#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Joch_BolterPistol_Weapon_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Joch_BolterPistol_Weapon_T1.Joch_BolterPistol_Weapon_T1_C
// 0x0000 (0x05A8 - 0x05A8)
class UJoch_BolterPistol_Weapon_T1_C : public UJoch_BolterPistol_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Joch_BolterPistol_Weapon_T1.Joch_BolterPistol_Weapon_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
