// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TeleportDoorBase_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ResetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_ResetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ResetState");

	ATeleportDoorBase_BP_C_ResetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnOpen");

	ATeleportDoorBase_BP_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.GetInteractLocString
// ()
// Parameters:
// struct FLocString              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocString ATeleportDoorBase_BP_C::GetInteractLocString()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.GetInteractLocString");

	ATeleportDoorBase_BP_C_GetInteractLocString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.FadeIn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          FadeInTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         FadeInComplete                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ATeleportDoorBase_BP_C::STATIC_FadeIn(float FadeInTime, const struct FScriptDelegate& FadeInComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.FadeIn");

	ATeleportDoorBase_BP_C_FadeIn_Params params;
	params.FadeInTime = FadeInTime;
	params.FadeInComplete = FadeInComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.FadeOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         FadeOutComplete                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ATeleportDoorBase_BP_C::STATIC_FadeOut(float FadeOutTime, const struct FScriptDelegate& FadeOutComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.FadeOut");

	ATeleportDoorBase_BP_C_FadeOut_Params params;
	params.FadeOutTime = FadeOutTime;
	params.FadeOutComplete = FadeOutComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.TeleportToStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_TeleportToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.TeleportToStart");

	ATeleportDoorBase_BP_C_TeleportToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.GetInteraction
// (BlueprintAuthorityOnly, Net)
// Parameters:
// struct FInteractionDescription* Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractPayload*       Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         InteractDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractionType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractionType ATeleportDoorBase_BP_C::GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.GetInteraction");

	ATeleportDoorBase_BP_C_GetInteraction_Params params;
	params.Description = Description;
	params.Payload = Payload;
	params.InteractDistance = InteractDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.UserConstructionScript");

	ATeleportDoorBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ReceiveBeginPlay");

	ATeleportDoorBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnInteract_Event
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleportDoorBase_BP_C::STATIC_OnInteract_Event(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnInteract_Event");

	ATeleportDoorBase_BP_C_OnInteract_Event_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnFadeOutComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_OnFadeOutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnFadeOutComplete");

	ATeleportDoorBase_BP_C_OnFadeOutComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnFadeInComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_OnFadeInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.OnFadeInComplete");

	ATeleportDoorBase_BP_C_OnFadeInComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ExecuteUbergraph_TeleportDoorBase_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleportDoorBase_BP_C::STATIC_ExecuteUbergraph_TeleportDoorBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.ExecuteUbergraph_TeleportDoorBase_BP");

	ATeleportDoorBase_BP_C_ExecuteUbergraph_TeleportDoorBase_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.On_Sequence_End__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ATeleportDoorBase_BP_C::STATIC_On_Sequence_End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDoorBase_BP.TeleportDoorBase_BP_C.On_Sequence_End__DelegateSignature");

	ATeleportDoorBase_BP_C_On_Sequence_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
