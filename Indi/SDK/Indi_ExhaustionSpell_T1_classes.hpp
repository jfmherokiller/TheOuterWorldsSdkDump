#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ExhaustionSpell_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExhaustionSpell_T1.ExhaustionSpell_T1_C
// 0x0000 (0x01A0 - 0x01A0)
class UExhaustionSpell_T1_C : public USpell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExhaustionSpell_T1.ExhaustionSpell_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
