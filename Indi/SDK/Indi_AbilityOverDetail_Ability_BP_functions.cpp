// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AbilityOverDetail_Ability_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UAbilityOverDetail_Ability_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.Construct");

	UAbilityOverDetail_Ability_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.ExecuteUbergraph_AbilityOverDetail_Ability_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilityOverDetail_Ability_BP_C::STATIC_ExecuteUbergraph_AbilityOverDetail_Ability_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C.ExecuteUbergraph_AbilityOverDetail_Ability_BP");

	UAbilityOverDetail_Ability_BP_C_ExecuteUbergraph_AbilityOverDetail_Ability_BP_Params params;
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
