#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemViewer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemViewer_BP.ItemViewer_BP_C
// 0x0028 (0x0620 - 0x05F8)
class UItemViewer_BP_C : public UItemViewerWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x05F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemViewer_BP.ItemViewer_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_ExecuteUbergraph_ItemViewer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
