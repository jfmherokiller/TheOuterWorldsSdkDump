// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputGuide_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputGuide_BP.InputGuide_BP_C.InteractChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputGuide_BP_C::STATIC_InteractChanged(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputGuide_BP.InputGuide_BP_C.InteractChanged");

	UInputGuide_BP_C_InteractChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputGuide_BP.InputGuide_BP_C.OnInteractionProgressChange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         CurrentProgressRatio           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputGuide_BP_C::STATIC_OnInteractionProgressChange(float* CurrentProgressRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputGuide_BP.InputGuide_BP_C.OnInteractionProgressChange");

	UInputGuide_BP_C_OnInteractionProgressChange_Params params;
	params.CurrentProgressRatio = CurrentProgressRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputGuide_BP.InputGuide_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UInputGuide_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputGuide_BP.InputGuide_BP_C.Construct");

	UInputGuide_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputGuide_BP.InputGuide_BP_C.ExecuteUbergraph_InputGuide_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputGuide_BP_C::STATIC_ExecuteUbergraph_InputGuide_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputGuide_BP.InputGuide_BP_C.ExecuteUbergraph_InputGuide_BP");

	UInputGuide_BP_C_ExecuteUbergraph_InputGuide_BP_Params params;
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
