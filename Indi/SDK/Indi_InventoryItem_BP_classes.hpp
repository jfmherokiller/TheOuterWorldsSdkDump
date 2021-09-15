#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InventoryItem_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventoryItem_BP.InventoryItem_BP_C
// 0x0120 (0x0438 - 0x0318)
class UInventoryItem_BP_C : public UInventoryItemWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0318(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryItem_BP.InventoryItem_BP_C");
		return ptr;
	}


	void STATIC_OnButtonFocusLost();
	void STATIC_OnButtonUnhovered();
	void STATIC_OnButtonFocused();
	void STATIC_OnButtonHovered();
	void STATIC_ExecuteUbergraph_InventoryItem_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
