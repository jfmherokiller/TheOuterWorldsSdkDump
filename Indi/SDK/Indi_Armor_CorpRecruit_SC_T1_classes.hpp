#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Armor_CorpRecruit_SC_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_CorpRecruit_SC_T1.Armor_CorpRecruit_SC_T1_C
// 0x0000 (0x0370 - 0x0370)
class UArmor_CorpRecruit_SC_T1_C : public UArmor_CorpRecruit_T1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_CorpRecruit_SC_T1.Armor_CorpRecruit_SC_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
