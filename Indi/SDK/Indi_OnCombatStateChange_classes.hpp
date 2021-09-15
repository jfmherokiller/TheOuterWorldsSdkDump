#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OnCombatStateChange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OnCombatStateChange.OnCombatStateChange_C
// 0x0000 (0x0048 - 0x0048)
class UOnCombatStateChange_C : public UDecisionTree_DefaultSwitchContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OnCombatStateChange.OnCombatStateChange_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
