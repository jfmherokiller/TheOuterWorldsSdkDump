// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_TeslaCannon_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TL_TeslaCannon_AnimBP.TL_TeslaCannon_AnimBP_C.ExecuteUbergraph_TL_TeslaCannon_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTL_TeslaCannon_AnimBP_C::STATIC_ExecuteUbergraph_TL_TeslaCannon_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TL_TeslaCannon_AnimBP.TL_TeslaCannon_AnimBP_C.ExecuteUbergraph_TL_TeslaCannon_AnimBP");

	UTL_TeslaCannon_AnimBP_C_ExecuteUbergraph_TL_TeslaCannon_AnimBP_Params params;
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
