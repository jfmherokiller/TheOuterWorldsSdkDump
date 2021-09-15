#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatusTag_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatusTag_BP.StatusTag_BP_C
// 0x0020 (0x03C8 - 0x03A8)
class UStatusTag_BP_C : public UStatusTagWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusTag_BP.StatusTag_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__FadeOutTarget_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_BndEvt__FadeInTarget_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_OnSetPlayerTargeted(bool* bIsTarget);
	void STATIC_BndEvt__FadeOutTarget_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_ExecuteUbergraph_StatusTag_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
