#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_ArmorMod_Utility_ArmorDegradation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_ArmorMod_Utility_ArmorDegradation.XFH_ArmorMod_Utility_ArmorDegradation_C
// 0x0000 (0x0260 - 0x0260)
class UXFH_ArmorMod_Utility_ArmorDegradation_C : public UArmorModUtility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_ArmorMod_Utility_ArmorDegradation.XFH_ArmorMod_Utility_ArmorDegradation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
