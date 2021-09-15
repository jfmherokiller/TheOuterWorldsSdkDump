#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionEquipmentBarWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CompanionEquipmentBarWidget.CompanionEquipmentBarWidget_C
// 0x0020 (0x0438 - 0x0418)
class UCompanionEquipmentBarWidget_C : public UCompanionEquipmentBarWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0418(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompanionEquipmentBarWidget.CompanionEquipmentBarWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
