// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestObjectiveTitle_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.OnObjectiveStatusChange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// ECompletionStatus*             ObjectiveStatus                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestObjectiveTitle_BP_C::STATIC_OnObjectiveStatusChange(ECompletionStatus* ObjectiveStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.OnObjectiveStatusChange");

	UQuestObjectiveTitle_BP_C_OnObjectiveStatusChange_Params params;
	params.ObjectiveStatus = ObjectiveStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.ExecuteUbergraph_QuestObjectiveTitle_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestObjectiveTitle_BP_C::STATIC_ExecuteUbergraph_QuestObjectiveTitle_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C.ExecuteUbergraph_QuestObjectiveTitle_BP");

	UQuestObjectiveTitle_BP_C_ExecuteUbergraph_QuestObjectiveTitle_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
