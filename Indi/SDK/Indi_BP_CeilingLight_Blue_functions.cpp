// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_CeilingLight_Blue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CeilingLight_Blue.BP_CeilingLight_Blue_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_CeilingLight_Blue_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CeilingLight_Blue.BP_CeilingLight_Blue_C.UserConstructionScript");

	ABP_CeilingLight_Blue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CeilingLight_Blue.BP_CeilingLight_Blue_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_CeilingLight_Blue_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CeilingLight_Blue.BP_CeilingLight_Blue_C.ReceiveBeginPlay");

	ABP_CeilingLight_Blue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CeilingLight_Blue.BP_CeilingLight_Blue_C.ExecuteUbergraph_BP_CeilingLight_Blue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CeilingLight_Blue_C::STATIC_ExecuteUbergraph_BP_CeilingLight_Blue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CeilingLight_Blue.BP_CeilingLight_Blue_C.ExecuteUbergraph_BP_CeilingLight_Blue");

	ABP_CeilingLight_Blue_C_ExecuteUbergraph_BP_CeilingLight_Blue_Params params;
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
