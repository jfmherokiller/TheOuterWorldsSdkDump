#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemPage_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemPage_BP.ItemPage_BP_C
// 0x0010 (0x0328 - 0x0318)
class UItemPage_BP_C : public UItemViewerPageWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemPage_BP.ItemPage_BP_C");
		return ptr;
	}


	void STATIC_PlayCollapseAnimation();
	void STATIC_ExecuteUbergraph_ItemPage_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
