// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatusTagAwarenessWidget_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UStatusTagAwarenessWidget_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.Construct");

	UStatusTagAwarenessWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.SetTextures
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D**             BackingTexture                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             FillTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusTagAwarenessWidget_BP_C::STATIC_SetTextures(class UTexture2D** BackingTexture, class UTexture2D** FillTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.SetTextures");

	UStatusTagAwarenessWidget_BP_C_SetTextures_Params params;
	params.BackingTexture = BackingTexture;
	params.FillTexture = FillTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.ExecuteUbergraph_StatusTagAwarenessWidget_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusTagAwarenessWidget_BP_C::STATIC_ExecuteUbergraph_StatusTagAwarenessWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.ExecuteUbergraph_StatusTagAwarenessWidget_BP");

	UStatusTagAwarenessWidget_BP_C_ExecuteUbergraph_StatusTagAwarenessWidget_BP_Params params;
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
