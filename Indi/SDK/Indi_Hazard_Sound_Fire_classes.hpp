#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Sound_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hazard_Sound_Fire.Hazard_Sound_Fire_C
// 0x0000 (0x01D8 - 0x01D8)
class UHazard_Sound_Fire_C : public UHazardAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Sound_Fire.Hazard_Sound_Fire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
