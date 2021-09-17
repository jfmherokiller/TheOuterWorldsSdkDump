// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FakePlayerShip_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AFakePlayerShip_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.UserConstructionScript");

	AFakePlayerShip_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakePlayerShip_BP.FakePlayerShip_BP_C.OnShipMeshLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFakePlayerShip_BP_C::STATIC_OnShipMeshLoaded(class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.OnShipMeshLoaded");

	AFakePlayerShip_BP_C_OnShipMeshLoaded_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFakePlayerShip_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.ReceiveTick");

	AFakePlayerShip_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakePlayerShip_BP.FakePlayerShip_BP_C.OnShipDoorLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFakePlayerShip_BP_C::STATIC_OnShipDoorLoaded(class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.OnShipDoorLoaded");

	AFakePlayerShip_BP_C_OnShipDoorLoaded_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AFakePlayerShip_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.ReceiveBeginPlay");

	AFakePlayerShip_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ShipLocationActivated
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AFakePlayerShip_BP_C::STATIC_ShipLocationActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.ShipLocationActivated");

	AFakePlayerShip_BP_C_ShipLocationActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ShipLocationDeactivated
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AFakePlayerShip_BP_C::STATIC_ShipLocationDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.ShipLocationDeactivated");

	AFakePlayerShip_BP_C_ShipLocationDeactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ExecuteUbergraph_FakePlayerShip_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFakePlayerShip_BP_C::STATIC_ExecuteUbergraph_FakePlayerShip_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FakePlayerShip_BP.FakePlayerShip_BP_C.ExecuteUbergraph_FakePlayerShip_BP");

	AFakePlayerShip_BP_C_ExecuteUbergraph_FakePlayerShip_BP_Params params;
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
