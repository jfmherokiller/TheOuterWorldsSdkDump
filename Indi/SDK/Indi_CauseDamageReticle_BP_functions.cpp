// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CauseDamageReticle_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowHitAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCauseDamageReticle_BP_C::STATIC_ShowHitAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowHitAnim");

	UCauseDamageReticle_BP_C_ShowHitAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowWeakAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCauseDamageReticle_BP_C::STATIC_ShowWeakAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowWeakAnim");

	UCauseDamageReticle_BP_C_ShowWeakAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowKillAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCauseDamageReticle_BP_C::STATIC_ShowKillAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowKillAnim");

	UCauseDamageReticle_BP_C_ShowKillAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ExecuteUbergraph_CauseDamageReticle_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCauseDamageReticle_BP_C::STATIC_ExecuteUbergraph_CauseDamageReticle_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ExecuteUbergraph_CauseDamageReticle_BP");

	UCauseDamageReticle_BP_C_ExecuteUbergraph_CauseDamageReticle_BP_Params params;
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
