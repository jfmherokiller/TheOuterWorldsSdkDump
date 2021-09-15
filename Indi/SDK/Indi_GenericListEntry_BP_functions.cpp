// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GenericListEntry_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericListEntry_BP.GenericListEntry_BP_C.SetFocusChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGenericListEntry_BP_C::STATIC_SetFocusChanged(bool IsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericListEntry_BP.GenericListEntry_BP_C.SetFocusChanged");

	UGenericListEntry_BP_C_SetFocusChanged_Params params;
	params.IsFocused = IsFocused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGenericListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature");

	UGenericListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGenericListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature");

	UGenericListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGenericListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature");

	UGenericListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGenericListEntry_BP_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericListEntry_BP.GenericListEntry_BP_C.BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature");

	UGenericListEntry_BP_C_BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericListEntry_BP.GenericListEntry_BP_C.ExecuteUbergraph_GenericListEntry_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGenericListEntry_BP_C::STATIC_ExecuteUbergraph_GenericListEntry_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericListEntry_BP.GenericListEntry_BP_C.ExecuteUbergraph_GenericListEntry_BP");

	UGenericListEntry_BP_C_ExecuteUbergraph_GenericListEntry_BP_Params params;
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
