#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Armor_CorpUnitCommander_CP_T2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_CorpUnitCommander_CP_T2.Armor_CorpUnitCommander_CP_T2_C
// 0x0000 (0x0370 - 0x0370)
class UArmor_CorpUnitCommander_CP_T2_C : public UArmor_CorpUnitCommander_T2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_CorpUnitCommander_CP_T2.Armor_CorpUnitCommander_CP_T2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
