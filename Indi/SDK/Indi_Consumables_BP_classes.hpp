#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Consumables_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Consumables_BP.Consumables_BP_C
// 0x0010 (0x0528 - 0x0518)
class UConsumables_BP_C : public UInventoryConsumablesPageWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0518(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Consumables_BP.Consumables_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
