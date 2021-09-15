// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AmmoGroup_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoGroup_BP.AmmoGroup_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UAmmoGroup_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoGroup_BP.AmmoGroup_BP_C.Construct");

	UAmmoGroup_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmmoGroup_BP.AmmoGroup_BP_C.OnHighlightChange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bHighlight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAmmoGroup_BP_C::STATIC_OnHighlightChange(bool* bHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoGroup_BP.AmmoGroup_BP_C.OnHighlightChange");

	UAmmoGroup_BP_C_OnHighlightChange_Params params;
	params.bHighlight = bHighlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmmoGroup_BP.AmmoGroup_BP_C.ExecuteUbergraph_AmmoGroup_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAmmoGroup_BP_C::STATIC_ExecuteUbergraph_AmmoGroup_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoGroup_BP.AmmoGroup_BP_C.ExecuteUbergraph_AmmoGroup_BP");

	UAmmoGroup_BP_C_ExecuteUbergraph_AmmoGroup_BP_Params params;
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
