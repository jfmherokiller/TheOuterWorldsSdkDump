// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatusEffectBarEntry_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.AnimateIn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UStatusEffectBarEntry_BP_C::STATIC_AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.AnimateIn");

	UStatusEffectBarEntry_BP_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ResetWidgetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DesiredRenderOpacity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectBarEntry_BP_C::STATIC_ResetWidgetState(float* DesiredRenderOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ResetWidgetState");

	UStatusEffectBarEntry_BP_C_ResetWidgetState_Params params;
	params.DesiredRenderOpacity = DesiredRenderOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.BndEvt__AnimateContentsIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UStatusEffectBarEntry_BP_C::STATIC_BndEvt__AnimateContentsIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.BndEvt__AnimateContentsIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UStatusEffectBarEntry_BP_C_BndEvt__AnimateContentsIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.BndEvt__AnimateContentsOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UStatusEffectBarEntry_BP_C::STATIC_BndEvt__AnimateContentsOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.BndEvt__AnimateContentsOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UStatusEffectBarEntry_BP_C_BndEvt__AnimateContentsOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.AnimateOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UStatusEffectBarEntry_BP_C::STATIC_AnimateOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.AnimateOut");

	UStatusEffectBarEntry_BP_C_AnimateOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ExecuteUbergraph_StatusEffectBarEntry_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectBarEntry_BP_C::STATIC_ExecuteUbergraph_StatusEffectBarEntry_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ExecuteUbergraph_StatusEffectBarEntry_BP");

	UStatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP_Params params;
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
