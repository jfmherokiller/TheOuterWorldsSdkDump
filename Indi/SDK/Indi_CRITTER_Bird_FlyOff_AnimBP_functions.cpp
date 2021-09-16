// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CRITTER_Bird_FlyOff_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CRITTER_Bird_FlyOff_AnimBP.CRITTER_Bird_FlyOff_AnimBP_C.AnimNotify_RandomIdle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCRITTER_Bird_FlyOff_AnimBP_C::STATIC_AnimNotify_RandomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CRITTER_Bird_FlyOff_AnimBP.CRITTER_Bird_FlyOff_AnimBP_C.AnimNotify_RandomIdle");

	UCRITTER_Bird_FlyOff_AnimBP_C_AnimNotify_RandomIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CRITTER_Bird_FlyOff_AnimBP.CRITTER_Bird_FlyOff_AnimBP_C.ExecuteUbergraph_CRITTER_Bird_FlyOff_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCRITTER_Bird_FlyOff_AnimBP_C::STATIC_ExecuteUbergraph_CRITTER_Bird_FlyOff_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CRITTER_Bird_FlyOff_AnimBP.CRITTER_Bird_FlyOff_AnimBP_C.ExecuteUbergraph_CRITTER_Bird_FlyOff_AnimBP");

	UCRITTER_Bird_FlyOff_AnimBP_C_ExecuteUbergraph_CRITTER_Bird_FlyOff_AnimBP_Params params;
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
