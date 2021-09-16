// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SwitchBase_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SwitchBase_BP.SwitchBase_BP_C.SetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASwitchBase_BP_C::STATIC_SetState(int StateIndex, bool IgnoreSound, bool InstantAnimation, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchBase_BP.SwitchBase_BP_C.SetState");

	ASwitchBase_BP_C_SetState_Params params;
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


// Function SwitchBase_BP.SwitchBase_BP_C.UpdateCurrentState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASwitchBase_BP_C::STATIC_UpdateCurrentState(bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchBase_BP.SwitchBase_BP_C.UpdateCurrentState");

	ASwitchBase_BP_C_UpdateCurrentState_Params params;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchBase_BP.SwitchBase_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASwitchBase_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchBase_BP.SwitchBase_BP_C.UserConstructionScript");

	ASwitchBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchBase_BP.SwitchBase_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASwitchBase_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchBase_BP.SwitchBase_BP_C.ReceiveBeginPlay");

	ASwitchBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchBase_BP.SwitchBase_BP_C.PlayChangedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASwitchBase_BP_C::STATIC_PlayChangedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchBase_BP.SwitchBase_BP_C.PlayChangedAudio");

	ASwitchBase_BP_C_PlayChangedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchBase_BP.SwitchBase_BP_C.OnSwitchStateChanged_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASwitchBase_BP_C::STATIC_OnSwitchStateChanged_Event_1(class AActor* Initiator, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchBase_BP.SwitchBase_BP_C.OnSwitchStateChanged_Event_1");

	ASwitchBase_BP_C_OnSwitchStateChanged_Event_1_Params params;
	params.Initiator = Initiator;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchBase_BP.SwitchBase_BP_C.ExecuteUbergraph_SwitchBase_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASwitchBase_BP_C::STATIC_ExecuteUbergraph_SwitchBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchBase_BP.SwitchBase_BP_C.ExecuteUbergraph_SwitchBase_BP");

	ASwitchBase_BP_C_ExecuteUbergraph_SwitchBase_BP_Params params;
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
