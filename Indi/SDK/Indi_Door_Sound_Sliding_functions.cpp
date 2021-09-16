// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Door_Sound_Sliding_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Door_Sound_Sliding.Door_Sound_Sliding_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UDoor_Sound_Sliding_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Sound_Sliding.Door_Sound_Sliding_C.ReceiveBeginPlay");

	UDoor_Sound_Sliding_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Sound_Sliding.Door_Sound_Sliding_C.ExecuteUbergraph_Door_Sound_Sliding
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDoor_Sound_Sliding_C::STATIC_ExecuteUbergraph_Door_Sound_Sliding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Sound_Sliding.Door_Sound_Sliding_C.ExecuteUbergraph_Door_Sound_Sliding");

	UDoor_Sound_Sliding_C_ExecuteUbergraph_Door_Sound_Sliding_Params params;
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
