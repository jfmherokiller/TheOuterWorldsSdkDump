#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Spell_AptitudeEffect_Elevator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spell_AptitudeEffect_Elevator.Spell_AptitudeEffect_Elevator_C
// 0x0000 (0x01A0 - 0x01A0)
class USpell_AptitudeEffect_Elevator_C : public USpell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spell_AptitudeEffect_Elevator.Spell_AptitudeEffect_Elevator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
