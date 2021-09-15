// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SkillGroupDetail_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillGroupDetail_BP.SkillGroupDetail_BP_C.OnSkillSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void USkillGroupDetail_BP_C::STATIC_OnSkillSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillGroupDetail_BP.SkillGroupDetail_BP_C.OnSkillSelected");

	USkillGroupDetail_BP_C_OnSkillSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillGroupDetail_BP.SkillGroupDetail_BP_C.ExecuteUbergraph_SkillGroupDetail_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillGroupDetail_BP_C::STATIC_ExecuteUbergraph_SkillGroupDetail_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillGroupDetail_BP.SkillGroupDetail_BP_C.ExecuteUbergraph_SkillGroupDetail_BP");

	USkillGroupDetail_BP_C_ExecuteUbergraph_SkillGroupDetail_BP_Params params;
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
