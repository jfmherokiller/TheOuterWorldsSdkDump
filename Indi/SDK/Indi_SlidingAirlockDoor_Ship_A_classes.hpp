#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingAirlockDoor_Ship_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlidingAirlockDoor_Ship_A.SlidingAirlockDoor_Ship_A_C
// 0x0000 (0x064C - 0x064C)
class ASlidingAirlockDoor_Ship_A_C : public ASlidingAirlockDoor_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlidingAirlockDoor_Ship_A.SlidingAirlockDoor_Ship_A_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
