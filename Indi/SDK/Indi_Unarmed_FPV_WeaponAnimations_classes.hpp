#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Unarmed_FPV_WeaponAnimations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C
// 0x0008 (0x0468 - 0x0460)
class UUnarmed_FPV_WeaponAnimations_C : public UWeaponAnimationsFPV_BP_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0460(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Unarmed_FPV_WeaponAnimations.Unarmed_FPV_WeaponAnimations_C");
		return ptr;
	}


	void STATIC_TriggerEventBP(EWeaponEvent* WeaponEvent, struct FEventEffectParams* Params);
	void STATIC_LeaveStateBP(EWeaponState* WeaponState);
	void STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params);
	void STATIC_ExecuteUbergraph_Unarmed_FPV_WeaponAnimations(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
