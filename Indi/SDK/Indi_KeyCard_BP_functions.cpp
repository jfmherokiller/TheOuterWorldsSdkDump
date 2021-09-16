// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_KeyCard_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeyCard_BP.KeyCard_BP_C.Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsEmpty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_Update(bool IsEmpty, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.Update");

	AKeyCard_BP_C_Update_Params params;
	params.IsEmpty = IsEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unused != nullptr)
		*Unused = params.Unused;
}


// Function KeyCard_BP.KeyCard_BP_C.Setup
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UOCLComponent*           OCL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_Setup(class UOCLComponent* OCL, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.Setup");

	AKeyCard_BP_C_Setup_Params params;
	params.OCL = OCL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unused != nullptr)
		*Unused = params.Unused;
}


// Function KeyCard_BP.KeyCard_BP_C.Set_ContainerState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Container_Empty_Value          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_Set_ContainerState(bool Container_Empty_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.Set_ContainerState");

	AKeyCard_BP_C_Set_ContainerState_Params params;
	params.Container_Empty_Value = Container_Empty_Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.CanInteract
// ()
// Parameters:
// class AIndianaCharacter**      Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractPayload*       Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKeyCard_BP_C::CanInteract(class AIndianaCharacter** Initiator, struct FInteractPayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.CanInteract");

	AKeyCard_BP_C_CanInteract_Params params;
	params.Initiator = Initiator;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KeyCard_BP.KeyCard_BP_C.ApplyLights
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsEmpty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_ApplyLights(bool IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.ApplyLights");

	AKeyCard_BP_C_ApplyLights_Params params;
	params.IsEmpty = IsEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AKeyCard_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.UserConstructionScript");

	AKeyCard_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.GearAnimation__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AKeyCard_BP_C::STATIC_GearAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.GearAnimation__FinishedFunc");

	AKeyCard_BP_C_GearAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.GearAnimation__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AKeyCard_BP_C::STATIC_GearAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.GearAnimation__UpdateFunc");

	AKeyCard_BP_C_GearAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.Timeline_0__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AKeyCard_BP_C::STATIC_Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.Timeline_0__FinishedFunc");

	AKeyCard_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.Timeline_0__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AKeyCard_BP_C::STATIC_Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.Timeline_0__UpdateFunc");

	AKeyCard_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.BindEvents
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UOCLComponent*           OCL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AKeyCard_BP_C::STATIC_BindEvents(class UOCLComponent* OCL)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.BindEvents");

	AKeyCard_BP_C_BindEvents_Params params;
	params.OCL = OCL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickStart_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LockpickSeconds                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  LockpickNumResources           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_OnOCLLockpickStart_Event_1(class AActor* Initiator, float LockpickSeconds, unsigned char LockpickNumResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickStart_Event_1");

	AKeyCard_BP_C_OnOCLLockpickStart_Event_1_Params params;
	params.Initiator = Initiator;
	params.LockpickSeconds = LockpickSeconds;
	params.LockpickNumResources = LockpickNumResources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickInterrupted_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_OnOCLLockpickInterrupted_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickInterrupted_Event_1");

	AKeyCard_BP_C_OnOCLLockpickInterrupted_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickSuccess_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_OnOCLLockpickSuccess_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickSuccess_Event_1");

	AKeyCard_BP_C_OnOCLLockpickSuccess_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.OnOCLAnimateOpen_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InFrontOfDoor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_OnOCLAnimateOpen_Event_1(class AActor* Initiator, bool InFrontOfDoor, bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.OnOCLAnimateOpen_Event_1");

	AKeyCard_BP_C_OnOCLAnimateOpen_Event_1_Params params;
	params.Initiator = Initiator;
	params.InFrontOfDoor = InFrontOfDoor;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.OnOCLAnimateClose_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_OnOCLAnimateClose_Event_1(class AActor* Initiator, bool IgnoreSound, bool InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.OnOCLAnimateClose_Event_1");

	AKeyCard_BP_C_OnOCLAnimateClose_Event_1_Params params;
	params.Initiator = Initiator;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AKeyCard_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.ReceiveBeginPlay");

	AKeyCard_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyCard_BP.KeyCard_BP_C.ExecuteUbergraph_KeyCard_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKeyCard_BP_C::STATIC_ExecuteUbergraph_KeyCard_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyCard_BP.KeyCard_BP_C.ExecuteUbergraph_KeyCard_BP");

	AKeyCard_BP_C_ExecuteUbergraph_KeyCard_BP_Params params;
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
