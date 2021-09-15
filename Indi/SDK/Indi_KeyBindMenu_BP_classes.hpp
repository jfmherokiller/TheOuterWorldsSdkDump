#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_KeyBindMenu_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass KeyBindMenu_BP.KeyBindMenu_BP_C
// 0x0030 (0x0AE0 - 0x0AB0)
class UKeyBindMenu_BP_C : public UKeyBindsMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0AB0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyBindMenu_BP.KeyBindMenu_BP_C");
		return ptr;
	}


	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnOutro(struct FScriptDelegate* AnimationCompleteCallback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
