#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestObjective_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestObjective_BP.QuestObjective_BP_C
// 0x0008 (0x0240 - 0x0238)
class UQuestObjective_BP_C : public UQuestObjectiveWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestObjective_BP.QuestObjective_BP_C");
		return ptr;
	}


	void STATIC_OnObjectiveStatusChange(ECompletionStatus* ObjectiveStatus);
	void STATIC_ExecuteUbergraph_QuestObjective_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
