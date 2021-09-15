#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationMessage_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ConversationMessage_BP.ConversationMessage_BP_C
// 0x0008 (0x0278 - 0x0270)
class UConversationMessage_BP_C : public UConversationMessageWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConversationMessage_BP.ConversationMessage_BP_C");
		return ptr;
	}


	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_ExecuteUbergraph_ConversationMessage_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
