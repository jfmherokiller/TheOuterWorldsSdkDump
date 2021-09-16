#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CREA_WeaponAnimations_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CREA_WeaponAnimations_BP.CREA_WeaponAnimations_BP_C
// 0x0000 (0x02D0 - 0x02D0)
class UCREA_WeaponAnimations_BP_C : public UWeaponAnimationsCreature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CREA_WeaponAnimations_BP.CREA_WeaponAnimations_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
