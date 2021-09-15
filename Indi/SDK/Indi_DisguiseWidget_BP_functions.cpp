// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DisguiseWidget_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UDisguiseWidget_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.Construct");

	UDisguiseWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseBegin
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UDisguiseWidget_BP_C::STATIC_OnDisguiseBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseBegin");

	UDisguiseWidget_BP_C_OnDisguiseBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseEnd
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UDisguiseWidget_BP_C::STATIC_OnDisguiseEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseEnd");

	UDisguiseWidget_BP_C_OnDisguiseEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseImageLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UDisguiseWidget_BP_C::STATIC_OnDisguiseImageLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseImageLoaded");

	UDisguiseWidget_BP_C_OnDisguiseImageLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterFill
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDisguiseWidget_BP_C::STATIC_UpdateDisguiseMeterFill(float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterFill");

	UDisguiseWidget_BP_C_UpdateDisguiseMeterFill_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterInnerAnim
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int*                           CurrentFrame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDisguiseWidget_BP_C::STATIC_UpdateDisguiseMeterInnerAnim(int* CurrentFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterInnerAnim");

	UDisguiseWidget_BP_C_UpdateDisguiseMeterInnerAnim_Params params;
	params.CurrentFrame = CurrentFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.ShowDisguiseMeterTip
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDisguiseWidget_BP_C::STATIC_ShowDisguiseMeterTip(float* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.ShowDisguiseMeterTip");

	UDisguiseWidget_BP_C_ShowDisguiseMeterTip_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.HideDisguiseMeterTip
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDisguiseWidget_BP_C::STATIC_HideDisguiseMeterTip(float* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.HideDisguiseMeterTip");

	UDisguiseWidget_BP_C_HideDisguiseMeterTip_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DisguiseWidget_BP.DisguiseWidget_BP_C.ExecuteUbergraph_DisguiseWidget_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDisguiseWidget_BP_C::STATIC_ExecuteUbergraph_DisguiseWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DisguiseWidget_BP.DisguiseWidget_BP_C.ExecuteUbergraph_DisguiseWidget_BP");

	UDisguiseWidget_BP_C_ExecuteUbergraph_DisguiseWidget_BP_Params params;
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
