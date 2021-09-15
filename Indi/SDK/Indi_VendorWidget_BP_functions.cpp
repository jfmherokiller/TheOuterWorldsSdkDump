// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VendorWidget_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VendorWidget_BP.VendorWidget_BP_C.FadeInFactionImage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UVendorWidget_BP_C::STATIC_FadeInFactionImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorWidget_BP.VendorWidget_BP_C.FadeInFactionImage");

	UVendorWidget_BP_C_FadeInFactionImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendorWidget_BP.VendorWidget_BP_C.OnSetCurrentPage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EVendorPages*                  Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVendorWidget_BP_C::STATIC_OnSetCurrentPage(EVendorPages* Page, bool* bAnimate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorWidget_BP.VendorWidget_BP_C.OnSetCurrentPage");

	UVendorWidget_BP_C_OnSetCurrentPage_Params params;
	params.Page = Page;
	params.bAnimate = bAnimate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationBoughtItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UVendorWidget_BP_C::STATIC_OnAnimationBoughtItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationBoughtItem");

	UVendorWidget_BP_C_OnAnimationBoughtItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationRepairedItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UVendorWidget_BP_C::STATIC_OnAnimationRepairedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationRepairedItem");

	UVendorWidget_BP_C_OnAnimationRepairedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldItem
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UVendorWidget_BP_C::STATIC_OnAnimationSoldItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldItem");

	UVendorWidget_BP_C_OnAnimationSoldItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldJunk
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UVendorWidget_BP_C::STATIC_OnAnimationSoldJunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldJunk");

	UVendorWidget_BP_C_OnAnimationSoldJunk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VendorWidget_BP.VendorWidget_BP_C.ExecuteUbergraph_VendorWidget_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVendorWidget_BP_C::STATIC_ExecuteUbergraph_VendorWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VendorWidget_BP.VendorWidget_BP_C.ExecuteUbergraph_VendorWidget_BP");

	UVendorWidget_BP_C_ExecuteUbergraph_VendorWidget_BP_Params params;
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
