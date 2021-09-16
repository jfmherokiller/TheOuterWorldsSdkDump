#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_SawedOffFlechette_Uni_EV1_Peacekeeper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_SawedOffFlechette_Uni_EV1_Peacekeeper.SC_SawedOffFlechette_Uni_EV1_Peacekeeper_C
// 0x0000 (0x05A8 - 0x05A8)
class USC_SawedOffFlechette_Uni_EV1_Peacekeeper_C : public USC_SawedOffFlechette_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_SawedOffFlechette_Uni_EV1_Peacekeeper.SC_SawedOffFlechette_Uni_EV1_Peacekeeper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
