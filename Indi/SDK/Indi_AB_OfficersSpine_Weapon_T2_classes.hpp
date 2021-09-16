#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AB_OfficersSpine_Weapon_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AB_OfficersSpine_Weapon_T2.AB_OfficersSpine_Weapon_T2_C
// 0x0000 (0x05A8 - 0x05A8)
class UAB_OfficersSpine_Weapon_T2_C : public UAB_OfficersSpine_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AB_OfficersSpine_Weapon_T2.AB_OfficersSpine_Weapon_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
