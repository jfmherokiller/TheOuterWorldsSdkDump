#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemViewerScrollSelector_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemViewerScrollSelector_BP.ItemViewerScrollSelector_BP_C
// 0x0008 (0x02E0 - 0x02D8)
class UItemViewerScrollSelector_BP_C : public UItemViewerScrollSelector
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemViewerScrollSelector_BP.ItemViewerScrollSelector_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
