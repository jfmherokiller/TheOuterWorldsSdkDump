#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SelectedNotificationWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C
// 0x0020 (0x02E0 - 0x02C0)
class USelectedNotificationWidget_BP_C : public USelectedNotificationWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_PlayNotificationAnimation();
	void STATIC_PlayFadeOutAnimation();
	void STATIC_StopFadeOutAnimation();
	void STATIC_OnFadeRightAnimationFinished();
	void STATIC_OnFadeOutAnimationFinished();
	void STATIC_ExecuteUbergraph_SelectedNotificationWidget_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
