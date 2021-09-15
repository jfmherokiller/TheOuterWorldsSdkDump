// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemPageNoDrag_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.PlayCollapseAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UItemPageNoDrag_BP_C::STATIC_PlayCollapseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.PlayCollapseAnimation");

	UItemPageNoDrag_BP_C_PlayCollapseAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.ExecuteUbergraph_ItemPageNoDrag_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemPageNoDrag_BP_C::STATIC_ExecuteUbergraph_ItemPageNoDrag_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPageNoDrag_BP.ItemPageNoDrag_BP_C.ExecuteUbergraph_ItemPageNoDrag_BP");

	UItemPageNoDrag_BP_C_ExecuteUbergraph_ItemPageNoDrag_BP_Params params;
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
