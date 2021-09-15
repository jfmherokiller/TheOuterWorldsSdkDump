#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BossBar_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BossBar_BP.BossBar_BP_C
// 0x0010 (0x0338 - 0x0328)
class UBossBar_BP_C : public UIndianaBossBar
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BossBar_BP.BossBar_BP_C");
		return ptr;
	}


	class UWidgetAnimation* GetHideAnimation();
	class UWidgetAnimation* GetShowAnimation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
