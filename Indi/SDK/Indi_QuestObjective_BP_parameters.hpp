#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestObjective_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuestObjective_BP.QuestObjective_BP_C.OnObjectiveStatusChange
struct UQuestObjective_BP_C_OnObjectiveStatusChange_Params
{
	ECompletionStatus*                                 ObjectiveStatus;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestObjective_BP.QuestObjective_BP_C.ExecuteUbergraph_QuestObjective_BP
struct UQuestObjective_BP_C_ExecuteUbergraph_QuestObjective_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
