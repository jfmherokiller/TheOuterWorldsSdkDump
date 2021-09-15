#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ArmorMod_Utility_NoiseReduction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorMod_Utility_NoiseReduction.ArmorMod_Utility_NoiseReduction_C
// 0x0000 (0x0260 - 0x0260)
class UArmorMod_Utility_NoiseReduction_C : public UArmorModUtility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorMod_Utility_NoiseReduction.ArmorMod_Utility_NoiseReduction_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
