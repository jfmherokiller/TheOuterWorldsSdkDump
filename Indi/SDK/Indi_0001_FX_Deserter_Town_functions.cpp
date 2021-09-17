// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_FX_Deserter_Town_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 0001_FX_Deserter_Town.0001_FX_Deserter_Town_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void A0001_FX_Deserter_Town_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_FX_Deserter_Town.0001_FX_Deserter_Town_C.ReceiveBeginPlay");

	A0001_FX_Deserter_Town_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 0001_FX_Deserter_Town.0001_FX_Deserter_Town_C.ExecuteUbergraph_0001_FX_Deserter_Town
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void A0001_FX_Deserter_Town_C::STATIC_ExecuteUbergraph_0001_FX_Deserter_Town(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 0001_FX_Deserter_Town.0001_FX_Deserter_Town_C.ExecuteUbergraph_0001_FX_Deserter_Town");

	A0001_FX_Deserter_Town_C_ExecuteUbergraph_0001_FX_Deserter_Town_Params params;
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
