#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_TeslaCannon_Weapon_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TL_TeslaCannon_Weapon_T1.TL_TeslaCannon_Weapon_T1_C
// 0x0000 (0x05A8 - 0x05A8)
class UTL_TeslaCannon_Weapon_T1_C : public UTL_TeslaCannon_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TL_TeslaCannon_Weapon_T1.TL_TeslaCannon_Weapon_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
