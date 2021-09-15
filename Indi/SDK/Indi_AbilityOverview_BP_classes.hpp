#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AbilityOverview_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AbilityOverview_BP.AbilityOverview_BP_C
// 0x000A (0x0552 - 0x0548)
class UAbilityOverview_BP_C : public UAbilityOverviewWidget
{
public:
	unsigned char                                      UnknownData00[0xA];                                       // 0x0548(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityOverview_BP.AbilityOverview_BP_C");
		return ptr;
	}


	void STATIC_OnPlayerCombatStateChange(bool* IsPlayerInCombat, bool* bRestoring);
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_OnAbilityCooldownFinished(EAbilityPosition* AbillityPosition);
	void STATIC_ExecuteUbergraph_AbilityOverview_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
