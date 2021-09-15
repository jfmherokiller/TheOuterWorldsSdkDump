#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestAddendum_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestAddendum_BP.QuestAddendum_BP_C
// 0x0010 (0x02C0 - 0x02B0)
class UQuestAddendum_BP_C : public UQuestAddendumWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestAddendum_BP.QuestAddendum_BP_C");
		return ptr;
	}


	void STATIC_OnObjectiveStatusChange(ECompletionStatus* ObjectiveCompletion);
	void STATIC_ExecuteUbergraph_QuestAddendum_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
