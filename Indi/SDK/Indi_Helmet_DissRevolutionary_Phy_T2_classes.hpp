#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Helmet_DissRevolutionary_Phy_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Helmet_DissRevolutionary_Phy_T2.Helmet_DissRevolutionary_Phy_T2_C
// 0x0000 (0x02B0 - 0x02B0)
class UHelmet_DissRevolutionary_Phy_T2_C : public UHelmet_DissRevolutionary_T2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Helmet_DissRevolutionary_Phy_T2.Helmet_DissRevolutionary_Phy_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
