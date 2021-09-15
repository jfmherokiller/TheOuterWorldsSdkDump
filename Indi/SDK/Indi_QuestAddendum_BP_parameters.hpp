#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestAddendum_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuestAddendum_BP.QuestAddendum_BP_C.OnObjectiveStatusChange
struct UQuestAddendum_BP_C_OnObjectiveStatusChange_Params
{
	ECompletionStatus*                                 ObjectiveCompletion;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestAddendum_BP.QuestAddendum_BP_C.ExecuteUbergraph_QuestAddendum_BP
struct UQuestAddendum_BP_C_ExecuteUbergraph_QuestAddendum_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
