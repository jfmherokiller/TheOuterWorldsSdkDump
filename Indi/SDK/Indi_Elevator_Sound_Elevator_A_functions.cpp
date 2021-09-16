// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Elevator_Sound_Elevator_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Elevator_Sound_Elevator_A.Elevator_Sound_Elevator_A_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UElevator_Sound_Elevator_A_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator_Sound_Elevator_A.Elevator_Sound_Elevator_A_C.ReceiveBeginPlay");

	UElevator_Sound_Elevator_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Elevator_Sound_Elevator_A.Elevator_Sound_Elevator_A_C.ExecuteUbergraph_Elevator_Sound_Elevator_A
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UElevator_Sound_Elevator_A_C::STATIC_ExecuteUbergraph_Elevator_Sound_Elevator_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator_Sound_Elevator_A.Elevator_Sound_Elevator_A_C.ExecuteUbergraph_Elevator_Sound_Elevator_A");

	UElevator_Sound_Elevator_A_C_ExecuteUbergraph_Elevator_Sound_Elevator_A_Params params;
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
