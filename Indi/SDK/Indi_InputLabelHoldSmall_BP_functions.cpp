// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputLabelHoldSmall_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UInputLabelHoldSmall_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.Construct");

	UInputLabelHoldSmall_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetRadialFill
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputLabelHoldSmall_BP_C::STATIC_SetRadialFill(float* FillRatio, float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetRadialFill");

	UInputLabelHoldSmall_BP_C_SetRadialFill_Params params;
	params.FillRatio = FillRatio;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputLabelHoldSmall_BP_C::STATIC_SetWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.SetWidth");

	UInputLabelHoldSmall_BP_C_SetWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.ExecuteUbergraph_InputLabelHoldSmall_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputLabelHoldSmall_BP_C::STATIC_ExecuteUbergraph_InputLabelHoldSmall_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHoldSmall_BP.InputLabelHoldSmall_BP_C.ExecuteUbergraph_InputLabelHoldSmall_BP");

	UInputLabelHoldSmall_BP_C_ExecuteUbergraph_InputLabelHoldSmall_BP_Params params;
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
