#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LevelUpNotification_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LevelUpNotification_BP.LevelUpNotification_BP_C
// 0x0082 (0x040A - 0x0388)
class ULevelUpNotification_BP_C : public ULevelUpNotificationWidget
{
public:
	unsigned char                                      UnknownData00[0x82];                                      // 0x0388(0x0082) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelUpNotification_BP.LevelUpNotification_BP_C");
		return ptr;
	}


	class UWidgetAnimation* GetLevelUpReminderAnimation();
	class UWidgetAnimation* GetGlowFadeAnimation();
	class UWidgetAnimation* GetGlowGrowAnimation();
	class UWidgetAnimation* GetGlowShrinkAnimation();
	class UWidgetAnimation* GetPrimaryTextAndSunFadeInAnimation();
	class UWidgetAnimation* GetPrimaryTextGrowAnimation();
	class UWidgetAnimation* GetSecondaryTextFadeInAnimation();
	class UWidgetAnimation* GetSunSpinAnimation();
	class UWidgetAnimation* GetTextAndSunFadeOutAnimation();
	class UWidgetAnimation* GetGlowballAnimation();
	void STATIC_OnLevelUpComplete();
	void STATIC_ExecuteUbergraph_LevelUpNotification_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
