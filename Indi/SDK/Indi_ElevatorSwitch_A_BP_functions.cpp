// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ElevatorSwitch_A_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorSwitch_A_BP.ElevatorSwitch_A_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AElevatorSwitch_A_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorSwitch_A_BP.ElevatorSwitch_A_BP_C.UserConstructionScript");

	AElevatorSwitch_A_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorSwitch_A_BP.ElevatorSwitch_A_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AElevatorSwitch_A_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorSwitch_A_BP.ElevatorSwitch_A_BP_C.ReceiveBeginPlay");

	AElevatorSwitch_A_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorSwitch_A_BP.ElevatorSwitch_A_BP_C.ExecuteUbergraph_ElevatorSwitch_A_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AElevatorSwitch_A_BP_C::STATIC_ExecuteUbergraph_ElevatorSwitch_A_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorSwitch_A_BP.ElevatorSwitch_A_BP_C.ExecuteUbergraph_ElevatorSwitch_A_BP");

	AElevatorSwitch_A_BP_C_ExecuteUbergraph_ElevatorSwitch_A_BP_Params params;
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
