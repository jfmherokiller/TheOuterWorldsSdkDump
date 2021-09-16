// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_EV_Town_P_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0002_EV_Town_P.0002_EV_Town_P_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0002_EV_Town_P_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_EV_Town_P.0002_EV_Town_P_C.ReceiveBeginPlay");

	A0002_EV_Town_P_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0002_EV_Town_P.0002_EV_Town_P_C.ExecuteUbergraph_0002_EV_Town_P
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0002_EV_Town_P_C::STATIC_ExecuteUbergraph_0002_EV_Town_P(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0002_EV_Town_P.0002_EV_Town_P_C.ExecuteUbergraph_0002_EV_Town_P");

	A0002_EV_Town_P_C_ExecuteUbergraph_0002_EV_Town_P_Params params;
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
