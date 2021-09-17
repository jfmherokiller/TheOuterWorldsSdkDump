#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ShipAI_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ShipAI_AnimBP.ShipAI_AnimBP_C
// 0x0AF1 (0x14E1 - 0x09F0)
class UShipAI_AnimBP_C : public UTPVAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xAF1];                                     // 0x09F0(0x0AF1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShipAI_AnimBP.ShipAI_AnimBP_C");
		return ptr;
	}


	void STATIC_UpdateAnimationParams();
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_AnimNotify_ResetRandomIdle();
	void STATIC_OnNewLocomotionAnimationSet(class ULocomotionAnimationSet** NewLocomtionAnimationSet);
	void STATIC_SetPersonality(class UTPVPersonalitySet** Personality);
	void STATIC_OnRebuildAnimationSetData();
	void STATIC_AnimNotify_CombatReadyTransition();
	void STATIC_AnimNotify_CombatIdleStateTransition();
	void STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations);
	void STATIC_AnimNotify_TriggerLookLeft();
	void STATIC_AnimNotify_StopLookLeft();
	void STATIC_ExecuteUbergraph_ShipAI_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
