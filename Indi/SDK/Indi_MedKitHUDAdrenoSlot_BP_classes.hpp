#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MedKitHUDAdrenoSlot_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MedKitHUDAdrenoSlot_BP.MedKitHUDAdrenoSlot_BP_C
// 0x0000 (0x02C0 - 0x02C0)
class UMedKitHUDAdrenoSlot_BP_C : public UMedKitDrugSlotWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MedKitHUDAdrenoSlot_BP.MedKitHUDAdrenoSlot_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
