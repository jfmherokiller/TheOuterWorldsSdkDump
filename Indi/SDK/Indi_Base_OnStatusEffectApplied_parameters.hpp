#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_OnStatusEffectApplied_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_OnStatusEffectApplied.Base_OnStatusEffectApplied_C.RunDecisionTree
struct UBase_OnStatusEffectApplied_C_RunDecisionTree_Params
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
