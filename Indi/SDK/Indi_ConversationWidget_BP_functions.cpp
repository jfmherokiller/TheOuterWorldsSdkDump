// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationWidget_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConversationWidget_BP.ConversationWidget_BP_C.OnIntro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConversationWidget_BP_C::OnIntro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationWidget_BP.ConversationWidget_BP_C.OnIntro");

	UConversationWidget_BP_C_OnIntro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line0_Visibility_1
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UConversationWidget_BP_C::Get_Line0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line0_Visibility_1");

	UConversationWidget_BP_C_Get_Line0_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line1_Visibility_1
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UConversationWidget_BP_C::Get_Line1_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line1_Visibility_1");

	UConversationWidget_BP_C_Get_Line1_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.SetConversationBackingFillRatio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DesiredOverlayHeight           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConversationWidget_BP_C::STATIC_SetConversationBackingFillRatio(float* DesiredOverlayHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationWidget_BP.ConversationWidget_BP_C.SetConversationBackingFillRatio");

	UConversationWidget_BP_C_SetConversationBackingFillRatio_Params params;
	params.DesiredOverlayHeight = DesiredOverlayHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.SetHistoryBackingFillRatio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DesiredHistoryHeight           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConversationWidget_BP_C::STATIC_SetHistoryBackingFillRatio(float* DesiredHistoryHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationWidget_BP.ConversationWidget_BP_C.SetHistoryBackingFillRatio");

	UConversationWidget_BP_C_SetHistoryBackingFillRatio_Params params;
	params.DesiredHistoryHeight = DesiredHistoryHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UConversationWidget_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationWidget_BP.ConversationWidget_BP_C.Construct");

	UConversationWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.ExecuteUbergraph_ConversationWidget_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConversationWidget_BP_C::STATIC_ExecuteUbergraph_ConversationWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationWidget_BP.ConversationWidget_BP_C.ExecuteUbergraph_ConversationWidget_BP");

	UConversationWidget_BP_C_ExecuteUbergraph_ConversationWidget_BP_Params params;
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
