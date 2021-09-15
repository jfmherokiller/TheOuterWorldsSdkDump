// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsAttributeSummaryGroup_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UStatsAttributeSummaryGroup_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.Construct");

	UStatsAttributeSummaryGroup_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.ExecuteUbergraph_StatsAttributeSummaryGroup_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsAttributeSummaryGroup_BP_C::STATIC_ExecuteUbergraph_StatsAttributeSummaryGroup_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C.ExecuteUbergraph_StatsAttributeSummaryGroup_BP");

	UStatsAttributeSummaryGroup_BP_C_ExecuteUbergraph_StatsAttributeSummaryGroup_BP_Params params;
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
