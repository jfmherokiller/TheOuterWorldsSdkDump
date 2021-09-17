// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_LT_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0001_LT.0001_LT_C.HandleEdgewaterLightingChanges
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_LT_C::STATIC_HandleEdgewaterLightingChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_LT.0001_LT_C.HandleEdgewaterLightingChanges");

	A0001_LT_C_HandleEdgewaterLightingChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_LT.0001_LT_C.HandleBotanicalLabLightingChanges
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_LT_C::STATIC_HandleBotanicalLabLightingChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_LT.0001_LT_C.HandleBotanicalLabLightingChanges");

	A0001_LT_C_HandleBotanicalLabLightingChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_LT.0001_LT_C.WeatherEnable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_LT_C::STATIC_WeatherEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_LT.0001_LT_C.WeatherEnable");

	A0001_LT_C_WeatherEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_LT.0001_LT_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_LT_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_LT.0001_LT_C.ReceiveBeginPlay");

	A0001_LT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_LT.0001_LT_C.WeatherStop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_LT_C::STATIC_WeatherStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_LT.0001_LT_C.WeatherStop");

	A0001_LT_C_WeatherStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_LT.0001_LT_C.ExecuteUbergraph_0001_LT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0001_LT_C::STATIC_ExecuteUbergraph_0001_LT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_LT.0001_LT_C.ExecuteUbergraph_0001_LT");

	A0001_LT_C_ExecuteUbergraph_0001_LT_Params params;
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
