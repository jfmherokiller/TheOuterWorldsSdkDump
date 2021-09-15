#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestLogEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestLogEntry_BP.QuestLogEntry_BP_C
// 0x0030 (0x0308 - 0x02D8)
class UQuestLogEntry_BP_C : public UQuestLogEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestLogEntry_BP.QuestLogEntry_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_QuestAnimComplete();
	void STATIC_OnQuestCompleted();
	void STATIC_OnQuestFailed();
	void STATIC_FadeInQuestText();
	void STATIC_FadeOutQuestText();
	void STATIC_FadeOutTextAnimComplete();
	void STATIC_FadeInTextAnimComplete();
	void STATIC_OnQuestUpdated();
	void STATIC_OnQuestUpdateComplete();
	void STATIC_ExecuteUbergraph_QuestLogEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
