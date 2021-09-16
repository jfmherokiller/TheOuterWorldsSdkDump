#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Joch_PlasmaRifle_Weapon_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Joch_PlasmaRifle_Weapon_T2.Joch_PlasmaRifle_Weapon_T2_C
// 0x0000 (0x05B0 - 0x05B0)
class UJoch_PlasmaRifle_Weapon_T2_C : public UJoch_PlasmaRifle_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Joch_PlasmaRifle_Weapon_T2.Joch_PlasmaRifle_Weapon_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
