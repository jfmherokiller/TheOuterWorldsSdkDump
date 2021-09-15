#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_Spell_ModEffect_KineticPulse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_Spell_ModEffect_KineticPulse.XFH_Spell_ModEffect_KineticPulse_C
// 0x0000 (0x01A0 - 0x01A0)
class UXFH_Spell_ModEffect_KineticPulse_C : public USpell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_Spell_ModEffect_KineticPulse.XFH_Spell_ModEffect_KineticPulse_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
