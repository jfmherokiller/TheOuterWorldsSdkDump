#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_TeslaCannon_TPV_WeaponAnimations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TL_TeslaCannon_TPV_WeaponAnimations.TL_TeslaCannon_TPV_WeaponAnimations_C
// 0x0000 (0x0498 - 0x0498)
class UTL_TeslaCannon_TPV_WeaponAnimations_C : public UHvyWpn_TPV_WeaponAnimations_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TL_TeslaCannon_TPV_WeaponAnimations.TL_TeslaCannon_TPV_WeaponAnimations_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
