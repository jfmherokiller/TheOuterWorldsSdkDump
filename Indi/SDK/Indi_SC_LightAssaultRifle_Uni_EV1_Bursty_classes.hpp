#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_LightAssaultRifle_Uni_EV1_Bursty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_LightAssaultRifle_Uni_EV1_Bursty.SC_LightAssaultRifle_Uni_EV1_Bursty_C
// 0x0000 (0x05A8 - 0x05A8)
class USC_LightAssaultRifle_Uni_EV1_Bursty_C : public USC_LightAssaultRifle_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_LightAssaultRifle_Uni_EV1_Bursty.SC_LightAssaultRifle_Uni_EV1_Bursty_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
