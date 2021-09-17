// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ShipAI_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShipAI_AnimBP.ShipAI_AnimBP_C.UpdateAnimationParams
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UShipAI_AnimBP_C::STATIC_UpdateAnimationParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.UpdateAnimationParams");

	UShipAI_AnimBP_C_UpdateAnimationParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.BlueprintUpdateAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShipAI_AnimBP_C::STATIC_BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.BlueprintUpdateAnimation");

	UShipAI_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_ResetRandomIdle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UShipAI_AnimBP_C::STATIC_AnimNotify_ResetRandomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_ResetRandomIdle");

	UShipAI_AnimBP_C_AnimNotify_ResetRandomIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnNewLocomotionAnimationSet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ULocomotionAnimationSet** NewLocomtionAnimationSet       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShipAI_AnimBP_C::STATIC_OnNewLocomotionAnimationSet(class ULocomotionAnimationSet** NewLocomtionAnimationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnNewLocomotionAnimationSet");

	UShipAI_AnimBP_C_OnNewLocomotionAnimationSet_Params params;
	params.NewLocomtionAnimationSet = NewLocomtionAnimationSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.SetPersonality
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTPVPersonalitySet**     Personality                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShipAI_AnimBP_C::STATIC_SetPersonality(class UTPVPersonalitySet** Personality)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.SetPersonality");

	UShipAI_AnimBP_C_SetPersonality_Params params;
	params.Personality = Personality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnRebuildAnimationSetData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UShipAI_AnimBP_C::STATIC_OnRebuildAnimationSetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnRebuildAnimationSetData");

	UShipAI_AnimBP_C_OnRebuildAnimationSetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_CombatReadyTransition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UShipAI_AnimBP_C::STATIC_AnimNotify_CombatReadyTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_CombatReadyTransition");

	UShipAI_AnimBP_C_AnimNotify_CombatReadyTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_CombatIdleStateTransition
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UShipAI_AnimBP_C::STATIC_AnimNotify_CombatIdleStateTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_CombatIdleStateTransition");

	UShipAI_AnimBP_C_AnimNotify_CombatIdleStateTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnNewWeaponAnimations
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UWeaponAnimations**      NewWeaponAnimations            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShipAI_AnimBP_C::STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.OnNewWeaponAnimations");

	UShipAI_AnimBP_C_OnNewWeaponAnimations_Params params;
	params.NewWeaponAnimations = NewWeaponAnimations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_TriggerLookLeft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UShipAI_AnimBP_C::STATIC_AnimNotify_TriggerLookLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_TriggerLookLeft");

	UShipAI_AnimBP_C_AnimNotify_TriggerLookLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_StopLookLeft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UShipAI_AnimBP_C::STATIC_AnimNotify_StopLookLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.AnimNotify_StopLookLeft");

	UShipAI_AnimBP_C_AnimNotify_StopLookLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShipAI_AnimBP.ShipAI_AnimBP_C.ExecuteUbergraph_ShipAI_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShipAI_AnimBP_C::STATIC_ExecuteUbergraph_ShipAI_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShipAI_AnimBP.ShipAI_AnimBP_C.ExecuteUbergraph_ShipAI_AnimBP");

	UShipAI_AnimBP_C_ExecuteUbergraph_ShipAI_AnimBP_Params params;
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
