#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SettingsMenuButtonSlot_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SettingsMenuButtonSlot_BP.SettingsMenuButtonSlot_BP_C
// 0x0000 (0x02F8 - 0x02F8)
class USettingsMenuButtonSlot_BP_C : public USettingsMenuButtonSlotWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsMenuButtonSlot_BP.SettingsMenuButtonSlot_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
