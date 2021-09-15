#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemInspector_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemInspector_BP.ItemInspector_BP_C
// 0x0028 (0x0358 - 0x0330)
class UItemInspector_BP_C : public UItemInspectorWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0330(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemInspector_BP.ItemInspector_BP_C");
		return ptr;
	}


	void STATIC_ZoomToggled(bool* bFullZoom);
	void STATIC_ExecuteUbergraph_ItemInspector_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
