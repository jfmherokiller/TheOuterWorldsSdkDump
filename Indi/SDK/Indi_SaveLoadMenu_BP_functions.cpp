// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SaveLoadMenu_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnOutro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USaveLoadMenu_BP_C::OnOutro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnOutro");

	USaveLoadMenu_BP_C_OnOutro_Params params;
	params.AnimationCompleteCallback = AnimationCompleteCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnIntro
// ()
// Parameters:
// struct FScriptDelegate*        AnimationCompleteCallback      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USaveLoadMenu_BP_C::OnIntro(struct FScriptDelegate* AnimationCompleteCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveLoadMenu_BP.SaveLoadMenu_BP_C.OnIntro");

	USaveLoadMenu_BP_C_OnIntro_Params params;
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
