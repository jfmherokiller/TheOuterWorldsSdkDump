#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ham_DeadEyeAR_Weapon_T3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ham_DeadEyeAR_Weapon_T3.Ham_DeadEyeAR_Weapon_T3_C
// 0x0000 (0x05A8 - 0x05A8)
class UHam_DeadEyeAR_Weapon_T3_C : public UHam_DeadEyeAR_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ham_DeadEyeAR_Weapon_T3.Ham_DeadEyeAR_Weapon_T3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
