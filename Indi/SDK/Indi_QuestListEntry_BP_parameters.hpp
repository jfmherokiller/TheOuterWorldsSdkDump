#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestListEntry_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuestListEntry_BP.QuestListEntry_BP_C.SetFocusChanged
struct UQuestListEntry_BP_C_SetFocusChanged_Params
{
	bool                                               IsFocused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature
struct UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature_Params
{
	struct FComponentEvent                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature
struct UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature_Params
{
	struct FComponentEvent                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature
struct UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature_Params
{
	struct FComponentEvent                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature
struct UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature_Params
{
	struct FComponentEvent                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.Tick
struct UQuestListEntry_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.SetQuestCompletionStatus
struct UQuestListEntry_BP_C_SetQuestCompletionStatus_Params
{
	EQuestState*                                       QuestState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.SetActiveQuest
struct UQuestListEntry_BP_C_SetActiveQuest_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestListEntry_BP.QuestListEntry_BP_C.ExecuteUbergraph_QuestListEntry_BP
struct UQuestListEntry_BP_C_ExecuteUbergraph_QuestListEntry_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
