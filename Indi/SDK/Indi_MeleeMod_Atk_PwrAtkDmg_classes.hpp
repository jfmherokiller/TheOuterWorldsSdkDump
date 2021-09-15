#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeMod_Atk_PwrAtkDmg_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeMod_Atk_PwrAtkDmg.MeleeMod_Atk_PwrAtkDmg_C
// 0x0000 (0x01D0 - 0x01D0)
class UMeleeMod_Atk_PwrAtkDmg_C : public UMeleeAttackMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeMod_Atk_PwrAtkDmg.MeleeMod_Atk_PwrAtkDmg_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
