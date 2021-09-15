#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SettingsMenu_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SettingsMenu_BP.SettingsMenu_BP_C
// 0x0020 (0x05E0 - 0x05C0)
class USettingsMenu_BP_C : public USettingsMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsMenu_BP.SettingsMenu_BP_C");
		return ptr;
	}


	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnOutro(struct FScriptDelegate* AnimationCompleteCallback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
