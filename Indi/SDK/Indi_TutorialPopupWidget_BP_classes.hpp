#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TutorialPopupWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TutorialPopupWidget_BP.TutorialPopupWidget_BP_C
// 0x0010 (0x0308 - 0x02F8)
class UTutorialPopupWidget_BP_C : public UTutorialPopupWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialPopupWidget_BP.TutorialPopupWidget_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
