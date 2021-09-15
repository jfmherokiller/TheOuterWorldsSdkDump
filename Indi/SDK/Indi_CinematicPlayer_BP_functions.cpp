// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CinematicPlayer_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeIn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCinematicPlayer_BP_C::STATIC_InitiateFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeIn");

	UCinematicPlayer_BP_C_InitiateFadeIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCinematicPlayer_BP_C::STATIC_InitiateFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicPlayer_BP.CinematicPlayer_BP_C.InitiateFadeOut");

	UCinematicPlayer_BP_C_InitiateFadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicPlayer_BP.CinematicPlayer_BP_C.ExecuteUbergraph_CinematicPlayer_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCinematicPlayer_BP_C::STATIC_ExecuteUbergraph_CinematicPlayer_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicPlayer_BP.CinematicPlayer_BP_C.ExecuteUbergraph_CinematicPlayer_BP");

	UCinematicPlayer_BP_C_ExecuteUbergraph_CinematicPlayer_BP_Params params;
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
