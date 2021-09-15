#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TTDStatusEffectsWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TTDStatusEffectsWidget_BP.TTDStatusEffectsWidget_BP_C
// 0x0008 (0x02C8 - 0x02C0)
class UTTDStatusEffectsWidget_BP_C : public UTTDStatusEffectsWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TTDStatusEffectsWidget_BP.TTDStatusEffectsWidget_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
