// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BackgroundPanelWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BackgroundPanelWidget.BackgroundPanelWidget_C.SetBackgroundFocused
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bFocused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundPanelWidget_C::STATIC_SetBackgroundFocused(bool* bFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundPanelWidget.BackgroundPanelWidget_C.SetBackgroundFocused");

	UBackgroundPanelWidget_C_SetBackgroundFocused_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundPanelWidget.BackgroundPanelWidget_C.OnInnerTextureLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundPanelWidget_C::STATIC_OnInnerTextureLoaded(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundPanelWidget.BackgroundPanelWidget_C.OnInnerTextureLoaded");

	UBackgroundPanelWidget_C_OnInnerTextureLoaded_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundPanelWidget.BackgroundPanelWidget_C.OnOuterTextureLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundPanelWidget_C::STATIC_OnOuterTextureLoaded(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundPanelWidget.BackgroundPanelWidget_C.OnOuterTextureLoaded");

	UBackgroundPanelWidget_C_OnOuterTextureLoaded_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundPanelWidget.BackgroundPanelWidget_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UBackgroundPanelWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundPanelWidget.BackgroundPanelWidget_C.Construct");

	UBackgroundPanelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundPanelWidget.BackgroundPanelWidget_C.ExecuteUbergraph_BackgroundPanelWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundPanelWidget_C::STATIC_ExecuteUbergraph_BackgroundPanelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundPanelWidget.BackgroundPanelWidget_C.ExecuteUbergraph_BackgroundPanelWidget");

	UBackgroundPanelWidget_C_ExecuteUbergraph_BackgroundPanelWidget_Params params;
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
