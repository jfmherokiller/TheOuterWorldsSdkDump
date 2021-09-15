#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionStats_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CompanionStats_BP.CompanionStats_BP_C
// 0x0010 (0x0368 - 0x0358)
class UCompanionStats_BP_C : public UCompanionStatsWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0358(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompanionStats_BP.CompanionStats_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
