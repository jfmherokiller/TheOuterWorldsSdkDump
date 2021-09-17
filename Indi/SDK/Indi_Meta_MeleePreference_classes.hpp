#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Meta_MeleePreference_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Meta_MeleePreference.Meta_MeleePreference_C
// 0x0000 (0x0068 - 0x0068)
class UMeta_MeleePreference_C : public UMETA_WeaponPreference_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Meta_MeleePreference.Meta_MeleePreference_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
