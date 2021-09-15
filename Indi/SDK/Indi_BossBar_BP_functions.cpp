// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BossBar_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossBar_BP.BossBar_BP_C.GetHideAnimation
// ()
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UBossBar_BP_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossBar_BP.BossBar_BP_C.GetHideAnimation");

	UBossBar_BP_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BossBar_BP.BossBar_BP_C.GetShowAnimation
// ()
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UBossBar_BP_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossBar_BP.BossBar_BP_C.GetShowAnimation");

	UBossBar_BP_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
