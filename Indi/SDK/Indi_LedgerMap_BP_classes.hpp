#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LedgerMap_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LedgerMap_BP.LedgerMap_BP_C
// 0x0010 (0x0678 - 0x0668)
class ULedgerMap_BP_C : public ULedgerMapWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0668(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LedgerMap_BP.LedgerMap_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
