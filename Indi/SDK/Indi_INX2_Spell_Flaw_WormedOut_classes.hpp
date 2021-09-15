#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_INX2_Spell_Flaw_WormedOut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INX2_Spell_Flaw_WormedOut.INX2_Spell_Flaw_WormedOut_C
// 0x0000 (0x01A0 - 0x01A0)
class UINX2_Spell_Flaw_WormedOut_C : public USpell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INX2_Spell_Flaw_WormedOut.INX2_Spell_Flaw_WormedOut_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
