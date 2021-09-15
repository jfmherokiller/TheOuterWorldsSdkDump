#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0701_Intake_Military_HOstile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0701_Intake_Military_HOstile.0701_Intake_Military_Hostile_C
// 0x0000 (0x0238 - 0x0238)
class U0701_Intake_Military_Hostile_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0701_Intake_Military_HOstile.0701_Intake_Military_Hostile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
