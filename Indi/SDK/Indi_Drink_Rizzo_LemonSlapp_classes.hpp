#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Drink_Rizzo_LemonSlapp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drink_Rizzo_LemonSlapp.Drink_Rizzo_LemonSlapp_C
// 0x0000 (0x0230 - 0x0230)
class UDrink_Rizzo_LemonSlapp_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drink_Rizzo_LemonSlapp.Drink_Rizzo_LemonSlapp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
