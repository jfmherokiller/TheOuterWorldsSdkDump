#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Armor_CorpCommander_Cleo_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_CorpCommander_Cleo_T1.Armor_CorpCommander_Cleo_T1_C
// 0x0000 (0x0370 - 0x0370)
class UArmor_CorpCommander_Cleo_T1_C : public UArmor_CorpCommander_T1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_CorpCommander_Cleo_T1.Armor_CorpCommander_Cleo_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif