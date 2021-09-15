// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsSkillsPage_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatsSkillsPage_BP.StatsSkillsPage_BP_C.Get_SkillGroupScrollBox_bIsEnabled_1
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatsSkillsPage_BP_C::Get_SkillGroupScrollBox_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsSkillsPage_BP.StatsSkillsPage_BP_C.Get_SkillGroupScrollBox_bIsEnabled_1");

	UStatsSkillsPage_BP_C_Get_SkillGroupScrollBox_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
