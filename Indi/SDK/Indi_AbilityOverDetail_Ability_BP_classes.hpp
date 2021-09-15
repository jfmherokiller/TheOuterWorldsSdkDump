#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AbilityOverDetail_Ability_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C
// 0x0020 (0x03C8 - 0x03A8)
class UAbilityOverDetail_Ability_BP_C : public UAbilityOverviewDetailWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityOverDetail_Ability_BP.AbilityOverDetail_Ability_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_AbilityOverDetail_Ability_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
