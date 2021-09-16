// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OLD_Container_Sound_Vending_Machine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OLD_Container_Sound_Vending_Machine.OLD_Container_Sound_Vending_Machine_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UOLD_Container_Sound_Vending_Machine_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLD_Container_Sound_Vending_Machine.OLD_Container_Sound_Vending_Machine_C.ReceiveBeginPlay");

	UOLD_Container_Sound_Vending_Machine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLD_Container_Sound_Vending_Machine.OLD_Container_Sound_Vending_Machine_C.ExecuteUbergraph_OLD_Container_Sound_Vending_Machine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOLD_Container_Sound_Vending_Machine_C::STATIC_ExecuteUbergraph_OLD_Container_Sound_Vending_Machine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLD_Container_Sound_Vending_Machine.OLD_Container_Sound_Vending_Machine_C.ExecuteUbergraph_OLD_Container_Sound_Vending_Machine");

	UOLD_Container_Sound_Vending_Machine_C_ExecuteUbergraph_OLD_Container_Sound_Vending_Machine_Params params;
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
