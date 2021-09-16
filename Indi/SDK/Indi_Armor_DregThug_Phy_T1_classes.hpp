#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Armor_DregThug_Phy_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_DregThug_Phy_T1.Armor_DregThug_Phy_T1_C
// 0x0000 (0x0370 - 0x0370)
class UArmor_DregThug_Phy_T1_C : public UArmor_DregThug_T1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_DregThug_Phy_T1.Armor_DregThug_Phy_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
