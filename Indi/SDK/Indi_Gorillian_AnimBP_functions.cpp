// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gorillian_AnimBP.Gorillian_AnimBP_C.BlueprintUpdateAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGorillian_AnimBP_C::STATIC_BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.BlueprintUpdateAnimation");

	UGorillian_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.CombatTransition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGorillian_AnimBP_C::STATIC_CombatTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.CombatTransition");

	UGorillian_AnimBP_C_CombatTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.NeutralTransition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGorillian_AnimBP_C::STATIC_NeutralTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.NeutralTransition");

	UGorillian_AnimBP_C_NeutralTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.OnRebuildAnimationSetData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGorillian_AnimBP_C::STATIC_OnRebuildAnimationSetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.OnRebuildAnimationSetData");

	UGorillian_AnimBP_C_OnRebuildAnimationSetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_RandomIdle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGorillian_AnimBP_C::STATIC_AnimNotify_RandomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_RandomIdle");

	UGorillian_AnimBP_C_AnimNotify_RandomIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_TurnOffRandomIdle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGorillian_AnimBP_C::STATIC_AnimNotify_TurnOffRandomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_TurnOffRandomIdle");

	UGorillian_AnimBP_C_AnimNotify_TurnOffRandomIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.OnNewWeaponAnimations
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWeaponAnimations**      NewWeaponAnimations            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGorillian_AnimBP_C::STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.OnNewWeaponAnimations");

	UGorillian_AnimBP_C_OnNewWeaponAnimations_Params params;
	params.NewWeaponAnimations = NewWeaponAnimations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_VFX
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGorillian_AnimBP_C::STATIC_AnimNotify_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.AnimNotify_VFX");

	UGorillian_AnimBP_C_AnimNotify_VFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorillian_AnimBP.Gorillian_AnimBP_C.ExecuteUbergraph_Gorillian_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGorillian_AnimBP_C::STATIC_ExecuteUbergraph_Gorillian_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorillian_AnimBP.Gorillian_AnimBP_C.ExecuteUbergraph_Gorillian_AnimBP");

	UGorillian_AnimBP_C_ExecuteUbergraph_Gorillian_AnimBP_Params params;
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
