#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsPerkList_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatsPerkList_BP.StatsPerkList_BP_C
// 0x0028 (0x0330 - 0x0308)
class UStatsPerkList_BP_C : public UPerksListWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0308(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatsPerkList_BP.StatsPerkList_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
