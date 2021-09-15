#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SummaryEquipmentModWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SummaryEquipmentModWidget_BP.SummaryEquipmentModWidget_BP_C
// 0x0000 (0x0250 - 0x0250)
class USummaryEquipmentModWidget_BP_C : public UEquipmentModWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SummaryEquipmentModWidget_BP.SummaryEquipmentModWidget_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
