#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Canid_Melee_TPV_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Canid_Melee_TPV_Visuals.Canid_Melee_TPV_Visuals_C
// 0x0000 (0x0248 - 0x0248)
class UCanid_Melee_TPV_Visuals_C : public UPrimaryWeaponVisuals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Canid_Melee_TPV_Visuals.Canid_Melee_TPV_Visuals_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
