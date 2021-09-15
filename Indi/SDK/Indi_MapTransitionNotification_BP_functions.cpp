// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MapTransitionNotification_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapTransitionNotification_BP.MapTransitionNotification_BP_C.StartAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMapTransitionNotification_BP_C::STATIC_StartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTransitionNotification_BP.MapTransitionNotification_BP_C.StartAnimation");

	UMapTransitionNotification_BP_C_StartAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapTransitionNotification_BP.MapTransitionNotification_BP_C.ExecuteUbergraph_MapTransitionNotification_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMapTransitionNotification_BP_C::STATIC_ExecuteUbergraph_MapTransitionNotification_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTransitionNotification_BP.MapTransitionNotification_BP_C.ExecuteUbergraph_MapTransitionNotification_BP");

	UMapTransitionNotification_BP_C_ExecuteUbergraph_MapTransitionNotification_BP_Params params;
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
