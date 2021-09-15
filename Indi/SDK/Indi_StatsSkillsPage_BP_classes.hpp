#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsSkillsPage_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatsSkillsPage_BP.StatsSkillsPage_BP_C
// 0x0010 (0x0458 - 0x0448)
class UStatsSkillsPage_BP_C : public UStatsSkillsPageWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0448(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatsSkillsPage_BP.StatsSkillsPage_BP_C");
		return ptr;
	}


	bool Get_SkillGroupScrollBox_bIsEnabled_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
