// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemContainer_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemContainer_BP.ItemContainer_BP_C.OnOutro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemContainer_BP_C::OnOutro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.OnOutro");

	UItemContainer_BP_C_OnOutro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnIntro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemContainer_BP_C::OnIntro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.OnIntro");

	UItemContainer_BP_C_OnIntro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemContainer_BP.ItemContainer_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemContainer_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.Construct");

	UItemContainer_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnCancelShutdown
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemContainer_BP_C::STATIC_OnCancelShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.OnCancelShutdown");

	UItemContainer_BP_C_OnCancelShutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemContainer_BP.ItemContainer_BP_C.ShowContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemContainer_BP_C::STATIC_ShowContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.ShowContainer");

	UItemContainer_BP_C_ShowContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemContainer_BP.ItemContainer_BP_C.HideContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemContainer_BP_C::STATIC_HideContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.HideContainer");

	UItemContainer_BP_C_HideContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnIntroStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemContainer_BP_C::STATIC_OnIntroStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.OnIntroStart");

	UItemContainer_BP_C_OnIntroStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnOutroEnd
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemContainer_BP_C::STATIC_OnOutroEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.OnOutroEnd");

	UItemContainer_BP_C_OnOutroEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemContainer_BP.ItemContainer_BP_C.ExecuteUbergraph_ItemContainer_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemContainer_BP_C::STATIC_ExecuteUbergraph_ItemContainer_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemContainer_BP.ItemContainer_BP_C.ExecuteUbergraph_ItemContainer_BP");

	UItemContainer_BP_C_ExecuteUbergraph_ItemContainer_BP_Params params;
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
