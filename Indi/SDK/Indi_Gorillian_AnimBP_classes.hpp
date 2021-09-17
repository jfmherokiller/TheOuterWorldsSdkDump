#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Gorillian_AnimBP.Gorillian_AnimBP_C
// 0x3B40 (0x45B0 - 0x0A70)
class UGorillian_AnimBP_C : public UQuadrupedAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x3B40];                                    // 0x0A70(0x3B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Gorillian_AnimBP.Gorillian_AnimBP_C");
		return ptr;
	}


	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_CombatTransition();
	void STATIC_NeutralTransition();
	void STATIC_OnRebuildAnimationSetData();
	void STATIC_AnimNotify_RandomIdle();
	void STATIC_AnimNotify_TurnOffRandomIdle();
	void STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations);
	void STATIC_AnimNotify_VFX();
	void STATIC_ExecuteUbergraph_Gorillian_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
