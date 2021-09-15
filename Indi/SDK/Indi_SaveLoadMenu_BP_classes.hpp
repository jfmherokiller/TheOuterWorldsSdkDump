#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SaveLoadMenu_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SaveLoadMenu_BP.SaveLoadMenu_BP_C
// 0x0018 (0x0398 - 0x0380)
class USaveLoadMenu_BP_C : public USaveLoadMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0380(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SaveLoadMenu_BP.SaveLoadMenu_BP_C");
		return ptr;
	}


	bool OnOutro(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
