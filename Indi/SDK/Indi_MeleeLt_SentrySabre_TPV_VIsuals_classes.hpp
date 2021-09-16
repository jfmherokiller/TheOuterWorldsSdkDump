#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeLt_SentrySabre_TPV_VIsuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeLt_SentrySabre_TPV_VIsuals.MeleeLt_SentrySabre_TPV_VIsuals_C
// 0x0000 (0x0248 - 0x0248)
class UMeleeLt_SentrySabre_TPV_VIsuals_C : public UPrimaryWeaponVisuals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeLt_SentrySabre_TPV_VIsuals.MeleeLt_SentrySabre_TPV_VIsuals_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
