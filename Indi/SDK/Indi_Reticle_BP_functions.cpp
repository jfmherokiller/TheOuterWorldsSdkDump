// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Reticle_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Reticle_BP.Reticle_BP_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticle_BP_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Reticle_BP.Reticle_BP_C.Tick");

	UReticle_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Reticle_BP.Reticle_BP_C.ExpandTTDRotator
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UReticle_BP_C::STATIC_ExpandTTDRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Reticle_BP.Reticle_BP_C.ExpandTTDRotator");

	UReticle_BP_C_ExpandTTDRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Reticle_BP.Reticle_BP_C.ShrinkTTDRotator
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UReticle_BP_C::STATIC_ShrinkTTDRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Reticle_BP.Reticle_BP_C.ShrinkTTDRotator");

	UReticle_BP_C_ShrinkTTDRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Reticle_BP.Reticle_BP_C.SetTTDProgressRatio
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         NewTTDRatio                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticle_BP_C::STATIC_SetTTDProgressRatio(float* NewTTDRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Reticle_BP.Reticle_BP_C.SetTTDProgressRatio");

	UReticle_BP_C_SetTTDProgressRatio_Params params;
	params.NewTTDRatio = NewTTDRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Reticle_BP.Reticle_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UReticle_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Reticle_BP.Reticle_BP_C.Construct");

	UReticle_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Reticle_BP.Reticle_BP_C.ExecuteUbergraph_Reticle_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReticle_BP_C::STATIC_ExecuteUbergraph_Reticle_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Reticle_BP.Reticle_BP_C.ExecuteUbergraph_Reticle_BP");

	UReticle_BP_C_ExecuteUbergraph_Reticle_BP_Params params;
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
