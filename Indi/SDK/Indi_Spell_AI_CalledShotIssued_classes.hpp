#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Spell_AI_CalledShotIssued_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spell_AI_CalledShotIssued.Spell_AI_CalledShotIssued_C
// 0x0000 (0x01A0 - 0x01A0)
class USpell_AI_CalledShotIssued_C : public USpell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spell_AI_CalledShotIssued.Spell_AI_CalledShotIssued_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
