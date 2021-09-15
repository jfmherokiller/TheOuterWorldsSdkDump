#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CharacterOverview_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CharacterOverview_BP.CharacterOverview_BP_C
// 0x0028 (0x04C8 - 0x04A0)
class UCharacterOverview_BP_C : public UCharacterOverviewWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterOverview_BP.CharacterOverview_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
