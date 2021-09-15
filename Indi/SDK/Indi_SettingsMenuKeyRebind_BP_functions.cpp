// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SettingsMenuKeyRebind_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FComponentEvent         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsMenuKeyRebind_BP_C::STATIC_BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature");

	USettingsMenuKeyRebind_BP_C_BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.ExecuteUbergraph_SettingsMenuKeyRebind_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsMenuKeyRebind_BP_C::STATIC_ExecuteUbergraph_SettingsMenuKeyRebind_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.ExecuteUbergraph_SettingsMenuKeyRebind_BP");

	USettingsMenuKeyRebind_BP_C_ExecuteUbergraph_SettingsMenuKeyRebind_BP_Params params;
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
