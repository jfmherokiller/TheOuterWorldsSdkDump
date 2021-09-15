#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BackgroundPanelWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BackgroundPanelWidget.BackgroundPanelWidget_C
// 0x0128 (0x03D0 - 0x02A8)
class UBackgroundPanelWidget_C : public UBackgroundPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x02A8(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BackgroundPanelWidget.BackgroundPanelWidget_C");
		return ptr;
	}


	void STATIC_SetBackgroundFocused(bool* bFocused);
	void STATIC_OnInnerTextureLoaded(class UTexture2D** Texture);
	void STATIC_OnOuterTextureLoaded(class UTexture2D** Texture);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_BackgroundPanelWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
