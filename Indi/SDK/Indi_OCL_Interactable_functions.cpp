// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OCL_Interactable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OCL_Interactable.OCL_Interactable_C.CloseOCL
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

void UOCL_Interactable_C::STATIC_CloseOCL(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.CloseOCL");

	UOCL_Interactable_C_CloseOCL_Params params;
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


// Function OCL_Interactable.OCL_Interactable_C.OpenOCL
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

void UOCL_Interactable_C::STATIC_OpenOCL(class AActor* Initiator, bool Force, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool IgnoreAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.OpenOCL");

	UOCL_Interactable_C_OpenOCL_Params params;
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


// Function OCL_Interactable.OCL_Interactable_C.ToggleOpenCloseState
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

void UOCL_Interactable_C::STATIC_ToggleOpenCloseState(class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool InstantAnimation, bool* IsOpen, bool* IsOpening, bool* IsClosed, bool* IsClosing)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.ToggleOpenCloseState");

	UOCL_Interactable_C_ToggleOpenCloseState_Params params;
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


// Function OCL_Interactable.OCL_Interactable_C.OnPostConstruction
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UOCL_Interactable_C::STATIC_OnPostConstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.OnPostConstruction");

	UOCL_Interactable_C_OnPostConstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OCL_Interactable.OCL_Interactable_C.OnAnimateCloseComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UOCL_Interactable_C::STATIC_OnAnimateCloseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.OnAnimateCloseComplete");

	UOCL_Interactable_C_OnAnimateCloseComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OCL_Interactable.OCL_Interactable_C.OnAnimateOpenComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UOCL_Interactable_C::STATIC_OnAnimateOpenComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.OnAnimateOpenComplete");

	UOCL_Interactable_C_OnAnimateOpenComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OCL_Interactable.OCL_Interactable_C.OnStateChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UOCL_Interactable_C::STATIC_OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.OnStateChanged");

	UOCL_Interactable_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OCL_Interactable.OCL_Interactable_C.OnAnimateClose
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_OnAnimateClose(bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.OnAnimateClose");

	UOCL_Interactable_C_OnAnimateClose_Params params;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OCL_Interactable.OCL_Interactable_C.OnAnimateOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_OnAnimateOpen(bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.OnAnimateOpen");

	UOCL_Interactable_C_OnAnimateOpen_Params params;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OCL_Interactable.OCL_Interactable_C.IsSealed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsSealed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_IsSealed(bool* IsSealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.IsSealed");

	UOCL_Interactable_C_IsSealed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSealed != nullptr)
		*IsSealed = params.IsSealed;
}


// Function OCL_Interactable.OCL_Interactable_C.IsClosed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_IsClosed(bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.IsClosed");

	UOCL_Interactable_C_IsClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function OCL_Interactable.OCL_Interactable_C.IsBarred
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsBarred                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_IsBarred(bool* IsBarred)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.IsBarred");

	UOCL_Interactable_C_IsBarred_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBarred != nullptr)
		*IsBarred = params.IsBarred;
}


// Function OCL_Interactable.OCL_Interactable_C.SetIsLocked
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLockedOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_SetIsLocked(bool IsLocked, bool* IsLockedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.SetIsLocked");

	UOCL_Interactable_C_SetIsLocked_Params params;
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLockedOut != nullptr)
		*IsLockedOut = params.IsLockedOut;
}


// Function OCL_Interactable.OCL_Interactable_C.IsOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsOpening                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_IsOpen(bool* IsOpen, bool* IsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.IsOpen");

	UOCL_Interactable_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
	if (IsOpening != nullptr)
		*IsOpening = params.IsOpening;
}


// Function OCL_Interactable.OCL_Interactable_C.IsLocked
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOCL_Interactable_C::STATIC_IsLocked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function OCL_Interactable.OCL_Interactable_C.IsLocked");

	UOCL_Interactable_C_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
