#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SkillGroupDetail_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SkillGroupDetail_BP.SkillGroupDetail_BP_C
// 0x0018 (0x0278 - 0x0260)
class USkillGroupDetail_BP_C : public USkillGroupDetailWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0260(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillGroupDetail_BP.SkillGroupDetail_BP_C");
		return ptr;
	}


	void STATIC_OnSkillSelected();
	void STATIC_ExecuteUbergraph_SkillGroupDetail_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
