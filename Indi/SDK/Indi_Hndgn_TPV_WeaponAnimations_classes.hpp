#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hndgn_TPV_WeaponAnimations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hndgn_TPV_WeaponAnimations.Hndgn_TPV_WeaponAnimations_C
// 0x0000 (0x0498 - 0x0498)
class UHndgn_TPV_WeaponAnimations_C : public UWeaponAnimationsTPV_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hndgn_TPV_WeaponAnimations.Hndgn_TPV_WeaponAnimations_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
