#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MainMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0068 (0x03F0 - 0x0388)
class UMainMenu_C : public UMainMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0388(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}


	void STATIC_FadeInMenu(bool Condition);
	void STATIC_Construct();
	void STATIC_OnHideInterface();
	void STATIC_OnShowInterface(bool* bShouldChangeLogo);
	void STATIC_OnStartHideAnyTextPrompt();
	void STATIC_OnPromptFadeInComplete();
	void STATIC_OnShowAnyTextPrompt();
	void STATIC_StartAutosaveSplash();
	void STATIC_OnAutosaveSplashCompleteEvent();
	void STATIC_FadeInKeyPressEvent();
	void STATIC_OnShowLogo();
	void STATIC_FadeOutOptionsMenuFinished();
	void STATIC_OnStartShowMainOptionsComplete();
	void STATIC_OnStartHideGammaSelectionComplete();
	void STATIC_OnHideLogo();
	void STATIC_OnStartHideGammaSelection();
	void STATIC_OnStartShowGammaSelection();
	void STATIC_OnStartShowGammaComplete();
	void STATIC_OnStartHideAnyTextComplete();
	void STATIC_OnStartShowMainOptions();
	void STATIC_OnGammaSelectionFadeInComplete();
	void STATIC_ExecuteUbergraph_MainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
