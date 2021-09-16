// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_TeslaCannon_Shared_Visuals_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.InitializeBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor**                 NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWeapon**                NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTL_TeslaCannon_Shared_Visuals_C::STATIC_InitializeBP(class AActor** NewTarget, class UWeapon** NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.InitializeBP");

	UTL_TeslaCannon_Shared_Visuals_C_InitializeBP_Params params;
	params.NewTarget = NewTarget;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.TickBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTL_TeslaCannon_Shared_Visuals_C::STATIC_TickBP(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.TickBP");

	UTL_TeslaCannon_Shared_Visuals_C_TickBP_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.TriggerEventBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EWeaponEvent*                  WeaponEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventEffectParams*     Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTL_TeslaCannon_Shared_Visuals_C::STATIC_TriggerEventBP(EWeaponEvent* WeaponEvent, struct FEventEffectParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.TriggerEventBP");

	UTL_TeslaCannon_Shared_Visuals_C_TriggerEventBP_Params params;
	params.WeaponEvent = WeaponEvent;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.LeaveStateBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EWeaponState*                  WeaponState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTL_TeslaCannon_Shared_Visuals_C::STATIC_LeaveStateBP(EWeaponState* WeaponState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.LeaveStateBP");

	UTL_TeslaCannon_Shared_Visuals_C_LeaveStateBP_Params params;
	params.WeaponState = WeaponState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.EnterStateBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EWeaponState*                  WeaponState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventEffectParams*     Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTL_TeslaCannon_Shared_Visuals_C::STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.EnterStateBP");

	UTL_TeslaCannon_Shared_Visuals_C_EnterStateBP_Params params;
	params.WeaponState = WeaponState;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.ExecuteUbergraph_TL_TeslaCannon_Shared_Visuals
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTL_TeslaCannon_Shared_Visuals_C::STATIC_ExecuteUbergraph_TL_TeslaCannon_Shared_Visuals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C.ExecuteUbergraph_TL_TeslaCannon_Shared_Visuals");

	UTL_TeslaCannon_Shared_Visuals_C_ExecuteUbergraph_TL_TeslaCannon_Shared_Visuals_Params params;
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
