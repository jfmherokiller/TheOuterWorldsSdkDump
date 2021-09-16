#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CREA_Raptidon_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C
// 0x3130 (0x3BA0 - 0x0A70)
class UCREA_Raptidon_AnimBlueprint_C : public UQuadrupedAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x3130];                                    // 0x0A70(0x3130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CREA_Raptidon_AnimBlueprint.CREA_Raptidon_AnimBlueprint_C");
		return ptr;
	}


	void STATIC_CheckHitFlinches();
	void STATIC_CombatTransition();
	void STATIC_NeutralTransition();
	void STATIC_OnRebuildAnimationSetData();
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_AnimNotify_RandomIdle();
	void STATIC_AnimNotify_TurnOffRandomIdle();
	void STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations);
	void STATIC_ExecuteUbergraph_CREA_Raptidon_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
