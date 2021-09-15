// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemInspector_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemInspector_BP.ItemInspector_BP_C.ZoomToggled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bFullZoom                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspector_BP_C::STATIC_ZoomToggled(bool* bFullZoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspector_BP.ItemInspector_BP_C.ZoomToggled");

	UItemInspector_BP_C_ZoomToggled_Params params;
	params.bFullZoom = bFullZoom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspector_BP.ItemInspector_BP_C.ExecuteUbergraph_ItemInspector_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspector_BP_C::STATIC_ExecuteUbergraph_ItemInspector_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspector_BP.ItemInspector_BP_C.ExecuteUbergraph_ItemInspector_BP");

	UItemInspector_BP_C_ExecuteUbergraph_ItemInspector_BP_Params params;
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
