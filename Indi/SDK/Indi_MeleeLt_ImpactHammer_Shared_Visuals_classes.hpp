#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeLt_ImpactHammer_Shared_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeLt_ImpactHammer_Shared_Visuals.MeleeLt_ImpactHammer_Shared_Visuals_C
// 0x0000 (0x0200 - 0x0200)
class UMeleeLt_ImpactHammer_Shared_Visuals_C : public USharedWeaponVisuals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeLt_ImpactHammer_Shared_Visuals.MeleeLt_ImpactHammer_Shared_Visuals_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
