// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ElevatorBase_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorBase_BP.ElevatorBase_BP_C.IsOnGround
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           OnGround                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AElevatorBase_BP_C::STATIC_IsOnGround(bool* OnGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.IsOnGround");

	AElevatorBase_BP_C_IsOnGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnGround != nullptr)
		*OnGround = params.OnGround;
}


// Function ElevatorBase_BP.ElevatorBase_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AElevatorBase_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.UserConstructionScript");

	AElevatorBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorBase_BP.ElevatorBase_BP_C.PlayStartAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AElevatorBase_BP_C::STATIC_PlayStartAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.PlayStartAudio");

	AElevatorBase_BP_C_PlayStartAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorBase_BP.ElevatorBase_BP_C.PlayStopAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AElevatorBase_BP_C::STATIC_PlayStopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.PlayStopAudio");

	AElevatorBase_BP_C_PlayStopAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorBase_BP.ElevatorBase_BP_C.OnElevatorMoveStart_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            DestinationFloor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromStationary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AElevatorBase_BP_C::STATIC_OnElevatorMoveStart_Event_1(int DestinationFloor, bool FromStationary)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.OnElevatorMoveStart_Event_1");

	AElevatorBase_BP_C_OnElevatorMoveStart_Event_1_Params params;
	params.DestinationFloor = DestinationFloor;
	params.FromStationary = FromStationary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorBase_BP.ElevatorBase_BP_C.OnElevatorMoveEnd_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            DestinationFloor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AElevatorBase_BP_C::STATIC_OnElevatorMoveEnd_Event_1(int DestinationFloor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.OnElevatorMoveEnd_Event_1");

	AElevatorBase_BP_C_OnElevatorMoveEnd_Event_1_Params params;
	params.DestinationFloor = DestinationFloor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorBase_BP.ElevatorBase_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AElevatorBase_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.ReceiveBeginPlay");

	AElevatorBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorBase_BP.ElevatorBase_BP_C.ExecuteUbergraph_ElevatorBase_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AElevatorBase_BP_C::STATIC_ExecuteUbergraph_ElevatorBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorBase_BP.ElevatorBase_BP_C.ExecuteUbergraph_ElevatorBase_BP");

	AElevatorBase_BP_C_ExecuteUbergraph_ElevatorBase_BP_Params params;
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
