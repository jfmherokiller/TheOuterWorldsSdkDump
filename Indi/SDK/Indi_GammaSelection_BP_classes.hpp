#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GammaSelection_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GammaSelection_BP.GammaSelection_BP_C
// 0x0028 (0x0340 - 0x0318)
class UGammaSelection_BP_C : public UGammaSelectionWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0318(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GammaSelection_BP.GammaSelection_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
