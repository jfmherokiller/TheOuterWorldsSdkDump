#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemTransfer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemTransfer_BP.ItemTransfer_BP_C
// 0x0020 (0x0398 - 0x0378)
class UItemTransfer_BP_C : public UItemTransferWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0378(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemTransfer_BP.ItemTransfer_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
