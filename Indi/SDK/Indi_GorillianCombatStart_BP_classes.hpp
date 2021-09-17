#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GorillianCombatStart_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GorillianCombatStart_BP.GorillianCombatStart_BP_C
// 0x0000 (0x0050 - 0x0050)
class UGorillianCombatStart_BP_C : public UDecisionTree_GorillianCombatStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GorillianCombatStart_BP.GorillianCombatStart_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
