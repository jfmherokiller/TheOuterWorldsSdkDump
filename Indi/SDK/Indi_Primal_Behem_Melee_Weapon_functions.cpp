// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Primal_Behem_Melee_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPrimal_Behem_Melee_Weapon_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.UserConstructionScript");

	UPrimal_Behem_Melee_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPrimal_Behem_Melee_Weapon_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveBeginPlay");

	UPrimal_Behem_Melee_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveActorBeginOverlap
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrimal_Behem_Melee_Weapon_C::STATIC_ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveActorBeginOverlap");

	UPrimal_Behem_Melee_Weapon_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrimal_Behem_Melee_Weapon_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveTick");

	UPrimal_Behem_Melee_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ExecuteUbergraph_Primal_Behem_Melee_Weapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrimal_Behem_Melee_Weapon_C::STATIC_ExecuteUbergraph_Primal_Behem_Melee_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ExecuteUbergraph_Primal_Behem_Melee_Weapon");

	UPrimal_Behem_Melee_Weapon_C_ExecuteUbergraph_Primal_Behem_Melee_Weapon_Params params;
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
