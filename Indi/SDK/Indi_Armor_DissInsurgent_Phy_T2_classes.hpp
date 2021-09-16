#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Armor_DissInsurgent_Phy_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_DissInsurgent_Phy_T2.Armor_DissInsurgent_Phy_T2_C
// 0x0000 (0x0370 - 0x0370)
class UArmor_DissInsurgent_Phy_T2_C : public UArmor_DissInsurgent_T2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_DissInsurgent_Phy_T2.Armor_DissInsurgent_Phy_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
