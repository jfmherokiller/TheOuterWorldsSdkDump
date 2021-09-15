// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BeaconTag_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeaconTag_BP.BeaconTag_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UBeaconTag_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeaconTag_BP.BeaconTag_BP_C.Construct");

	UBeaconTag_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeaconTag_BP.BeaconTag_BP_C.ExecuteUbergraph_BeaconTag_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBeaconTag_BP_C::STATIC_ExecuteUbergraph_BeaconTag_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeaconTag_BP.BeaconTag_BP_C.ExecuteUbergraph_BeaconTag_BP");

	UBeaconTag_BP_C_ExecuteUbergraph_BeaconTag_BP_Params params;
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
