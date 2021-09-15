#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemToolTip_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemToolTip_BP.ItemToolTip_BP_C
// 0x01C8 (0x0668 - 0x04A0)
class UItemToolTip_BP_C : public UItemToolTipWidget
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x04A0(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemToolTip_BP.ItemToolTip_BP_C");
		return ptr;
	}


	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	void STATIC_SetBackgroundBrush();
	void STATIC_ExecuteUbergraph_ItemToolTip_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
