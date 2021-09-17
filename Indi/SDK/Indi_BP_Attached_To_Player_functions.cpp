// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Attached_To_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Attached_To_Player.BP_Attached_To_Player_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Attached_To_Player_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.UserConstructionScript");

	ABP_Attached_To_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Attached_To_Player_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.ReceiveBeginPlay");

	ABP_Attached_To_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Entrance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Attached_To_Player_C::STATIC_Begin_Overlap_Entrance(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Entrance");

	ABP_Attached_To_Player_C_Begin_Overlap_Entrance_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Exit
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Attached_To_Player_C::STATIC_Begin_Overlap_Exit(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Exit");

	ABP_Attached_To_Player_C_Begin_Overlap_Exit_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Attached_To_Player_C::STATIC_Begin_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Begin_Overlap_Container");

	ABP_Attached_To_Player_C_Begin_Overlap_Container_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.End_Overlap_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Attached_To_Player_C::STATIC_End_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.End_Overlap_Container");

	ABP_Attached_To_Player_C_End_Overlap_Container_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.ReceiveEndPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Attached_To_Player_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.ReceiveEndPlay");

	ABP_Attached_To_Player_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Activate
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Attached_To_Player_C::STATIC_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Activate");

	ABP_Attached_To_Player_C_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Bind
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Attached_To_Player_C::STATIC_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Bind");

	ABP_Attached_To_Player_C_Bind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Entered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Attached_To_Player_C::STATIC_Entered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Entered");

	ABP_Attached_To_Player_C_Entered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Exited
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Attached_To_Player_C::STATIC_Exited()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Exited");

	ABP_Attached_To_Player_C_Exited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.Grab_Triggers_Event
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Attached_To_Player_C::STATIC_Grab_Triggers_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.Grab_Triggers_Event");

	ABP_Attached_To_Player_C_Grab_Triggers_Event_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Attached_To_Player.BP_Attached_To_Player_C.ExecuteUbergraph_BP_Attached_To_Player
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Attached_To_Player_C::STATIC_ExecuteUbergraph_BP_Attached_To_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Attached_To_Player.BP_Attached_To_Player_C.ExecuteUbergraph_BP_Attached_To_Player");

	ABP_Attached_To_Player_C_ExecuteUbergraph_BP_Attached_To_Player_Params params;
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
