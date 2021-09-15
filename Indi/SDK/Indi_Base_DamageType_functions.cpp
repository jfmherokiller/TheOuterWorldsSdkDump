// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_DamageType_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_DamageType.Base_DamageType_C.TriggerMuzzleFx
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USceneComponent**        AttachComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBase_DamageType_C::STATIC_TriggerMuzzleFx(class USceneComponent** AttachComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_DamageType.Base_DamageType_C.TriggerMuzzleFx");

	UBase_DamageType_C_TriggerMuzzleFx_Params params;
	params.AttachComponent = AttachComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_DamageType.Base_DamageType_C.SetupSecondaryImpactFx
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UParticleSystemComponent** ParentEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bGraze                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCritical                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeakSpot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRadial                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_DamageType_C::STATIC_SetupSecondaryImpactFx(class UParticleSystemComponent** ParentEffect, bool* bGraze, bool* bCritical, bool* bWeakSpot, bool* bRadial, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_DamageType.Base_DamageType_C.SetupSecondaryImpactFx");

	UBase_DamageType_C_SetupSecondaryImpactFx_Params params;
	params.ParentEffect = ParentEffect;
	params.bGraze = bGraze;
	params.bCritical = bCritical;
	params.bWeakSpot = bWeakSpot;
	params.bRadial = bRadial;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_DamageType.Base_DamageType_C.SetupImpactFx
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UParticleSystemComponent** ParentEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bGraze                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCritical                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeakSpot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRadial                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_DamageType_C::STATIC_SetupImpactFx(class UParticleSystemComponent** ParentEffect, bool* bGraze, bool* bCritical, bool* bWeakSpot, bool* bRadial, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_DamageType.Base_DamageType_C.SetupImpactFx");

	UBase_DamageType_C_SetupImpactFx_Params params;
	params.ParentEffect = ParentEffect;
	params.bGraze = bGraze;
	params.bCritical = bCritical;
	params.bWeakSpot = bWeakSpot;
	params.bRadial = bRadial;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
