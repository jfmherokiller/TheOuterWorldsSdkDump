// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Intercom_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Intercom_BP.Intercom_BP_C.GetConversationDescription
// ()
// Parameters:
// struct FConversationDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConversationDescription AIntercom_BP_C::GetConversationDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.GetConversationDescription");

	AIntercom_BP_C_GetConversationDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Intercom_BP.Intercom_BP_C.GetSpeakerGameDataID
// ()
// Parameters:
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid AIntercom_BP_C::GetSpeakerGameDataID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.GetSpeakerGameDataID");

	AIntercom_BP_C_GetSpeakerGameDataID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Intercom_BP.Intercom_BP_C.GetInteraction
// (BlueprintAuthorityOnly, Net)
// Parameters:
// struct FInteractionDescription* Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractPayload*       Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         InteractDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractionType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractionType AIntercom_BP_C::GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.GetInteraction");

	AIntercom_BP_C_GetInteraction_Params params;
	params.Description = Description;
	params.Payload = Payload;
	params.InteractDistance = InteractDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Intercom_BP.Intercom_BP_C.SetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int*                           StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIntercom_BP_C::STATIC_SetState(int* StateIndex, bool* IgnoreSound, bool* InstantAnimation, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.SetState");

	AIntercom_BP_C_SetState_Params params;
	params.StateIndex = StateIndex;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unused != nullptr)
		*Unused = params.Unused;
}


// Function Intercom_BP.Intercom_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AIntercom_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.UserConstructionScript");

	AIntercom_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Intercom_BP.Intercom_BP_C.KnobAnimation__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AIntercom_BP_C::STATIC_KnobAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.KnobAnimation__FinishedFunc");

	AIntercom_BP_C_KnobAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Intercom_BP.Intercom_BP_C.KnobAnimation__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AIntercom_BP_C::STATIC_KnobAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.KnobAnimation__UpdateFunc");

	AIntercom_BP_C_KnobAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Intercom_BP.Intercom_BP_C.OnSetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIntercom_BP_C::STATIC_OnSetState(bool IsOn, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.OnSetState");

	AIntercom_BP_C_OnSetState_Params params;
	params.IsOn = IsOn;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Intercom_BP.Intercom_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AIntercom_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.ReceiveBeginPlay");

	AIntercom_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Intercom_BP.Intercom_BP_C.ExecuteUbergraph_Intercom_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIntercom_BP_C::STATIC_ExecuteUbergraph_Intercom_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Intercom_BP.Intercom_BP_C.ExecuteUbergraph_Intercom_BP");

	AIntercom_BP_C_ExecuteUbergraph_Intercom_BP_Params params;
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
