// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_SplineEmitter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SplineEmitter.BP_SplineEmitter_C.SmoothEmitterJump
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 NewEmitterWorldLocation        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SmoothSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SmoothedEmitterWorldLocation   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SplineEmitter_C::STATIC_SmoothEmitterJump(const struct FVector& NewEmitterWorldLocation, float DeltaTime, float SmoothSpeed, struct FVector* SmoothedEmitterWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineEmitter.BP_SplineEmitter_C.SmoothEmitterJump");

	ABP_SplineEmitter_C_SmoothEmitterJump_Params params;
	params.NewEmitterWorldLocation = NewEmitterWorldLocation;
	params.DeltaTime = DeltaTime;
	params.SmoothSpeed = SmoothSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SmoothedEmitterWorldLocation != nullptr)
		*SmoothedEmitterWorldLocation = params.SmoothedEmitterWorldLocation;
}


// Function BP_SplineEmitter.BP_SplineEmitter_C.GetEmitterLocationDeltaLength
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 NewEmitterWorldLocation        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterWorldLocationDeltaLength (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SplineEmitter_C::STATIC_GetEmitterLocationDeltaLength(const struct FVector& NewEmitterWorldLocation, float* EmitterWorldLocationDeltaLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineEmitter.BP_SplineEmitter_C.GetEmitterLocationDeltaLength");

	ABP_SplineEmitter_C_GetEmitterLocationDeltaLength_Params params;
	params.NewEmitterWorldLocation = NewEmitterWorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmitterWorldLocationDeltaLength != nullptr)
		*EmitterWorldLocationDeltaLength = params.EmitterWorldLocationDeltaLength;
}


// Function BP_SplineEmitter.BP_SplineEmitter_C.GetPlayerWorldLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 PlayerWorldLocation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SplineEmitter_C::STATIC_GetPlayerWorldLocation(struct FVector* PlayerWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineEmitter.BP_SplineEmitter_C.GetPlayerWorldLocation");

	ABP_SplineEmitter_C_GetPlayerWorldLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerWorldLocation != nullptr)
		*PlayerWorldLocation = params.PlayerWorldLocation;
}


// Function BP_SplineEmitter.BP_SplineEmitter_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_SplineEmitter_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineEmitter.BP_SplineEmitter_C.UserConstructionScript");

	ABP_SplineEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineEmitter.BP_SplineEmitter_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineEmitter_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineEmitter.BP_SplineEmitter_C.ReceiveTick");

	ABP_SplineEmitter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineEmitter.BP_SplineEmitter_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_SplineEmitter_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineEmitter.BP_SplineEmitter_C.ReceiveBeginPlay");

	ABP_SplineEmitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineEmitter.BP_SplineEmitter_C.ExecuteUbergraph_BP_SplineEmitter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineEmitter_C::STATIC_ExecuteUbergraph_BP_SplineEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineEmitter.BP_SplineEmitter_C.ExecuteUbergraph_BP_SplineEmitter");

	ABP_SplineEmitter_C_ExecuteUbergraph_BP_SplineEmitter_Params params;
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
