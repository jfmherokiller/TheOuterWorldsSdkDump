// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BarkVolume_Companion_Generic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABarkVolume_Companion_Generic_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.UserConstructionScript");

	ABarkVolume_Companion_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABarkVolume_Companion_Generic_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.ReceiveBeginPlay");

	ABarkVolume_Companion_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.OnActorBeginOverlap_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABarkVolume_Companion_Generic_C::STATIC_OnActorBeginOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.OnActorBeginOverlap_Event_1");

	ABarkVolume_Companion_Generic_C_OnActorBeginOverlap_Event_1_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.ExecuteUbergraph_BarkVolume_Companion_Generic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABarkVolume_Companion_Generic_C::STATIC_ExecuteUbergraph_BarkVolume_Companion_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.ExecuteUbergraph_BarkVolume_Companion_Generic");

	ABarkVolume_Companion_Generic_C_ExecuteUbergraph_BarkVolume_Companion_Generic_Params params;
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
