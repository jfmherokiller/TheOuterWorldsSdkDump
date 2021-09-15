#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MultiQuestMapTracker_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MultiQuestMapTracker_BP.MultiQuestMapTracker_BP_C
// 0x0010 (0x02F8 - 0x02E8)
class UMultiQuestMapTracker_BP_C : public UMultiQuestMapTracker
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MultiQuestMapTracker_BP.MultiQuestMapTracker_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
