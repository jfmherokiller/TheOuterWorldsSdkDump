#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Drink_HDF_PurpleberryShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drink_HDF_PurpleberryShake.Drink_HDF_PurpleberryShake_C
// 0x0000 (0x0230 - 0x0230)
class UDrink_HDF_PurpleberryShake_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drink_HDF_PurpleberryShake.Drink_HDF_PurpleberryShake_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
