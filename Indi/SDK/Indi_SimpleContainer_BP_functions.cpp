// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SimpleContainer_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SimpleContainer_BP.SimpleContainer_BP_C.ApplyLight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASimpleContainer_BP_C::STATIC_ApplyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.ApplyLight");

	ASimpleContainer_BP_C_ApplyLight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.GetLightingConfig
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   MaterialSlot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASimpleContainer_BP_C::STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.GetLightingConfig");

	ASimpleContainer_BP_C_GetLightingConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (MaterialSlot != nullptr)
		*MaterialSlot = params.MaterialSlot;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASimpleContainer_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.UserConstructionScript");

	ASimpleContainer_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.AnimateLid__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASimpleContainer_BP_C::STATIC_AnimateLid__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.AnimateLid__FinishedFunc");

	ASimpleContainer_BP_C_AnimateLid__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.AnimateLid__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASimpleContainer_BP_C::STATIC_AnimateLid__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.AnimateLid__UpdateFunc");

	ASimpleContainer_BP_C_AnimateLid__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.OnAnimateOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASimpleContainer_BP_C::STATIC_OnAnimateOpen(bool* InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.OnAnimateOpen");

	ASimpleContainer_BP_C_OnAnimateOpen_Params params;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.OnAnimateClose
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASimpleContainer_BP_C::STATIC_OnAnimateClose(bool* IgnoreSound, bool* InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.OnAnimateClose");

	ASimpleContainer_BP_C_OnAnimateClose_Params params;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_ItemStackDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FItemStack              Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASimpleContainer_BP_C::STATIC_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_ItemStackDelegate__DelegateSignature");

	ASimpleContainer_BP_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_ItemStackDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_ItemStackDelegate__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FItemStack              Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASimpleContainer_BP_C::STATIC_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_ItemStackDelegate__DelegateSignature");

	ASimpleContainer_BP_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_ItemStackDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASimpleContainer_BP_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.ReceiveBeginPlay");

	ASimpleContainer_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.OnPlayerOpenedContainer_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASimpleContainer_BP_C::STATIC_OnPlayerOpenedContainer_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.OnPlayerOpenedContainer_Event_1");

	ASimpleContainer_BP_C_OnPlayerOpenedContainer_Event_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.OnStateChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASimpleContainer_BP_C::STATIC_OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.OnStateChanged");

	ASimpleContainer_BP_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleContainer_BP.SimpleContainer_BP_C.ExecuteUbergraph_SimpleContainer_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASimpleContainer_BP_C::STATIC_ExecuteUbergraph_SimpleContainer_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleContainer_BP.SimpleContainer_BP_C.ExecuteUbergraph_SimpleContainer_BP");

	ASimpleContainer_BP_C_ExecuteUbergraph_SimpleContainer_BP_Params params;
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
