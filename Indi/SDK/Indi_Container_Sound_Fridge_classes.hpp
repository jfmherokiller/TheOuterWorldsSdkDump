#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Container_Sound_Fridge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Container_Sound_Fridge.Container_Sound_Fridge_C
// 0x0000 (0x01D8 - 0x01D8)
class UContainer_Sound_Fridge_C : public U__Container_Sound_Generic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Container_Sound_Fridge.Container_Sound_Fridge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
