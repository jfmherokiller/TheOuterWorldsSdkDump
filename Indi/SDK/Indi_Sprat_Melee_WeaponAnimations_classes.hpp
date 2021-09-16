#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Sprat_Melee_WeaponAnimations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sprat_Melee_WeaponAnimations.Sprat_Melee_WeaponAnimations_C
// 0x0000 (0x02D0 - 0x02D0)
class USprat_Melee_WeaponAnimations_C : public UCREA_Raptidon_WeaponAnimations_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sprat_Melee_WeaponAnimations.Sprat_Melee_WeaponAnimations_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
