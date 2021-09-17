#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DecisionPrimalDecisionTree_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DecisionPrimalDecisionTree.DecisionPrimalDecisionTree_C
// 0x0000 (0x0040 - 0x0040)
class UDecisionPrimalDecisionTree_C : public UDecisionTree_PrimalRavager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DecisionPrimalDecisionTree.DecisionPrimalDecisionTree_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
