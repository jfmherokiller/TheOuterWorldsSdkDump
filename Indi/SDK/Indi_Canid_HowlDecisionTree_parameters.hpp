#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Canid_HowlDecisionTree_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Canid_HowlDecisionTree.Canid_HowlDecisionTree_C.RunDecisionTree
struct UCanid_HowlDecisionTree_C_RunDecisionTree_Params
{
	class AIndianaAiCharacter**                        Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAIEventInfo**                               EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDecisionTreeRequestPriority                       OutPriority;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UDecisionTreeRequestData*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
