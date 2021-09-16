#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Imp_TossballStick_Weapon_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Imp_TossballStick_Weapon_T2.Imp_TossballStick_Weapon_T2_C
// 0x0000 (0x05B0 - 0x05B0)
class UImp_TossballStick_Weapon_T2_C : public UImp_TossballStick_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Imp_TossballStick_Weapon_T2.Imp_TossballStick_Weapon_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
