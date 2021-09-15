#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsPerkListEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatsPerkListEntry_BP.StatsPerkListEntry_BP_C
// 0x0020 (0x0330 - 0x0310)
class UStatsPerkListEntry_BP_C : public UPerksListEntry
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0310(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatsPerkListEntry_BP.StatsPerkListEntry_BP_C");
		return ptr;
	}


	void STATIC_UpdateButtonBrush(bool* bPendingPurchase, bool* bActuallyPurchased, bool* bSuppressed);
	void STATIC_ExecuteUbergraph_StatsPerkListEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
