#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeHvy_Shovel_Shared_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeHvy_Shovel_Shared_Visuals.MeleeHvy_Shovel_Shared_Visuals_C
// 0x0000 (0x0200 - 0x0200)
class UMeleeHvy_Shovel_Shared_Visuals_C : public USharedWeaponVisuals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeHvy_Shovel_Shared_Visuals.MeleeHvy_Shovel_Shared_Visuals_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
