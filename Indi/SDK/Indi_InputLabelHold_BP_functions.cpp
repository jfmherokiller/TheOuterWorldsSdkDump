// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputLabelHold_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputLabelHold_BP.InputLabelHold_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UInputLabelHold_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHold_BP.InputLabelHold_BP_C.Construct");

	UInputLabelHold_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputLabelHold_BP.InputLabelHold_BP_C.SetRadialFill
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputLabelHold_BP_C::STATIC_SetRadialFill(float* FillRatio, float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHold_BP.InputLabelHold_BP_C.SetRadialFill");

	UInputLabelHold_BP_C_SetRadialFill_Params params;
	params.FillRatio = FillRatio;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputLabelHold_BP.InputLabelHold_BP_C.SetWidth
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputLabelHold_BP_C::STATIC_SetWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHold_BP.InputLabelHold_BP_C.SetWidth");

	UInputLabelHold_BP_C_SetWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputLabelHold_BP.InputLabelHold_BP_C.ExecuteUbergraph_InputLabelHold_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputLabelHold_BP_C::STATIC_ExecuteUbergraph_InputLabelHold_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputLabelHold_BP.InputLabelHold_BP_C.ExecuteUbergraph_InputLabelHold_BP");

	UInputLabelHold_BP_C_ExecuteUbergraph_InputLabelHold_BP_Params params;
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
