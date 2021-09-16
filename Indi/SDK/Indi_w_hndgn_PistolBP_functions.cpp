// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_w_hndgn_PistolBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_hndgn_PistolBP.w_hndgn_PistolBP_C.ExecuteUbergraph_w_hndgn_PistolBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_hndgn_PistolBP_C::STATIC_ExecuteUbergraph_w_hndgn_PistolBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hndgn_PistolBP.w_hndgn_PistolBP_C.ExecuteUbergraph_w_hndgn_PistolBP");

	Uw_hndgn_PistolBP_C_ExecuteUbergraph_w_hndgn_PistolBP_Params params;
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
