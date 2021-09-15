#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LedgerMapQuestSelection_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LedgerMapQuestSelection_BP.LedgerMapQuestSelection_BP_C
// 0x0008 (0x0320 - 0x0318)
class ULedgerMapQuestSelection_BP_C : public ULedgerMapQuestSelectionWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LedgerMapQuestSelection_BP.LedgerMapQuestSelection_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
