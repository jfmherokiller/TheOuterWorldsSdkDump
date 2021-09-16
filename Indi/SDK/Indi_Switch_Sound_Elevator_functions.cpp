// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Switch_Sound_Elevator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Switch_Sound_Elevator.Switch_Sound_Elevator_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void USwitch_Sound_Elevator_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Switch_Sound_Elevator.Switch_Sound_Elevator_C.ReceiveBeginPlay");

	USwitch_Sound_Elevator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Switch_Sound_Elevator.Switch_Sound_Elevator_C.ExecuteUbergraph_Switch_Sound_Elevator
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitch_Sound_Elevator_C::STATIC_ExecuteUbergraph_Switch_Sound_Elevator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Switch_Sound_Elevator.Switch_Sound_Elevator_C.ExecuteUbergraph_Switch_Sound_Elevator");

	USwitch_Sound_Elevator_C_ExecuteUbergraph_Switch_Sound_Elevator_Params params;
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
