#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemViewerScrollSelectorEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemViewerScrollSelectorEntry_BP.ItemViewerScrollSelectorEntry_BP_C
// 0x0008 (0x02C0 - 0x02B8)
class UItemViewerScrollSelectorEntry_BP_C : public UItemViewerScrollSelectorEntry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemViewerScrollSelectorEntry_BP.ItemViewerScrollSelectorEntry_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
