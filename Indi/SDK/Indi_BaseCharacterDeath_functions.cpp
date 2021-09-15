// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BaseCharacterDeath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCharacterDeath.BaseCharacterDeath_C.UpdatePileDissolve
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          CurrentTime                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DissolveDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDeath_C::STATIC_UpdatePileDissolve(float DissolveDuration, class UMaterialInstanceDynamic* Material, float* CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.UpdatePileDissolve");

	UBaseCharacterDeath_C_UpdatePileDissolve_Params params;
	params.DissolveDuration = DissolveDuration;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentTime != nullptr)
		*CurrentTime = params.CurrentTime;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.UpdateTransitionCompletionDelay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDeath_C::STATIC_UpdateTransitionCompletionDelay(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.UpdateTransitionCompletionDelay");

	UBaseCharacterDeath_C_UpdateTransitionCompletionDelay_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.CreateAshPile
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMesh*             LootablePile                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      LootablePileMaterial           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Ash_MID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDeath_C::STATIC_CreateAshPile(class UStaticMesh* LootablePile, class UMaterialInterface* LootablePileMaterial, class UMaterialInstanceDynamic** Ash_MID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.CreateAshPile");

	UBaseCharacterDeath_C_CreateAshPile_Params params;
	params.LootablePile = LootablePile;
	params.LootablePileMaterial = LootablePileMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ash_MID != nullptr)
		*Ash_MID = params.Ash_MID;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnSpine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDeath_C::STATIC_TriggerParticlesOnSpine(class UParticleSystem* EmitterTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnSpine");

	UBaseCharacterDeath_C_TriggerParticlesOnSpine_Params params;
	params.EmitterTemplate = EmitterTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.CalcBodyTypeImpact
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UBaseCharacterDeath_C::STATIC_CalcBodyTypeImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.CalcBodyTypeImpact");

	UBaseCharacterDeath_C_CalcBodyTypeImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.FindAndPostAudioEvents
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UBaseCharacterDeath_C::STATIC_FindAndPostAudioEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.FindAndPostAudioEvents");

	UBaseCharacterDeath_C_FindAndPostAudioEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnBreakSockets
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           TriggerImpactSpray             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachedSocket                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DetachedSocket                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseCharacterDeath_C::STATIC_TriggerParticlesOnBreakSockets(bool TriggerImpactSpray, const struct FName& AttachedSocket, const struct FName& DetachedSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnBreakSockets");

	UBaseCharacterDeath_C_TriggerParticlesOnBreakSockets_Params params;
	params.TriggerImpactSpray = TriggerImpactSpray;
	params.AttachedSocket = AttachedSocket;
	params.DetachedSocket = DetachedSocket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.ApplyDeathMaterials
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UBaseCharacterDeath_C::STATIC_ApplyDeathMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCharacterDeath.BaseCharacterDeath_C.ApplyDeathMaterials");

	UBaseCharacterDeath_C_ApplyDeathMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
