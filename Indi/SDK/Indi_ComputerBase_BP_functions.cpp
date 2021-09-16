// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComputerBase_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ComputerBase_BP.ComputerBase_BP_C.IsLocked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AComputerBase_BP_C::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.IsLocked");

	AComputerBase_BP_C_IsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComputerBase_BP.ComputerBase_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.UserConstructionScript");

	AComputerBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.ReceiveBeginPlay");

	AComputerBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUse_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerUse_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUse_Event_1");

	AComputerBase_BP_C_OnComputerUse_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUnlocked_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerUnlocked_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUnlocked_Event_1");

	AComputerBase_BP_C_OnComputerUnlocked_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUnlockAttemptedLocked_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerUnlockAttemptedLocked_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUnlockAttemptedLocked_Event_1");

	AComputerBase_BP_C_OnComputerUnlockAttemptedLocked_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerLocked_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerLocked_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerLocked_Event_1");

	AComputerBase_BP_C_OnComputerLocked_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerInsufficientSkill_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerInsufficientSkill_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerInsufficientSkill_Event_1");

	AComputerBase_BP_C_OnComputerInsufficientSkill_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackSuccess_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerHackSuccess_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackSuccess_Event_1");

	AComputerBase_BP_C_OnComputerHackSuccess_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackStart_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  HackSeconds                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  HackNumResources               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerHackStart_Event_1(class AActor* Initiator, unsigned char HackSeconds, unsigned char HackNumResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackStart_Event_1");

	AComputerBase_BP_C_OnComputerHackStart_Event_1_Params params;
	params.Initiator = Initiator;
	params.HackSeconds = HackSeconds;
	params.HackNumResources = HackNumResources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackInterrupted_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerHackInterrupted_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackInterrupted_Event_1");

	AComputerBase_BP_C_OnComputerHackInterrupted_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayUseAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayUseAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayUseAudio");

	AComputerBase_BP_C_PlayUseAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayUnlockedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayUnlockedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayUnlockedAudio");

	AComputerBase_BP_C_PlayUnlockedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayUnlockAttemptedLockedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayUnlockAttemptedLockedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayUnlockAttemptedLockedAudio");

	AComputerBase_BP_C_PlayUnlockAttemptedLockedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayLockedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayLockedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayLockedAudio");

	AComputerBase_BP_C_PlayLockedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayInsufficientSkillAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayInsufficientSkillAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayInsufficientSkillAudio");

	AComputerBase_BP_C_PlayInsufficientSkillAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayHackSuccessAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayHackSuccessAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayHackSuccessAudio");

	AComputerBase_BP_C_PlayHackSuccessAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayHackStartAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayHackStartAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayHackStartAudio");

	AComputerBase_BP_C_PlayHackStartAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.PlayHackInterruptedAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_PlayHackInterruptedAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.PlayHackInterruptedAudio");

	AComputerBase_BP_C_PlayHackInterruptedAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.StopHackingAudio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AComputerBase_BP_C::STATIC_StopHackingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.StopHackingAudio");

	AComputerBase_BP_C_StopHackingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackLoopStop_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_OnComputerHackLoopStop_Event_1(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackLoopStop_Event_1");

	AComputerBase_BP_C_OnComputerHackLoopStop_Event_1_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerBase_BP.ComputerBase_BP_C.ExecuteUbergraph_ComputerBase_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AComputerBase_BP_C::STATIC_ExecuteUbergraph_ComputerBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerBase_BP.ComputerBase_BP_C.ExecuteUbergraph_ComputerBase_BP");

	AComputerBase_BP_C_ExecuteUbergraph_ComputerBase_BP_Params params;
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
