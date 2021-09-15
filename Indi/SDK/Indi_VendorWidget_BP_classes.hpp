#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VendorWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass VendorWidget_BP.VendorWidget_BP_C
// 0x0078 (0x0640 - 0x05C8)
class UVendorWidget_BP_C : public UVendorWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x05C8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VendorWidget_BP.VendorWidget_BP_C");
		return ptr;
	}


	void STATIC_FadeInFactionImage();
	void STATIC_OnSetCurrentPage(EVendorPages* Page, bool* bAnimate);
	void STATIC_OnAnimationBoughtItem();
	void STATIC_OnAnimationRepairedItem();
	void STATIC_OnAnimationSoldItem();
	void STATIC_OnAnimationSoldJunk();
	void STATIC_ExecuteUbergraph_VendorWidget_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
