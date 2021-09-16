// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeLt_ImpactHammer_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeLt_ImpactHammer_AnimBP.MeleeLt_ImpactHammer_AnimBP_C.ExecuteUbergraph_MeleeLt_ImpactHammer_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeleeLt_ImpactHammer_AnimBP_C::STATIC_ExecuteUbergraph_MeleeLt_ImpactHammer_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeLt_ImpactHammer_AnimBP.MeleeLt_ImpactHammer_AnimBP_C.ExecuteUbergraph_MeleeLt_ImpactHammer_AnimBP");

	UMeleeLt_ImpactHammer_AnimBP_C_ExecuteUbergraph_MeleeLt_ImpactHammer_AnimBP_Params params;
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
