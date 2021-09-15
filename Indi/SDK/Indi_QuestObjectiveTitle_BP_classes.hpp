#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestObjectiveTitle_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C
// 0x0008 (0x0258 - 0x0250)
class UQuestObjectiveTitle_BP_C : public UQuestObjectiveTitleWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C");
		return ptr;
	}


	void STATIC_OnObjectiveStatusChange(ECompletionStatus* ObjectiveStatus);
	void STATIC_ExecuteUbergraph_QuestObjectiveTitle_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
