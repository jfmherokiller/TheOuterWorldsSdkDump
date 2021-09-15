// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemModding_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemModding_BP.ItemModding_BP_C.ZoomToggled_2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemModding_BP_C::STATIC_ZoomToggled_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemModding_BP.ItemModding_BP_C.ZoomToggled_2");

	UItemModding_BP_C_ZoomToggled_2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemModding_BP.ItemModding_BP_C.ExecuteUbergraph_ItemModding_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemModding_BP_C::STATIC_ExecuteUbergraph_ItemModding_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemModding_BP.ItemModding_BP_C.ExecuteUbergraph_ItemModding_BP");

	UItemModding_BP_C_ExecuteUbergraph_ItemModding_BP_Params params;
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
