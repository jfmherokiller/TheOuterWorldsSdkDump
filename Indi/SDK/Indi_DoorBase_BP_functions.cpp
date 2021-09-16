// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DoorBase_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DoorBase_BP.DoorBase_BP_C.ToggleOpenCloseState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Lock                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Seal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreLockStatus               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreStartEvent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEndEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsOpening                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsClosing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_ToggleOpenCloseState(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool InstantAnimation, bool* IsOpen, bool* IsOpening, bool* IsClosed, bool* IsClosing)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ToggleOpenCloseState");

	ADoorBase_BP_C_ToggleOpenCloseState_Params params;
	params.Initiator = Initiator;
	params.Force = Force;
	params.Lock = Lock;
	params.Seal = Seal;
	params.IgnoreLockStatus = IgnoreLockStatus;
	params.IgnoreStartEvent = IgnoreStartEvent;
	params.IgnoreEndEvent = IgnoreEndEvent;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
	if (IsOpening != nullptr)
		*IsOpening = params.IsOpening;
	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
	if (IsClosing != nullptr)
		*IsClosing = params.IsClosing;
}


// Function DoorBase_BP.DoorBase_BP_C.IsSealed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsSealed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_IsSealed(bool* IsSealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.IsSealed");

	ADoorBase_BP_C_IsSealed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSealed != nullptr)
		*IsSealed = params.IsSealed;
}


// Function DoorBase_BP.DoorBase_BP_C.IsClosed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_IsClosed(bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.IsClosed");

	ADoorBase_BP_C_IsClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function DoorBase_BP.DoorBase_BP_C.IsBarred
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsBarred                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_IsBarred(bool* IsBarred)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.IsBarred");

	ADoorBase_BP_C_IsBarred_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBarred != nullptr)
		*IsBarred = params.IsBarred;
}


// Function DoorBase_BP.DoorBase_BP_C.SetIsLocked
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLockedOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_SetIsLocked(bool IsLocked, bool* IsLockedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.SetIsLocked");

	ADoorBase_BP_C_SetIsLocked_Params params;
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLockedOut != nullptr)
		*IsLockedOut = params.IsLockedOut;
}


// Function DoorBase_BP.DoorBase_BP_C.IsOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsOpening                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_IsOpen(bool* IsOpen, bool* IsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.IsOpen");

	ADoorBase_BP_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
	if (IsOpening != nullptr)
		*IsOpening = params.IsOpening;
}


// Function DoorBase_BP.DoorBase_BP_C.IsLocked
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_IsLocked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.IsLocked");

	ADoorBase_BP_C_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function DoorBase_BP.DoorBase_BP_C.SetupCAC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_SetupCAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.SetupCAC");

	ADoorBase_BP_C_SetupCAC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.SignalAnimationComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_SignalAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.SignalAnimationComplete");

	ADoorBase_BP_C_SignalAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.Update");

	ADoorBase_BP_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.CheckCAC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Use                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CAC_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         Attach_Point                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADoorBase_BP_C::STATIC_CheckCAC(bool Use, class USceneComponent* Attach_Point, class AActor** CAC_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.CheckCAC");

	ADoorBase_BP_C_CheckCAC_Params params;
	params.Use = Use;
	params.Attach_Point = Attach_Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAC_Actor != nullptr)
		*CAC_Actor = params.CAC_Actor;
}


// Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript");

	ADoorBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayBarredAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayBarredAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayBarredAudio");

	ADoorBase_BP_C_PlayBarredAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayLockpickSucceedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayLockpickSucceedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayLockpickSucceedAudio");

	ADoorBase_BP_C_PlayLockpickSucceedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayLockpickInterruptedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayLockpickInterruptedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayLockpickInterruptedAudio");

	ADoorBase_BP_C_PlayLockpickInterruptedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayLockpickAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayLockpickAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayLockpickAudio");

	ADoorBase_BP_C_PlayLockpickAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.StopLockpickAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_StopLockpickAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.StopLockpickAudio");

	ADoorBase_BP_C_StopLockpickAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLAnimateOpen__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InFrontOfDoor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLAnimateOpen__DelegateSignature(class AActor* Initiator, bool InFrontOfDoor, bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLAnimateOpen__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLAnimateOpen__DelegateSignature_Params params;
	params.Initiator = Initiator;
	params.InFrontOfDoor = InFrontOfDoor;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLAnimateClose__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLAnimateClose__DelegateSignature(class AActor* Initiator, bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLAnimateClose__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLAnimateClose__DelegateSignature_Params params;
	params.Initiator = Initiator;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayOpenAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayOpenAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayOpenAudio");

	ADoorBase_BP_C_PlayOpenAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLLockpickStart__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LockpickSeconds                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  LockpickNumResources           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLLockpickStart__DelegateSignature(class AActor* Initiator, float LockpickSeconds, unsigned char LockpickNumResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLLockpickStart__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLLockpickStart__DelegateSignature_Params params;
	params.Initiator = Initiator;
	params.LockpickSeconds = LockpickSeconds;
	params.LockpickNumResources = LockpickNumResources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLLockpickInterrupted__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLLockpickInterrupted__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLLockpickInterrupted__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLLockpickInterrupted__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLLockpickSuccess__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLLockpickSuccess__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLLockpickSuccess__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLLockpickSuccess__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_8_OCLUnbarred__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_8_OCLUnbarred__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_8_OCLUnbarred__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_8_OCLUnbarred__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ReceiveBeginPlay");

	ADoorBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnAnimateOpenComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_OnAnimateOpenComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnAnimateOpenComplete");

	ADoorBase_BP_C_OnAnimateOpenComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnAnimateCloseComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_OnAnimateCloseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnAnimateCloseComplete");

	ADoorBase_BP_C_OnAnimateCloseComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_7_OCLUnlocked__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_7_OCLUnlocked__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_7_OCLUnlocked__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_7_OCLUnlocked__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnPostConstruction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_OnPostConstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnPostConstruction");

	ADoorBase_BP_C_OnPostConstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_6_OCLLocked__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_6_OCLLocked__DelegateSignature(class AActor* Initiator, bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_6_OCLLocked__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_6_OCLLocked__DelegateSignature_Params params;
	params.Initiator = Initiator;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_5_OCLOpenAttemptedLocked__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_5_OCLOpenAttemptedLocked__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_5_OCLOpenAttemptedLocked__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_5_OCLOpenAttemptedLocked__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayOpeningAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayOpeningAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayOpeningAudio");

	ADoorBase_BP_C_PlayOpeningAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnTravelInitiated_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTravelDestinationData*  TravelDestinationData          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_OnTravelInitiated_Event_1(class UTravelDestinationData* TravelDestinationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnTravelInitiated_Event_1");

	ADoorBase_BP_C_OnTravelInitiated_Event_1_Params params;
	params.TravelDestinationData = TravelDestinationData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayTravelAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayTravelAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayTravelAudio");

	ADoorBase_BP_C_PlayTravelAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLOpenAttemptedLocked__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLOpenAttemptedLocked__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLOpenAttemptedLocked__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLOpenAttemptedLocked__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLBarred__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLBarred__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLBarred__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLBarred__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayClosingAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayClosingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayClosingAudio");

	ADoorBase_BP_C_PlayClosingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayUnbarredAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayUnbarredAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayUnbarredAudio");

	ADoorBase_BP_C_PlayUnbarredAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLCloseEnd__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLCloseEnd__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLCloseEnd__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLCloseEnd__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayAmbientAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayAmbientAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayAmbientAudio");

	ADoorBase_BP_C_PlayAmbientAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLCloseStart__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLCloseStart__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLCloseStart__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLCloseStart__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnSwitchStateChanged_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_OnSwitchStateChanged_Event_1(class AActor* Initiator, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnSwitchStateChanged_Event_1");

	ADoorBase_BP_C_OnSwitchStateChanged_Event_1_Params params;
	params.Initiator = Initiator;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLUnsealed__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLUnsealed__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLUnsealed__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLUnsealed__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayUnsealedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayUnsealedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayUnsealedAudio");

	ADoorBase_BP_C_PlayUnsealedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLSealed__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLSealed__DelegateSignature(class AActor* Initiator, bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLSealed__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLSealed__DelegateSignature_Params params;
	params.Initiator = Initiator;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLOpenEnd__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLOpenEnd__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLOpenEnd__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLOpenEnd__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OpenOCL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Seal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreLockStatus               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreStartEvent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEndEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreAnimation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_OpenOCL(class AActor* Initiator, bool Force, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OpenOCL");

	ADoorBase_BP_C_OpenOCL_Params params;
	params.Initiator = Initiator;
	params.Force = Force;
	params.Seal = Seal;
	params.IgnoreLockStatus = IgnoreLockStatus;
	params.IgnoreStartEvent = IgnoreStartEvent;
	params.IgnoreEndEvent = IgnoreEndEvent;
	params.IgnoreSound = IgnoreSound;
	params.IgnoreAnimation = IgnoreAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.CloseOCL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Lock                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Seal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreStartEvent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEndEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreAnimation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_CloseOCL(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.CloseOCL");

	ADoorBase_BP_C_CloseOCL_Params params;
	params.Initiator = Initiator;
	params.Force = Force;
	params.Lock = Lock;
	params.Seal = Seal;
	params.IgnoreStartEvent = IgnoreStartEvent;
	params.IgnoreEndEvent = IgnoreEndEvent;
	params.IgnoreSound = IgnoreSound;
	params.IgnoreAnimation = IgnoreAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLOpenStart__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLOpenStart__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLOpenStart__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLOpenStart__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnStateChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnStateChanged");

	ADoorBase_BP_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnAnimateClose
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_OnAnimateClose(bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnAnimateClose");

	ADoorBase_BP_C_OnAnimateClose_Params params;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.UpdateLinkedPortalState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_UpdateLinkedPortalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.UpdateLinkedPortalState");

	ADoorBase_BP_C_UpdateLinkedPortalState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayUnlockedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayUnlockedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayUnlockedAudio");

	ADoorBase_BP_C_PlayUnlockedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayLockedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayLockedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayLockedAudio");

	ADoorBase_BP_C_PlayLockedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.PlayClosedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ADoorBase_BP_C::STATIC_PlayClosedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.PlayClosedAudio");

	ADoorBase_BP_C_PlayClosedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.OnAnimateOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_OnAnimateOpen(bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.OnAnimateOpen");

	ADoorBase_BP_C_OnAnimateOpen_Params params;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_10_OCLLockpickLoopStop__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_10_OCLLockpickLoopStop__DelegateSignature(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_10_OCLLockpickLoopStop__DelegateSignature");

	ADoorBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_10_OCLLockpickLoopStop__DelegateSignature_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADoorBase_BP_C::STATIC_ExecuteUbergraph_DoorBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP");

	ADoorBase_BP_C_ExecuteUbergraph_DoorBase_BP_Params params;
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
