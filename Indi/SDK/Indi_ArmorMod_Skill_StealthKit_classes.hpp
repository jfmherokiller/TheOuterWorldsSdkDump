#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ArmorMod_Skill_StealthKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorMod_Skill_StealthKit.ArmorMod_Skill_StealthKit_C
// 0x0000 (0x0260 - 0x0260)
class UArmorMod_Skill_StealthKit_C : public UArmorModDampening
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorMod_Skill_StealthKit.ArmorMod_Skill_StealthKit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
