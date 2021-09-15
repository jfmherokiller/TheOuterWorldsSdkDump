#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RangedMod_Barrel_RateOfFire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RangedMod_Barrel_RateOfFire.RangedMod_Barrel_RateOfFire_C
// 0x0000 (0x01D0 - 0x01D0)
class URangedMod_Barrel_RateOfFire_C : public URangedBarrelMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedMod_Barrel_RateOfFire.RangedMod_Barrel_RateOfFire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
