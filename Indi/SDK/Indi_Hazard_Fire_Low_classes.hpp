#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Fire_Low_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hazard_Fire_Low.Hazard_Fire_Low_C
// 0x0000 (0x04F8 - 0x04F8)
class AHazard_Fire_Low_C : public AHazard_Abstract_Fire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Fire_Low.Hazard_Fire_Low_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
