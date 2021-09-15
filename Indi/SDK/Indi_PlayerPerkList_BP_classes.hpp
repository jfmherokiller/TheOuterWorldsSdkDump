#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerPerkList_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerPerkList_BP.PlayerPerkList_BP_C
// 0x0018 (0x0320 - 0x0308)
class UPlayerPerkList_BP_C : public UPerksListWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0308(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerPerkList_BP.PlayerPerkList_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
