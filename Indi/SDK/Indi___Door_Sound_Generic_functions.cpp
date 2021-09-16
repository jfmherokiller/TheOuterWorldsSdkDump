// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi___Door_Sound_Generic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function __Door_Sound_Generic.__Door_Sound_Generic_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void U__Door_Sound_Generic_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function __Door_Sound_Generic.__Door_Sound_Generic_C.ReceiveBeginPlay");

	U__Door_Sound_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function __Door_Sound_Generic.__Door_Sound_Generic_C.ExecuteUbergraph___Door_Sound_Generic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U__Door_Sound_Generic_C::STATIC_ExecuteUbergraph___Door_Sound_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function __Door_Sound_Generic.__Door_Sound_Generic_C.ExecuteUbergraph___Door_Sound_Generic");

	U__Door_Sound_Generic_C_ExecuteUbergraph___Door_Sound_Generic_Params params;
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
