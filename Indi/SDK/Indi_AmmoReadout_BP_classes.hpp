#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AmmoReadout_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AmmoReadout_BP.AmmoReadout_BP_C
// 0x000A (0x0362 - 0x0358)
class UAmmoReadout_BP_C : public UAmmoReadoutWidget
{
public:
	unsigned char                                      UnknownData00[0xA];                                       // 0x0358(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AmmoReadout_BP.AmmoReadout_BP_C");
		return ptr;
	}


	void STATIC_ColorTextBlock(bool Index, class UTextBlockBase* Target);
	void STATIC_EvaluateLowAmmoWarning(int* MaxClipSize, int* CurrentClipSize, int* RemainingAmmo);
	void STATIC_ExecuteUbergraph_AmmoReadout_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
