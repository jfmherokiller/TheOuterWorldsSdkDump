// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerTimeDilationComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerTimeDilationComponent_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveTick");

	UPlayerTimeDilationComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.OnTimeDilationEnd
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPlayerTimeDilationComponent_C::STATIC_OnTimeDilationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.OnTimeDilationEnd");

	UPlayerTimeDilationComponent_C_OnTimeDilationEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_Start
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPlayerTimeDilationComponent_C::STATIC_TTD_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_Start");

	UPlayerTimeDilationComponent_C_TTD_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPlayerTimeDilationComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveBeginPlay");

	UPlayerTimeDilationComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_End
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerTimeDilationComponent_C::STATIC_TTD_End(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_End");

	UPlayerTimeDilationComponent_C_TTD_End_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ExecuteUbergraph_PlayerTimeDilationComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerTimeDilationComponent_C::STATIC_ExecuteUbergraph_PlayerTimeDilationComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ExecuteUbergraph_PlayerTimeDilationComponent");

	UPlayerTimeDilationComponent_C_ExecuteUbergraph_PlayerTimeDilationComponent_Params params;
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
