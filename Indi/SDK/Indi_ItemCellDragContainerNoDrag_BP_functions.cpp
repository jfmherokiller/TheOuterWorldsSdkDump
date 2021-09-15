// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemCellDragContainerNoDrag_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.StopAnimations
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemCellDragContainerNoDrag_BP_C::STATIC_StopAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.StopAnimations");

	UItemCellDragContainerNoDrag_BP_C_StopAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.SetPendingDropAnimationEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_SetPendingDropAnimationEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.SetPendingDropAnimationEnabled");

	UItemCellDragContainerNoDrag_BP_C_SetPendingDropAnimationEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemCellDragContainerNoDrag_BP_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnPreviewMouseButtonDown");

	UItemCellDragContainerNoDrag_BP_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragEnter");

	UItemCellDragContainerNoDrag_BP_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragLeave");

	UItemCellDragContainerNoDrag_BP_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragCancelled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragCancelled");

	UItemCellDragContainerNoDrag_BP_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupStarted
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UIndianaDragDropOperation** Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_OnDragGroupStarted(class UIndianaDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupStarted");

	UItemCellDragContainerNoDrag_BP_C_OnDragGroupStarted_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragConfirmDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UIndianaDragDropOperation** Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_OnDragConfirmDrop(class UIndianaDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragConfirmDrop");

	UItemCellDragContainerNoDrag_BP_C_OnDragConfirmDrop_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupCancelled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UIndianaDragDropOperation** Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_OnDragGroupCancelled(class UIndianaDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupCancelled");

	UItemCellDragContainerNoDrag_BP_C_OnDragGroupCancelled_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupDrop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UIndianaDragDropOperation** Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_OnDragGroupDrop(class UIndianaDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupDrop");

	UItemCellDragContainerNoDrag_BP_C_OnDragGroupDrop_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.ExecuteUbergraph_ItemCellDragContainerNoDrag_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCellDragContainerNoDrag_BP_C::STATIC_ExecuteUbergraph_ItemCellDragContainerNoDrag_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.ExecuteUbergraph_ItemCellDragContainerNoDrag_BP");

	UItemCellDragContainerNoDrag_BP_C_ExecuteUbergraph_ItemCellDragContainerNoDrag_BP_Params params;
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
