// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_FX_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0002_FX.0002_FX_C.Fog__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_FX_C::STATIC_Fog__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_FX.0002_FX_C.Fog__FinishedFunc");

	A0002_FX_C_Fog__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_FX.0002_FX_C.Fog__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_FX_C::STATIC_Fog__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_FX.0002_FX_C.Fog__UpdateFunc");

	A0002_FX_C_Fog__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_FX.0002_FX_C.Fog_Check_Start
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EPhaseOfDay                    NewPhase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0002_FX_C::STATIC_Fog_Check_Start(EPhaseOfDay NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_FX.0002_FX_C.Fog_Check_Start");

	A0002_FX_C_Fog_Check_Start_Params params;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_FX.0002_FX_C.Fog_Check
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_FX_C::STATIC_Fog_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_FX.0002_FX_C.Fog_Check");

	A0002_FX_C_Fog_Check_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_FX.0002_FX_C.Fog_Check_Reverse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_FX_C::STATIC_Fog_Check_Reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_FX.0002_FX_C.Fog_Check_Reverse");

	A0002_FX_C_Fog_Check_Reverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_FX.0002_FX_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_FX_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_FX.0002_FX_C.ReceiveBeginPlay");

	A0002_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_FX.0002_FX_C.ExecuteUbergraph_0002_FX
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0002_FX_C::STATIC_ExecuteUbergraph_0002_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_FX.0002_FX_C.ExecuteUbergraph_0002_FX");

	A0002_FX_C_ExecuteUbergraph_0002_FX_Params params;
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
