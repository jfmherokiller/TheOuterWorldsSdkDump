// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestAddendum_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestAddendum_BP.QuestAddendum_BP_C.OnObjectiveStatusChange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// ECompletionStatus*             ObjectiveCompletion            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestAddendum_BP_C::STATIC_OnObjectiveStatusChange(ECompletionStatus* ObjectiveCompletion)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestAddendum_BP.QuestAddendum_BP_C.OnObjectiveStatusChange");

	UQuestAddendum_BP_C_OnObjectiveStatusChange_Params params;
	params.ObjectiveCompletion = ObjectiveCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestAddendum_BP.QuestAddendum_BP_C.ExecuteUbergraph_QuestAddendum_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestAddendum_BP_C::STATIC_ExecuteUbergraph_QuestAddendum_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestAddendum_BP.QuestAddendum_BP_C.ExecuteUbergraph_QuestAddendum_BP");

	UQuestAddendum_BP_C_ExecuteUbergraph_QuestAddendum_BP_Params params;
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
