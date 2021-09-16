// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Lab_DeskLamp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Lab_DeskLamp.BP_Lab_DeskLamp_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Lab_DeskLamp_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lab_DeskLamp.BP_Lab_DeskLamp_C.UserConstructionScript");

	ABP_Lab_DeskLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lab_DeskLamp.BP_Lab_DeskLamp_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Lab_DeskLamp_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lab_DeskLamp.BP_Lab_DeskLamp_C.ReceiveBeginPlay");

	ABP_Lab_DeskLamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lab_DeskLamp.BP_Lab_DeskLamp_C.ExecuteUbergraph_BP_Lab_DeskLamp
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lab_DeskLamp_C::STATIC_ExecuteUbergraph_BP_Lab_DeskLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lab_DeskLamp.BP_Lab_DeskLamp_C.ExecuteUbergraph_BP_Lab_DeskLamp");

	ABP_Lab_DeskLamp_C_ExecuteUbergraph_BP_Lab_DeskLamp_Params params;
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
