#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ConversationWidget_BP.ConversationWidget_BP_C
// 0x0068 (0x0530 - 0x04C8)
class UConversationWidget_BP_C : public UConversationWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x04C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConversationWidget_BP.ConversationWidget_BP_C");
		return ptr;
	}


	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	ESlateVisibility Get_Line0_Visibility_1();
	ESlateVisibility Get_Line1_Visibility_1();
	void STATIC_SetConversationBackingFillRatio(float* DesiredOverlayHeight);
	void STATIC_SetHistoryBackingFillRatio(float* DesiredHistoryHeight);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_ConversationWidget_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
