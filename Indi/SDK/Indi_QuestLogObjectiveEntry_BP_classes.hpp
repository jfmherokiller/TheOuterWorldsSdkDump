#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestLogObjectiveEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C
// 0x0028 (0x0308 - 0x02E0)
class UQuestLogObjectiveEntry_BP_C : public UQuestObjectiveEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_StartCompleteAnim();
	void STATIC_StartFailAnim();
	void STATIC_OnIntroAnim();
	void STATIC_OnOutroAnim();
	void STATIC_OnFailedAnim();
	void STATIC_OnCompletedAnim();
	void STATIC_OnObjectiveMadeActive();
	void STATIC_OnObjectiveMadeInactive();
	void STATIC_ExecuteUbergraph_QuestLogObjectiveEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
