#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestJournalMaster_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestJournalMaster_BP.QuestJournalMaster_BP_C
// 0x0030 (0x0498 - 0x0468)
class UQuestJournalMaster_BP_C : public UQuestJournalWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0468(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestJournalMaster_BP.QuestJournalMaster_BP_C");
		return ptr;
	}


	void STATIC_OnQuestImageLoaded();
	void STATIC_ExecuteUbergraph_QuestJournalMaster_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
