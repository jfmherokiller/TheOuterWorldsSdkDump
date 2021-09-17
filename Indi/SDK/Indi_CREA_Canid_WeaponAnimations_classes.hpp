#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CREA_Canid_WeaponAnimations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CREA_Canid_WeaponAnimations.CREA_Canid_WeaponAnimations_C
// 0x0000 (0x02D0 - 0x02D0)
class UCREA_Canid_WeaponAnimations_C : public UCREA_WeaponAnimations_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CREA_Canid_WeaponAnimations.CREA_Canid_WeaponAnimations_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
