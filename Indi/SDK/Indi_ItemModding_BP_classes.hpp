#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemModding_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemModding_BP.ItemModding_BP_C
// 0x0068 (0x06C8 - 0x0660)
class UItemModding_BP_C : public UItemModdingWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0660(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemModding_BP.ItemModding_BP_C");
		return ptr;
	}


	void STATIC_ZoomToggled_2();
	void STATIC_ExecuteUbergraph_ItemModding_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
