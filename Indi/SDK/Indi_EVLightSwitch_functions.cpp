// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EVLightSwitch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EVLightSwitch.EVLightSwitch_C.Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEVLightSwitch_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.Update");

	AEVLightSwitch_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.UpdateIfSettingsChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEVLightSwitch_C::STATIC_UpdateIfSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.UpdateIfSettingsChanged");

	AEVLightSwitch_C_UpdateIfSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEVLightSwitch_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.UserConstructionScript");

	AEVLightSwitch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.Low Power Mode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEVLightSwitch_C::STATIC_Low_Power_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.Low Power Mode");

	AEVLightSwitch_C_Low_Power_Mode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.High Power Mode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEVLightSwitch_C::STATIC_High_Power_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.High Power Mode");

	AEVLightSwitch_C_High_Power_Mode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVLightSwitch_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.ReceiveTick");

	AEVLightSwitch_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.Normal Mode (Reset)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEVLightSwitch_C::STATIC_Normal_Mode__Reset_()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.Normal Mode (Reset)");

	AEVLightSwitch_C_Normal_Mode__Reset__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AEVLightSwitch_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.ReceiveBeginPlay");

	AEVLightSwitch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVLightSwitch.EVLightSwitch_C.ExecuteUbergraph_EVLightSwitch
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVLightSwitch_C::STATIC_ExecuteUbergraph_EVLightSwitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVLightSwitch.EVLightSwitch_C.ExecuteUbergraph_EVLightSwitch");

	AEVLightSwitch_C_ExecuteUbergraph_EVLightSwitch_Params params;
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
