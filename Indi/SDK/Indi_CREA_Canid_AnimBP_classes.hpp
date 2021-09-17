#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CREA_Canid_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CREA_Canid_AnimBP.CREA_Canid_AnimBP_C
// 0x2119 (0x2B89 - 0x0A70)
class UCREA_Canid_AnimBP_C : public UQuadrupedAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x2119];                                    // 0x0A70(0x2119) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CREA_Canid_AnimBP.CREA_Canid_AnimBP_C");
		return ptr;
	}


	void STATIC_CheckHitFlinches();
	void STATIC_UpdateAnimBP();
	void STATIC_CombatTransition();
	void STATIC_NeutralTransition();
	void STATIC_OnRebuildAnimationSetData();
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_AnimNotify_RandomIdle();
	void STATIC_AnimNotify_TurnOffRandomIdle();
	void STATIC_OnNewWeaponAnimations(class UWeaponAnimations** NewWeaponAnimations);
	void STATIC_ExecuteUbergraph_CREA_Canid_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
