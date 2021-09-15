// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BackgroundSplitPanelWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnOuterTopTextureLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundSplitPanelWidget_C::STATIC_OnOuterTopTextureLoaded(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnOuterTopTextureLoaded");

	UBackgroundSplitPanelWidget_C_OnOuterTopTextureLoaded_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnOuterBottomTextureLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundSplitPanelWidget_C::STATIC_OnOuterBottomTextureLoaded(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnOuterBottomTextureLoaded");

	UBackgroundSplitPanelWidget_C_OnOuterBottomTextureLoaded_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnInnerTopTextureLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundSplitPanelWidget_C::STATIC_OnInnerTopTextureLoaded(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnInnerTopTextureLoaded");

	UBackgroundSplitPanelWidget_C_OnInnerTopTextureLoaded_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnInnerBottomTextureLoaded
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundSplitPanelWidget_C::STATIC_OnInnerBottomTextureLoaded(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.OnInnerBottomTextureLoaded");

	UBackgroundSplitPanelWidget_C_OnInnerBottomTextureLoaded_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.ExecuteUbergraph_BackgroundSplitPanelWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackgroundSplitPanelWidget_C::STATIC_ExecuteUbergraph_BackgroundSplitPanelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C.ExecuteUbergraph_BackgroundSplitPanelWidget");

	UBackgroundSplitPanelWidget_C_ExecuteUbergraph_BackgroundSplitPanelWidget_Params params;
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
