#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MapLegend_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapLegend_BP.MapLegend_BP_C
// 0x0058 (0x0278 - 0x0220)
class UMapLegend_BP_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0220(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapLegend_BP.MapLegend_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
