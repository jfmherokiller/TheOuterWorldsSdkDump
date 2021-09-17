#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Canid_HowlDecisionTree_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Canid_HowlDecisionTree.Canid_HowlDecisionTree_C
// 0x0000 (0x0030 - 0x0030)
class UCanid_HowlDecisionTree_C : public UDecisionTree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Canid_HowlDecisionTree.Canid_HowlDecisionTree_C");
		return ptr;
	}


	TArray<class UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter** Owner, struct FName* EventType, class UAIEventInfo** EventInfo, EDecisionTreeRequestPriority* OutPriority);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
