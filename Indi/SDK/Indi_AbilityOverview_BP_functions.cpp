// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AbilityOverview_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AbilityOverview_BP.AbilityOverview_BP_C.OnPlayerCombatStateChange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          IsPlayerInCombat               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRestoring                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilityOverview_BP_C::STATIC_OnPlayerCombatStateChange(bool* IsPlayerInCombat, bool* bRestoring)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityOverview_BP.AbilityOverview_BP_C.OnPlayerCombatStateChange");

	UAbilityOverview_BP_C_OnPlayerCombatStateChange_Params params;
	params.IsPlayerInCombat = IsPlayerInCombat;
	params.bRestoring = bRestoring;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityOverview_BP.AbilityOverview_BP_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilityOverview_BP_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityOverview_BP.AbilityOverview_BP_C.Tick");

	UAbilityOverview_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityOverview_BP.AbilityOverview_BP_C.OnAbilityCooldownFinished
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EAbilityPosition*              AbillityPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilityOverview_BP_C::STATIC_OnAbilityCooldownFinished(EAbilityPosition* AbillityPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityOverview_BP.AbilityOverview_BP_C.OnAbilityCooldownFinished");

	UAbilityOverview_BP_C_OnAbilityCooldownFinished_Params params;
	params.AbillityPosition = AbillityPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityOverview_BP.AbilityOverview_BP_C.ExecuteUbergraph_AbilityOverview_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilityOverview_BP_C::STATIC_ExecuteUbergraph_AbilityOverview_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityOverview_BP.AbilityOverview_BP_C.ExecuteUbergraph_AbilityOverview_BP");

	UAbilityOverview_BP_C_ExecuteUbergraph_AbilityOverview_BP_Params params;
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
