// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_LT_TOD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0002_LT_TOD.0002_LT_TOD_C.Rain_Start
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_LT_TOD_C::STATIC_Rain_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_LT_TOD.0002_LT_TOD_C.Rain_Start");

	A0002_LT_TOD_C_Rain_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_LT_TOD.0002_LT_TOD_C.Rain_End
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_LT_TOD_C::STATIC_Rain_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_LT_TOD.0002_LT_TOD_C.Rain_End");

	A0002_LT_TOD_C_Rain_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_LT_TOD.0002_LT_TOD_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_LT_TOD_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_LT_TOD.0002_LT_TOD_C.ReceiveBeginPlay");

	A0002_LT_TOD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_LT_TOD.0002_LT_TOD_C.ExecuteUbergraph_0002_LT_TOD
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0002_LT_TOD_C::STATIC_ExecuteUbergraph_0002_LT_TOD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_LT_TOD.0002_LT_TOD_C.ExecuteUbergraph_0002_LT_TOD");

	A0002_LT_TOD_C_ExecuteUbergraph_0002_LT_TOD_Params params;
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
