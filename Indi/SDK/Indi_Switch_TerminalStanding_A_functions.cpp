// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Switch_TerminalStanding_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Switch_TerminalStanding_A.Switch_TerminalStanding_A_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void USwitch_TerminalStanding_A_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Switch_TerminalStanding_A.Switch_TerminalStanding_A_C.ReceiveBeginPlay");

	USwitch_TerminalStanding_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Switch_TerminalStanding_A.Switch_TerminalStanding_A_C.ExecuteUbergraph_Switch_TerminalStanding_A
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitch_TerminalStanding_A_C::STATIC_ExecuteUbergraph_Switch_TerminalStanding_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Switch_TerminalStanding_A.Switch_TerminalStanding_A_C.ExecuteUbergraph_Switch_TerminalStanding_A");

	USwitch_TerminalStanding_A_C_ExecuteUbergraph_Switch_TerminalStanding_A_Params params;
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
