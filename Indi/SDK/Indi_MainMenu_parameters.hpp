#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MainMenu.MainMenu_C.FadeInMenu
struct UMainMenu_C_FadeInMenu_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.Construct
struct UMainMenu_C_Construct_Params
{
};

// Function MainMenu.MainMenu_C.OnHideInterface
struct UMainMenu_C_OnHideInterface_Params
{
};

// Function MainMenu.MainMenu_C.OnShowInterface
struct UMainMenu_C_OnShowInterface_Params
{
	bool*                                              bShouldChangeLogo;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnStartHideAnyTextPrompt
struct UMainMenu_C_OnStartHideAnyTextPrompt_Params
{
};

// Function MainMenu.MainMenu_C.OnPromptFadeInComplete
struct UMainMenu_C_OnPromptFadeInComplete_Params
{
};

// Function MainMenu.MainMenu_C.OnShowAnyTextPrompt
struct UMainMenu_C_OnShowAnyTextPrompt_Params
{
};

// Function MainMenu.MainMenu_C.StartAutosaveSplash
struct UMainMenu_C_StartAutosaveSplash_Params
{
};

// Function MainMenu.MainMenu_C.OnAutosaveSplashCompleteEvent
struct UMainMenu_C_OnAutosaveSplashCompleteEvent_Params
{
};

// Function MainMenu.MainMenu_C.FadeInKeyPressEvent
struct UMainMenu_C_FadeInKeyPressEvent_Params
{
};

// Function MainMenu.MainMenu_C.OnShowLogo
struct UMainMenu_C_OnShowLogo_Params
{
};

// Function MainMenu.MainMenu_C.FadeOutOptionsMenuFinished
struct UMainMenu_C_FadeOutOptionsMenuFinished_Params
{
};

// Function MainMenu.MainMenu_C.OnStartShowMainOptionsComplete
struct UMainMenu_C_OnStartShowMainOptionsComplete_Params
{
};

// Function MainMenu.MainMenu_C.OnStartHideGammaSelectionComplete
struct UMainMenu_C_OnStartHideGammaSelectionComplete_Params
{
};

// Function MainMenu.MainMenu_C.OnHideLogo
struct UMainMenu_C_OnHideLogo_Params
{
};

// Function MainMenu.MainMenu_C.OnStartHideGammaSelection
struct UMainMenu_C_OnStartHideGammaSelection_Params
{
};

// Function MainMenu.MainMenu_C.OnStartShowGammaSelection
struct UMainMenu_C_OnStartShowGammaSelection_Params
{
};

// Function MainMenu.MainMenu_C.OnStartShowGammaComplete
struct UMainMenu_C_OnStartShowGammaComplete_Params
{
};

// Function MainMenu.MainMenu_C.OnStartHideAnyTextComplete
struct UMainMenu_C_OnStartHideAnyTextComplete_Params
{
};

// Function MainMenu.MainMenu_C.OnStartShowMainOptions
struct UMainMenu_C_OnStartShowMainOptions_Params
{
};

// Function MainMenu.MainMenu_C.OnGammaSelectionFadeInComplete
struct UMainMenu_C_OnGammaSelectionFadeInComplete_Params
{
};

// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct UMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
