#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsSummaryPage_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatsSummaryPage_BP.StatsSummaryPage_BP_C
// 0x0018 (0x0300 - 0x02E8)
class UStatsSummaryPage_BP_C : public UStatsSummaryPageWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatsSummaryPage_BP.StatsSummaryPage_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
