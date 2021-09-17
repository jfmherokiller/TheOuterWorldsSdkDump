#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Abstract_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hazard_Abstract_Fire.Hazard_Abstract_Fire_C
// 0x0000 (0x04F8 - 0x04F8)
class AHazard_Abstract_Fire_C : public AHazard_Abstract_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Abstract_Fire.Hazard_Abstract_Fire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
