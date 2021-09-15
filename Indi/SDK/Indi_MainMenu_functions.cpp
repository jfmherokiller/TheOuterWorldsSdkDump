// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MainMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenu.MainMenu_C.FadeInMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::STATIC_FadeInMenu(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.FadeInMenu");

	UMainMenu_C_FadeInMenu_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Construct");

	UMainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnHideInterface
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnHideInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnHideInterface");

	UMainMenu_C_OnHideInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnShowInterface
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bShouldChangeLogo              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::STATIC_OnShowInterface(bool* bShouldChangeLogo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnShowInterface");

	UMainMenu_C_OnShowInterface_Params params;
	params.bShouldChangeLogo = bShouldChangeLogo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartHideAnyTextPrompt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartHideAnyTextPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartHideAnyTextPrompt");

	UMainMenu_C_OnStartHideAnyTextPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnPromptFadeInComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnPromptFadeInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnPromptFadeInComplete");

	UMainMenu_C_OnPromptFadeInComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnShowAnyTextPrompt
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnShowAnyTextPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnShowAnyTextPrompt");

	UMainMenu_C_OnShowAnyTextPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.StartAutosaveSplash
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_StartAutosaveSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.StartAutosaveSplash");

	UMainMenu_C_StartAutosaveSplash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnAutosaveSplashCompleteEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnAutosaveSplashCompleteEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnAutosaveSplashCompleteEvent");

	UMainMenu_C_OnAutosaveSplashCompleteEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.FadeInKeyPressEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_FadeInKeyPressEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.FadeInKeyPressEvent");

	UMainMenu_C_FadeInKeyPressEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnShowLogo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnShowLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnShowLogo");

	UMainMenu_C_OnShowLogo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.FadeOutOptionsMenuFinished
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_FadeOutOptionsMenuFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.FadeOutOptionsMenuFinished");

	UMainMenu_C_FadeOutOptionsMenuFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartShowMainOptionsComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartShowMainOptionsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartShowMainOptionsComplete");

	UMainMenu_C_OnStartShowMainOptionsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartHideGammaSelectionComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartHideGammaSelectionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartHideGammaSelectionComplete");

	UMainMenu_C_OnStartHideGammaSelectionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnHideLogo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnHideLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnHideLogo");

	UMainMenu_C_OnHideLogo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartHideGammaSelection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartHideGammaSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartHideGammaSelection");

	UMainMenu_C_OnStartHideGammaSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartShowGammaSelection
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartShowGammaSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartShowGammaSelection");

	UMainMenu_C_OnStartShowGammaSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartShowGammaComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartShowGammaComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartShowGammaComplete");

	UMainMenu_C_OnStartShowGammaComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartHideAnyTextComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartHideAnyTextComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartHideAnyTextComplete");

	UMainMenu_C_OnStartHideAnyTextComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnStartShowMainOptions
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnStartShowMainOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnStartShowMainOptions");

	UMainMenu_C_OnStartShowMainOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnGammaSelectionFadeInComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UMainMenu_C::STATIC_OnGammaSelectionFadeInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnGammaSelectionFadeInComplete");

	UMainMenu_C_OnGammaSelectionFadeInComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::STATIC_ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	UMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
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
