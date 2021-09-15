#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BeaconTooltip_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BeaconTooltip_BP.BeaconTooltip_BP_C
// 0x0018 (0x02C0 - 0x02A8)
class UBeaconTooltip_BP_C : public UMapBeaconEntryTooltipWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BeaconTooltip_BP.BeaconTooltip_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
