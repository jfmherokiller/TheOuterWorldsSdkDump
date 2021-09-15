#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemPageNoDrag_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemPageNoDrag_BP.ItemPageNoDrag_BP_C
// 0x0010 (0x0328 - 0x0318)
class UItemPageNoDrag_BP_C : public UItemViewerPageWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemPageNoDrag_BP.ItemPageNoDrag_BP_C");
		return ptr;
	}


	void STATIC_PlayCollapseAnimation();
	void STATIC_ExecuteUbergraph_ItemPageNoDrag_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
