// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Creature_Canid_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Creature_Canid.Base_Creature_Canid_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABase_Creature_Canid_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.UserConstructionScript");

	ABase_Creature_Canid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Creature_Canid.Base_Creature_Canid_C.Timeline_0__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABase_Creature_Canid_C::STATIC_Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.Timeline_0__FinishedFunc");

	ABase_Creature_Canid_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Creature_Canid.Base_Creature_Canid_C.Timeline_0__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABase_Creature_Canid_C::STATIC_Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.Timeline_0__UpdateFunc");

	ABase_Creature_Canid_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Creature_Canid.Base_Creature_Canid_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABase_Creature_Canid_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.ReceiveBeginPlay");

	ABase_Creature_Canid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Creature_Canid.Base_Creature_Canid_C.CombatStateChange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bIsInCombat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestoring                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Creature_Canid_C::STATIC_CombatStateChange(bool bIsInCombat, bool bRestoring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.CombatStateChange");

	ABase_Creature_Canid_C_CombatStateChange_Params params;
	params.bIsInCombat = bIsInCombat;
	params.bRestoring = bRestoring;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Creature_Canid.Base_Creature_Canid_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_OnAddStatusEffect__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStatusEffectManagerComponent* Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStatusEffect*           StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABase_Creature_Canid_C::STATIC_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_OnAddStatusEffect__DelegateSignature(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_OnAddStatusEffect__DelegateSignature");

	ABase_Creature_Canid_C_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_OnAddStatusEffect__DelegateSignature_Params params;
	params.Sender = Sender;
	params.StatusEffect = StatusEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Creature_Canid.Base_Creature_Canid_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_OnRemoveStatusEffect__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStatusEffectManagerComponent* Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStatusEffect*           StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABase_Creature_Canid_C::STATIC_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_OnRemoveStatusEffect__DelegateSignature(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_OnRemoveStatusEffect__DelegateSignature");

	ABase_Creature_Canid_C_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_OnRemoveStatusEffect__DelegateSignature_Params params;
	params.Sender = Sender;
	params.StatusEffect = StatusEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Creature_Canid.Base_Creature_Canid_C.ExecuteUbergraph_Base_Creature_Canid
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Creature_Canid_C::STATIC_ExecuteUbergraph_Base_Creature_Canid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Creature_Canid.Base_Creature_Canid_C.ExecuteUbergraph_Base_Creature_Canid");

	ABase_Creature_Canid_C_ExecuteUbergraph_Base_Creature_Canid_Params params;
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
