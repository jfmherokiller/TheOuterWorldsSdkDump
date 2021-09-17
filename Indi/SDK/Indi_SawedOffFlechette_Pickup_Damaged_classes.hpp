#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SawedOffFlechette_Pickup_Damaged_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SawedOffFlechette_Pickup_Damaged.SawedOffFlechette_Pickup_Damaged_C
// 0x0000 (0x0700 - 0x0700)
class ASawedOffFlechette_Pickup_Damaged_C : public APickup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SawedOffFlechette_Pickup_Damaged.SawedOffFlechette_Pickup_Damaged_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
