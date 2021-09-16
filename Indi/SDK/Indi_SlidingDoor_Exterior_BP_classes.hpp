#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingDoor_Exterior_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlidingDoor_Exterior_BP.SlidingDoor_Exterior_BP_C
// 0x0000 (0x0654 - 0x0654)
class ASlidingDoor_Exterior_BP_C : public ASlidingDoor_HardLoad_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlidingDoor_Exterior_BP.SlidingDoor_Exterior_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
