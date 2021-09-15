// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InventoryItem_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryItem_BP.InventoryItem_BP_C.OnButtonFocusLost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UInventoryItem_BP_C::STATIC_OnButtonFocusLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItem_BP.InventoryItem_BP_C.OnButtonFocusLost");

	UInventoryItem_BP_C_OnButtonFocusLost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItem_BP.InventoryItem_BP_C.OnButtonUnhovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UInventoryItem_BP_C::STATIC_OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItem_BP.InventoryItem_BP_C.OnButtonUnhovered");

	UInventoryItem_BP_C_OnButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItem_BP.InventoryItem_BP_C.OnButtonFocused
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UInventoryItem_BP_C::STATIC_OnButtonFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItem_BP.InventoryItem_BP_C.OnButtonFocused");

	UInventoryItem_BP_C_OnButtonFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItem_BP.InventoryItem_BP_C.OnButtonHovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UInventoryItem_BP_C::STATIC_OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItem_BP.InventoryItem_BP_C.OnButtonHovered");

	UInventoryItem_BP_C_OnButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItem_BP.InventoryItem_BP_C.ExecuteUbergraph_InventoryItem_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItem_BP_C::STATIC_ExecuteUbergraph_InventoryItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItem_BP.InventoryItem_BP_C.ExecuteUbergraph_InventoryItem_BP");

	UInventoryItem_BP_C_ExecuteUbergraph_InventoryItem_BP_Params params;
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
