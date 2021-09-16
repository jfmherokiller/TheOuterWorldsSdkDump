// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Switch_Interactable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Switch_Interactable.Switch_Interactable_C.SetState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USwitch_Interactable_C::STATIC_SetState(int StateIndex, bool IgnoreSound, bool InstantAnimation, bool* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Switch_Interactable.Switch_Interactable_C.SetState");

	USwitch_Interactable_C_SetState_Params params;
	params.StateIndex = StateIndex;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unused != nullptr)
		*Unused = params.Unused;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
