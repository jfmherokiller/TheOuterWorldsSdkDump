#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ArmorMod_Skill_ThugKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorMod_Skill_ThugKit.ArmorMod_Skill_ThugKit_C
// 0x0000 (0x0260 - 0x0260)
class UArmorMod_Skill_ThugKit_C : public UArmorModDampening
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorMod_Skill_ThugKit.ArmorMod_Skill_ThugKit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
