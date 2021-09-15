#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponAnimationsFPV_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponAnimationsFPV_BP.WeaponAnimationsFPV_BP_C
// 0x0000 (0x0460 - 0x0460)
class UWeaponAnimationsFPV_BP_C : public UWeaponAnimationsFPV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponAnimationsFPV_BP.WeaponAnimationsFPV_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
