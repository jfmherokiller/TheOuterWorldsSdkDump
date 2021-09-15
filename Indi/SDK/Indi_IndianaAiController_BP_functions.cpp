// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaAiController_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndianaAiController_BP.IndianaAiController_BP_C.GetFootstepAwarenessIncrease
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// bool*                          bIsStealthed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OwnerPerceptionSkill           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TargetSneakSkill               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAlertState*                   InAlertState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BaseFootstepAwareness          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         SoundRadius                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIndianaAiController_BP_C::GetFootstepAwarenessIncrease(bool* bIsStealthed, int* OwnerPerceptionSkill, int* TargetSneakSkill, EAlertState* InAlertState, float* BaseFootstepAwareness, float* Distance, float* SoundRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaAiController_BP.IndianaAiController_BP_C.GetFootstepAwarenessIncrease");

	AIndianaAiController_BP_C_GetFootstepAwarenessIncrease_Params params;
	params.bIsStealthed = bIsStealthed;
	params.OwnerPerceptionSkill = OwnerPerceptionSkill;
	params.TargetSneakSkill = TargetSneakSkill;
	params.InAlertState = InAlertState;
	params.BaseFootstepAwareness = BaseFootstepAwareness;
	params.Distance = Distance;
	params.SoundRadius = SoundRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessDecreaseRate
// ()
// Parameters:
// bool*                          bIsStealthed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OwnerPerceptionSkill           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TargetSneakSkill               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAlertState*                   InAlertState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLost                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeadBodyKiller                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIndianaAiController_BP_C::GetSightAwarenessDecreaseRate(bool* bIsStealthed, int* OwnerPerceptionSkill, int* TargetSneakSkill, EAlertState* InAlertState, bool* bLost, bool* bDeadBodyKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessDecreaseRate");

	AIndianaAiController_BP_C_GetSightAwarenessDecreaseRate_Params params;
	params.bIsStealthed = bIsStealthed;
	params.OwnerPerceptionSkill = OwnerPerceptionSkill;
	params.TargetSneakSkill = TargetSneakSkill;
	params.InAlertState = InAlertState;
	params.bLost = bLost;
	params.bDeadBodyKiller = bDeadBodyKiller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessIncreaseRate
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// bool*                          bIsStealthed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OwnerPerceptionSkill           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TargetSneakSkill               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAlertState*                   InAlertState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         SightRadius                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIndianaAiController_BP_C::GetSightAwarenessIncreaseRate(bool* bIsStealthed, int* OwnerPerceptionSkill, int* TargetSneakSkill, EAlertState* InAlertState, float* Distance, float* SightRadius, bool* bAllowTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessIncreaseRate");

	AIndianaAiController_BP_C_GetSightAwarenessIncreaseRate_Params params;
	params.bIsStealthed = bIsStealthed;
	params.OwnerPerceptionSkill = OwnerPerceptionSkill;
	params.TargetSneakSkill = TargetSneakSkill;
	params.InAlertState = InAlertState;
	params.Distance = Distance;
	params.SightRadius = SightRadius;
	params.bAllowTargeting = bAllowTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaAiController_BP.IndianaAiController_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AIndianaAiController_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaAiController_BP.IndianaAiController_BP_C.UserConstructionScript");

	AIndianaAiController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
