#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CharacterSkillsDescriptionPanel_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CharacterSkillsDescriptionPanel_BP.CharacterSkillsDescriptionPanel_BP_C
// 0x0008 (0x0328 - 0x0320)
class UCharacterSkillsDescriptionPanel_BP_C : public UCharacterSkillsDescriptionPanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterSkillsDescriptionPanel_BP.CharacterSkillsDescriptionPanel_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
