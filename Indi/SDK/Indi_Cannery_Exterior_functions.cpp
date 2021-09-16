// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Cannery_Exterior_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cannery_Exterior.Cannery_Exterior_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ACannery_Exterior_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannery_Exterior.Cannery_Exterior_C.ReceiveBeginPlay");

	ACannery_Exterior_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cannery_Exterior.Cannery_Exterior_C.StopSignsOnLowPower
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ACannery_Exterior_C::STATIC_StopSignsOnLowPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannery_Exterior.Cannery_Exterior_C.StopSignsOnLowPower");

	ACannery_Exterior_C_StopSignsOnLowPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cannery_Exterior.Cannery_Exterior_C.ExecuteUbergraph_Cannery_Exterior
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACannery_Exterior_C::STATIC_ExecuteUbergraph_Cannery_Exterior(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cannery_Exterior.Cannery_Exterior_C.ExecuteUbergraph_Cannery_Exterior");

	ACannery_Exterior_C_ExecuteUbergraph_Cannery_Exterior_Params params;
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
