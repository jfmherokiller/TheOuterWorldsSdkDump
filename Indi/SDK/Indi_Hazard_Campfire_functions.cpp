// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Campfire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hazard_Campfire.Hazard_Campfire_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Campfire_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Campfire.Hazard_Campfire_C.UserConstructionScript");

	AHazard_Campfire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Campfire.Hazard_Campfire_C.OnHazardDisabled_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Campfire_C::STATIC_OnHazardDisabled_Event_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Campfire.Hazard_Campfire_C.OnHazardDisabled_Event_Base");

	AHazard_Campfire_C_OnHazardDisabled_Event_Base_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Campfire.Hazard_Campfire_C.OnHazardEnabled_Event_Base
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Campfire_C::STATIC_OnHazardEnabled_Event_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Campfire.Hazard_Campfire_C.OnHazardEnabled_Event_Base");

	AHazard_Campfire_C_OnHazardEnabled_Event_Base_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Campfire.Hazard_Campfire_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AHazard_Campfire_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Campfire.Hazard_Campfire_C.ReceiveBeginPlay");

	AHazard_Campfire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Campfire.Hazard_Campfire_C.ExecuteUbergraph_Hazard_Campfire
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Campfire_C::STATIC_ExecuteUbergraph_Hazard_Campfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Campfire.Hazard_Campfire_C.ExecuteUbergraph_Hazard_Campfire");

	AHazard_Campfire_C_ExecuteUbergraph_Hazard_Campfire_Params params;
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
