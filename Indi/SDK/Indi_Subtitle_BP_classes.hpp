#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Subtitle_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Subtitle_BP.Subtitle_BP_C
// 0x0020 (0x0438 - 0x0418)
class USubtitle_BP_C : public USubtitlesWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0418(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Subtitle_BP.Subtitle_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
