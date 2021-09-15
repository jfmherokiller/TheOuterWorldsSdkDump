#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SkillUnlockPanel_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SkillUnlockPanel_BP.SkillUnlockPanel_BP_C
// 0x0060 (0x0320 - 0x02C0)
class USkillUnlockPanel_BP_C : public USkillUnlockPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillUnlockPanel_BP.SkillUnlockPanel_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
