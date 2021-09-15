#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestObjectiveTitle_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.OnObjectiveStatusChange
struct UQuestObjectiveTitle_BP_C_OnObjectiveStatusChange_Params
{
	ECompletionStatus*                                 ObjectiveStatus;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.ExecuteUbergraph_QuestObjectiveTitle_BP
struct UQuestObjectiveTitle_BP_C_ExecuteUbergraph_QuestObjectiveTitle_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
