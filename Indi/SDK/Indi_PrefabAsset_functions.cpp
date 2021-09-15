// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PrefabAsset_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrefabAsset.PrefabActor.SetPrefab
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPrefabAsset*            NewPrefab                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceRevertEvenDisconnected   (Parm, ZeroConstructor, IsPlainOldData)

void APrefabActor::STATIC_SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetPrefab");

	APrefabActor_SetPrefab_Params params;
	params.NewPrefab = NewPrefab;
	params.bForceRevertEvenDisconnected = bForceRevertEvenDisconnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.SetMobility
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<EComponentMobility> InMobility                     (Parm, ZeroConstructor, IsPlainOldData)

void APrefabActor::STATIC_SetMobility(TEnumAsByte<EComponentMobility> InMobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetMobility");

	APrefabActor_SetMobility_Params params;
	params.InMobility = InMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.GetPrefab
// ()
// Parameters:
// class UPrefabAsset*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrefabAsset* APrefabActor::GetPrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.GetPrefab");

	APrefabActor_GetPrefab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrefabAsset.PrefabActor.DestroyPrefabActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bDestroyAttachedChildren       (Parm, ZeroConstructor, IsPlainOldData)

void APrefabActor::STATIC_DestroyPrefabActor(bool bDestroyAttachedChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.DestroyPrefabActor");

	APrefabActor_DestroyPrefabActor_Params params;
	params.bDestroyAttachedChildren = bDestroyAttachedChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
