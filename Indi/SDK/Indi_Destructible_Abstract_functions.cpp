// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Destructible_Abstract_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Destructible_Abstract.Destructible_Abstract_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADestructible_Abstract_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Destructible_Abstract.Destructible_Abstract_C.UserConstructionScript");

	ADestructible_Abstract_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Destructible_Abstract.Destructible_Abstract_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADestructible_Abstract_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Destructible_Abstract.Destructible_Abstract_C.ReceiveBeginPlay");

	ADestructible_Abstract_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Destructible_Abstract.Destructible_Abstract_C.ReceiveDeployOrder
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADestructible_Abstract_C::STATIC_ReceiveDeployOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Destructible_Abstract.Destructible_Abstract_C.ReceiveDeployOrder");

	ADestructible_Abstract_C_ReceiveDeployOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Destructible_Abstract.Destructible_Abstract_C.OnDestructiblePristine_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADestructible_Abstract_C::STATIC_OnDestructiblePristine_Event_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Destructible_Abstract.Destructible_Abstract_C.OnDestructiblePristine_Event_Base");

	ADestructible_Abstract_C_OnDestructiblePristine_Event_Base_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Destructible_Abstract.Destructible_Abstract_C.OnDestructibleDamaged_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADestructible_Abstract_C::STATIC_OnDestructibleDamaged_Event_Base(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Destructible_Abstract.Destructible_Abstract_C.OnDestructibleDamaged_Event_Base");

	ADestructible_Abstract_C_OnDestructibleDamaged_Event_Base_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Destructible_Abstract.Destructible_Abstract_C.OnDestructibleDestroyed_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADestructible_Abstract_C::STATIC_OnDestructibleDestroyed_Event_Base(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Destructible_Abstract.Destructible_Abstract_C.OnDestructibleDestroyed_Event_Base");

	ADestructible_Abstract_C_OnDestructibleDestroyed_Event_Base_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Destructible_Abstract.Destructible_Abstract_C.ExecuteUbergraph_Destructible_Abstract
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADestructible_Abstract_C::STATIC_ExecuteUbergraph_Destructible_Abstract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Destructible_Abstract.Destructible_Abstract_C.ExecuteUbergraph_Destructible_Abstract");

	ADestructible_Abstract_C_ExecuteUbergraph_Destructible_Abstract_Params params;
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
