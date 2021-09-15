#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BackgroundSplitPanelWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C
// 0x0258 (0x0560 - 0x0308)
class UBackgroundSplitPanelWidget_C : public UBackgroundSplitPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x258];                                     // 0x0308(0x0258) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BackgroundSplitPanelWidget.BackgroundSplitPanelWidget_C");
		return ptr;
	}


	void STATIC_OnOuterTopTextureLoaded(class UTexture2D** Texture);
	void STATIC_OnOuterBottomTextureLoaded(class UTexture2D** Texture);
	void STATIC_OnInnerTopTextureLoaded(class UTexture2D** Texture);
	void STATIC_OnInnerBottomTextureLoaded(class UTexture2D** Texture);
	void STATIC_ExecuteUbergraph_BackgroundSplitPanelWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
