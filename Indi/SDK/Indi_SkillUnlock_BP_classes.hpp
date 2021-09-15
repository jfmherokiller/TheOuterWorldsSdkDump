#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SkillUnlock_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SkillUnlock_BP.SkillUnlock_BP_C
// 0x0008 (0x0308 - 0x0300)
class USkillUnlock_BP_C : public USkillUnlockEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0300(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillUnlock_BP.SkillUnlock_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
