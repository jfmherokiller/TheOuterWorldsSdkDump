#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_QuestListEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestListEntry_BP.QuestListEntry_BP_C
// 0x0010 (0x02A0 - 0x0290)
class UQuestListEntry_BP_C : public UQuestListEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestListEntry_BP.QuestListEntry_BP_C");
		return ptr;
	}


	void STATIC_SetFocusChanged(bool IsFocused);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_SetQuestCompletionStatus(EQuestState* QuestState);
	void STATIC_SetActiveQuest(bool* bActive);
	void STATIC_ExecuteUbergraph_QuestListEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
