#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Drink_Rizzo_MockAppleCider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drink_Rizzo_MockAppleCider.Drink_Rizzo_MockAppleCider_C
// 0x0000 (0x0230 - 0x0230)
class UDrink_Rizzo_MockAppleCider_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drink_Rizzo_MockAppleCider.Drink_Rizzo_MockAppleCider_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
