#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ArmorMod_Armor_NRay_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorMod_Armor_NRay_T2.ArmorMod_Armor_NRay_T2_C
// 0x0000 (0x0260 - 0x0260)
class UArmorMod_Armor_NRay_T2_C : public UArmorModArmoring
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorMod_Armor_NRay_T2.ArmorMod_Armor_NRay_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
