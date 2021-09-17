#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_SentrySabre_Dreg_Only_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_SentrySabre_Dreg_Only.SC_SentrySabre_Dreg_Only_C
// 0x0000 (0x05A8 - 0x05A8)
class USC_SentrySabre_Dreg_Only_C : public USC_SentrySabre_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_SentrySabre_Dreg_Only.SC_SentrySabre_Dreg_Only_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
