#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PageAnchor1_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PageAnchor1_BP.PageAnchor1_BP_C
// 0x0020 (0x0240 - 0x0220)
class UPageAnchor1_BP_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0220(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PageAnchor1_BP.PageAnchor1_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
