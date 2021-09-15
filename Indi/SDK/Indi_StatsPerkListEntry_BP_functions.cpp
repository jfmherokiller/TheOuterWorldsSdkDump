// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsPerkListEntry_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.UpdateButtonBrush
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bPendingPurchase               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bActuallyPurchased             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSuppressed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsPerkListEntry_BP_C::STATIC_UpdateButtonBrush(bool* bPendingPurchase, bool* bActuallyPurchased, bool* bSuppressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.UpdateButtonBrush");

	UStatsPerkListEntry_BP_C_UpdateButtonBrush_Params params;
	params.bPendingPurchase = bPendingPurchase;
	params.bActuallyPurchased = bActuallyPurchased;
	params.bSuppressed = bSuppressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.ExecuteUbergraph_StatsPerkListEntry_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsPerkListEntry_BP_C::STATIC_ExecuteUbergraph_StatsPerkListEntry_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.ExecuteUbergraph_StatsPerkListEntry_BP");

	UStatsPerkListEntry_BP_C_ExecuteUbergraph_StatsPerkListEntry_BP_Params params;
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
