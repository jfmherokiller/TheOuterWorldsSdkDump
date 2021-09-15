#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RadialMenuDrugSlot_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass RadialMenuDrugSlot_BP.RadialMenuDrugSlot_BP_C
// 0x0000 (0x0260 - 0x0260)
class URadialMenuDrugSlot_BP_C : public UItemDrugSectionWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialMenuDrugSlot_BP.RadialMenuDrugSlot_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
