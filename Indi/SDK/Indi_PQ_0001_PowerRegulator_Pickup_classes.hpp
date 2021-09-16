#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PQ_0001_PowerRegulator_Pickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PQ_0001_PowerRegulator_Pickup.PQ_0001_PowerRegulator_Pickup_C
// 0x0000 (0x0700 - 0x0700)
class APQ_0001_PowerRegulator_Pickup_C : public APickup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PQ_0001_PowerRegulator_Pickup.PQ_0001_PowerRegulator_Pickup_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
