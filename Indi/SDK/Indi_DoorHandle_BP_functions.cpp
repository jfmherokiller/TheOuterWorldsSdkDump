// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DoorHandle_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DoorHandle_BP.DoorHandle_BP_C.GetInteraction
// (BlueprintAuthorityOnly, Net)
// Parameters:
// struct FInteractionDescription* Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractPayload*       Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         InteractDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractionType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractionType ADoorHandle_BP_C::GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.GetInteraction");

	ADoorHandle_BP_C_GetInteraction_Params params;
	params.Description = Description;
	params.Payload = Payload;
	params.InteractDistance = InteractDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DoorHandle_BP.DoorHandle_BP_C.CanInteract
// ()
// Parameters:
// class AIndianaCharacter**      Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractPayload*       Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADoorHandle_BP_C::CanInteract(class AIndianaCharacter** Initiator, struct FInteractPayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.CanInteract");

	ADoorHandle_BP_C_CanInteract_Params params;
	params.Initiator = Initiator;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DoorHandle_BP.DoorHandle_BP_C.SetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int*                           StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorHandle_BP_C::STATIC_SetState(int* StateIndex, bool* IgnoreSound, bool* InstantAnimation, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.SetState");

	ADoorHandle_BP_C_SetState_Params params;
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


// Function DoorHandle_BP.DoorHandle_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorHandle_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.UserConstructionScript");

	ADoorHandle_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorHandle_BP.DoorHandle_BP_C.HandleAnimation__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorHandle_BP_C::STATIC_HandleAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.HandleAnimation__FinishedFunc");

	ADoorHandle_BP_C_HandleAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorHandle_BP.DoorHandle_BP_C.HandleAnimation__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorHandle_BP_C::STATIC_HandleAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.HandleAnimation__UpdateFunc");

	ADoorHandle_BP_C_HandleAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorHandle_BP.DoorHandle_BP_C.OnSetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorHandle_BP_C::STATIC_OnSetState(bool IsOn, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.OnSetState");

	ADoorHandle_BP_C_OnSetState_Params params;
	params.IsOn = IsOn;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorHandle_BP.DoorHandle_BP_C.ExecuteUbergraph_DoorHandle_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorHandle_BP_C::STATIC_ExecuteUbergraph_DoorHandle_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorHandle_BP.DoorHandle_BP_C.ExecuteUbergraph_DoorHandle_BP");

	ADoorHandle_BP_C_ExecuteUbergraph_DoorHandle_BP_Params params;
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
