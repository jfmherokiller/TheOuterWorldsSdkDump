#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_WeaponPreference_IgnoreCooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_WeaponPreference_IgnoreCooldown.META_WeaponPreference_IgnoreCooldown_C
// 0x0000 (0x0068 - 0x0068)
class UMETA_WeaponPreference_IgnoreCooldown_C : public UDecisionTree_WeaponPreference
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_WeaponPreference_IgnoreCooldown.META_WeaponPreference_IgnoreCooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
