#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_LAR_TPV_WeaponAnimations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_LAR_TPV_WeaponAnimations.SC_LAR_TPV_WeaponAnimations_C
// 0x0000 (0x0498 - 0x0498)
class USC_LAR_TPV_WeaponAnimations_C : public ULngGn_TPV_WeaponAnimations_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_LAR_TPV_WeaponAnimations.SC_LAR_TPV_WeaponAnimations_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
