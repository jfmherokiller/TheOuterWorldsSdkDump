// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AmmoReadout_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoReadout_BP.AmmoReadout_BP_C.ColorTextBlock
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlockBase*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAmmoReadout_BP_C::STATIC_ColorTextBlock(bool Index, class UTextBlockBase* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoReadout_BP.AmmoReadout_BP_C.ColorTextBlock");

	UAmmoReadout_BP_C_ColorTextBlock_Params params;
	params.Index = Index;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmmoReadout_BP.AmmoReadout_BP_C.EvaluateLowAmmoWarning
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int*                           MaxClipSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentClipSize                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           RemainingAmmo                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAmmoReadout_BP_C::STATIC_EvaluateLowAmmoWarning(int* MaxClipSize, int* CurrentClipSize, int* RemainingAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoReadout_BP.AmmoReadout_BP_C.EvaluateLowAmmoWarning");

	UAmmoReadout_BP_C_EvaluateLowAmmoWarning_Params params;
	params.MaxClipSize = MaxClipSize;
	params.CurrentClipSize = CurrentClipSize;
	params.RemainingAmmo = RemainingAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmmoReadout_BP.AmmoReadout_BP_C.ExecuteUbergraph_AmmoReadout_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAmmoReadout_BP_C::STATIC_ExecuteUbergraph_AmmoReadout_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoReadout_BP.AmmoReadout_BP_C.ExecuteUbergraph_AmmoReadout_BP");

	UAmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP_Params params;
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
