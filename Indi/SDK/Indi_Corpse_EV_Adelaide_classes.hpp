#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Corpse_EV_Adelaide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Corpse_EV_Adelaide.Corpse_EV_Adelaide_C
// 0x0000 (0x0460 - 0x0460)
class ACorpse_EV_Adelaide_C : public ACorpse_F_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Corpse_EV_Adelaide.Corpse_EV_Adelaide_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
