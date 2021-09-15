#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationResponse_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ConversationResponse_BP.ConversationResponse_BP_C
// 0x0028 (0x02A0 - 0x0278)
class UConversationResponse_BP_C : public UConversationResponseWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0278(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConversationResponse_BP.ConversationResponse_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_OnResponseSkillsChanged(bool* bContainsSkillCheck);
	void STATIC_OnSetSelectableOption(bool* bSelectable);
	void STATIC_OnSetSkillCheckRequiredCompanion(bool* bSelectable);
	void STATIC_ExecuteUbergraph_ConversationResponse_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
