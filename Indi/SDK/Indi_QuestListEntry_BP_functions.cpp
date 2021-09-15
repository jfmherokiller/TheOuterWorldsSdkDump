// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestListEntry_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestListEntry_BP.QuestListEntry_BP_C.SetFocusChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestListEntry_BP_C::STATIC_SetFocusChanged(bool IsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.SetFocusChanged");

	UQuestListEntry_BP_C_SetFocusChanged_Params params;
	params.IsFocused = IsFocused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature");

	UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature");

	UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature");

	UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature");

	UQuestListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestListEntry_BP_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.Tick");

	UQuestListEntry_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.SetQuestCompletionStatus
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EQuestState*                   QuestState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestListEntry_BP_C::STATIC_SetQuestCompletionStatus(EQuestState* QuestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.SetQuestCompletionStatus");

	UQuestListEntry_BP_C_SetQuestCompletionStatus_Params params;
	params.QuestState = QuestState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.SetActiveQuest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestListEntry_BP_C::STATIC_SetActiveQuest(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.SetActiveQuest");

	UQuestListEntry_BP_C_SetActiveQuest_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestListEntry_BP.QuestListEntry_BP_C.ExecuteUbergraph_QuestListEntry_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestListEntry_BP_C::STATIC_ExecuteUbergraph_QuestListEntry_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestListEntry_BP.QuestListEntry_BP_C.ExecuteUbergraph_QuestListEntry_BP");

	UQuestListEntry_BP_C_ExecuteUbergraph_QuestListEntry_BP_Params params;
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
