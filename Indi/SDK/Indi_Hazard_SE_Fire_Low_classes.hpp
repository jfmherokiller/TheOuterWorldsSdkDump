#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_SE_Fire_Low_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hazard_SE_Fire_Low.Hazard_SE_Fire_Low_C
// 0x0000 (0x01C0 - 0x01C0)
class UHazard_SE_Fire_Low_C : public UHazard_SE_Fire_Abstract_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_SE_Fire_Low.Hazard_SE_Fire_Low_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
