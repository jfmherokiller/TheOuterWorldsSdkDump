#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Spell_WeaponCrit_Knockdown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spell_WeaponCrit_Knockdown.Spell_WeaponCrit_Knockdown_C
// 0x0000 (0x01A0 - 0x01A0)
class USpell_WeaponCrit_Knockdown_C : public USpell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spell_WeaponCrit_Knockdown.Spell_WeaponCrit_Knockdown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
