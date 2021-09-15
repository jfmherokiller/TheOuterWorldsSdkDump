#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AbilityOverviewGamepad_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AbilityOverviewGamepad_BP.AbilityOverviewGamepad_BP_C
// 0x005A (0x05A2 - 0x0548)
class UAbilityOverviewGamepad_BP_C : public UAbilityOverviewWidget
{
public:
	unsigned char                                      UnknownData00[0x5A];                                      // 0x0548(0x005A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityOverviewGamepad_BP.AbilityOverviewGamepad_BP_C");
		return ptr;
	}


	void STATIC_OnPlayerCombatStateChange(bool* IsPlayerInCombat, bool* bRestoring);
	void STATIC_OnAbilityCooldownFinished(EAbilityPosition* AbillityPosition);
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_ExecuteUbergraph_AbilityOverviewGamepad_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
