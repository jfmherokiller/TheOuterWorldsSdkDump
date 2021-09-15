#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_HUD_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_BP.HUD_BP_C
// 0x0020 (0x03B8 - 0x0398)
class UHUD_BP_C : public UHUDWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0398(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BP.HUD_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_ExecuteUbergraph_HUD_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
