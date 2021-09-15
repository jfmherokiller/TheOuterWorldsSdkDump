#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GenericNotification_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GenericNotification_BP.GenericNotification_BP_C
// 0x0028 (0x0430 - 0x0408)
class UGenericNotification_BP_C : public UGenericNotificationWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0408(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericNotification_BP.GenericNotification_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_TriggerFadeIn();
	void STATIC_TriggerFadeOut();
	void STATIC_SetBackingMaterialHeight(float* NewHeight);
	void STATIC_ExecuteUbergraph_GenericNotification_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
