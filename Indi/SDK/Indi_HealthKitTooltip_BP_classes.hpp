#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_HealthKitTooltip_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HealthKitTooltip_BP.HealthKitTooltip_BP_C
// 0x0010 (0x0368 - 0x0358)
class UHealthKitTooltip_BP_C : public UHealthKitTooltipWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0358(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HealthKitTooltip_BP.HealthKitTooltip_BP_C");
		return ptr;
	}


	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
