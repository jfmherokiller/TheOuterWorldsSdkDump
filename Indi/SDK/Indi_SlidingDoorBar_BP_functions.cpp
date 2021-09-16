// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingDoorBar_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.CanInteract
// ()
// Parameters:
// class AIndianaCharacter**      Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractPayload*       Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASlidingDoorBar_BP_C::CanInteract(class AIndianaCharacter** Initiator, struct FInteractPayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.CanInteract");

	ASlidingDoorBar_BP_C_CanInteract_Params params;
	params.Initiator = Initiator;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.SetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int*                           StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASlidingDoorBar_BP_C::STATIC_SetState(int* StateIndex, bool* IgnoreSound, bool* InstantAnimation, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.SetState");

	ASlidingDoorBar_BP_C_SetState_Params params;
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


// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoorBar_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.UserConstructionScript");

	ASlidingDoorBar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.BarAnimation__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoorBar_BP_C::STATIC_BarAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.BarAnimation__FinishedFunc");

	ASlidingDoorBar_BP_C_BarAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.BarAnimation__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoorBar_BP_C::STATIC_BarAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.BarAnimation__UpdateFunc");

	ASlidingDoorBar_BP_C_BarAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.OnSetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASlidingDoorBar_BP_C::STATIC_OnSetState(bool IsOn, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.OnSetState");

	ASlidingDoorBar_BP_C_OnSetState_Params params;
	params.IsOn = IsOn;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.ExecuteUbergraph_SlidingDoorBar_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASlidingDoorBar_BP_C::STATIC_ExecuteUbergraph_SlidingDoorBar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoorBar_BP.SlidingDoorBar_BP_C.ExecuteUbergraph_SlidingDoorBar_BP");

	ASlidingDoorBar_BP_C_ExecuteUbergraph_SlidingDoorBar_BP_Params params;
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
