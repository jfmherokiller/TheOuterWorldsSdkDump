// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_HealthKitTooltip_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HealthKitTooltip_BP.HealthKitTooltip_BP_C.OnIntro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHealthKitTooltip_BP_C::OnIntro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthKitTooltip_BP.HealthKitTooltip_BP_C.OnIntro");

	UHealthKitTooltip_BP_C_OnIntro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
