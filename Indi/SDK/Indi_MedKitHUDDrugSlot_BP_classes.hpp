#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MedKitHUDDrugSlot_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MedKitHUDDrugSlot_BP.MedKitHUDDrugSlot_BP_C
// 0x0000 (0x02C0 - 0x02C0)
class UMedKitHUDDrugSlot_BP_C : public UMedKitDrugSlotWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MedKitHUDDrugSlot_BP.MedKitHUDDrugSlot_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
