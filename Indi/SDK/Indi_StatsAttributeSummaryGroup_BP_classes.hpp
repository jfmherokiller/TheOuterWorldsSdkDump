#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsAttributeSummaryGroup_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C
// 0x0018 (0x0250 - 0x0238)
class UStatsAttributeSummaryGroup_BP_C : public UAttributeSummaryGroupWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatsAttributeSummaryGroup_BP.StatsAttributeSummaryGroup_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_StatsAttributeSummaryGroup_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
