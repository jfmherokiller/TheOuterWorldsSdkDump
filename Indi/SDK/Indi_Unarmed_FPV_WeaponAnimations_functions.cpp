// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Unarmed_FPV_WeaponAnimations_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.TriggerEventBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EWeaponEvent*                  WeaponEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventEffectParams*     Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUnarmed_FPV_WeaponAnimations_C::STATIC_TriggerEventBP(EWeaponEvent* WeaponEvent, struct FEventEffectParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.TriggerEventBP");

	UUnarmed_FPV_WeaponAnimations_C_TriggerEventBP_Params params;
	params.WeaponEvent = WeaponEvent;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.LeaveStateBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EWeaponState*                  WeaponState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnarmed_FPV_WeaponAnimations_C::STATIC_LeaveStateBP(EWeaponState* WeaponState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.LeaveStateBP");

	UUnarmed_FPV_WeaponAnimations_C_LeaveStateBP_Params params;
	params.WeaponState = WeaponState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.EnterStateBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EWeaponState*                  WeaponState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventEffectParams*     Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUnarmed_FPV_WeaponAnimations_C::STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.EnterStateBP");

	UUnarmed_FPV_WeaponAnimations_C_EnterStateBP_Params params;
	params.WeaponState = WeaponState;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.ExecuteUbergraph_Unarmed_FPV_WeaponAnimations
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnarmed_FPV_WeaponAnimations_C::STATIC_ExecuteUbergraph_Unarmed_FPV_WeaponAnimations(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C.ExecuteUbergraph_Unarmed_FPV_WeaponAnimations");

	UUnarmed_FPV_WeaponAnimations_C_ExecuteUbergraph_Unarmed_FPV_WeaponAnimations_Params params;
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
