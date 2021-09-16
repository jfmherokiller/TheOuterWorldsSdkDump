// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_OuterWalls_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0002_OuterWalls.0002_OuterWalls_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_OuterWalls_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_OuterWalls.0002_OuterWalls_C.ReceiveBeginPlay");

	A0002_OuterWalls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_OuterWalls.0002_OuterWalls_C.StopSignsOnLowPower
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_OuterWalls_C::STATIC_StopSignsOnLowPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_OuterWalls.0002_OuterWalls_C.StopSignsOnLowPower");

	A0002_OuterWalls_C_StopSignsOnLowPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_OuterWalls.0002_OuterWalls_C.ExecuteUbergraph_0002_OuterWalls
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0002_OuterWalls_C::STATIC_ExecuteUbergraph_0002_OuterWalls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_OuterWalls.0002_OuterWalls_C.ExecuteUbergraph_0002_OuterWalls");

	A0002_OuterWalls_C_ExecuteUbergraph_0002_OuterWalls_Params params;
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
