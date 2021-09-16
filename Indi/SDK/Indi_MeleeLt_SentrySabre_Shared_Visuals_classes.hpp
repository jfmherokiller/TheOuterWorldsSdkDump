#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeLt_SentrySabre_Shared_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeLt_SentrySabre_Shared_Visuals.MeleeLt_SentrySabre_Shared_Visuals_C
// 0x0010 (0x0210 - 0x0200)
class UMeleeLt_SentrySabre_Shared_Visuals_C : public USharedWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeLt_SentrySabre_Shared_Visuals.MeleeLt_SentrySabre_Shared_Visuals_C");
		return ptr;
	}


	void STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params);
	void STATIC_LeaveStateBP(EWeaponState* WeaponState);
	void STATIC_TriggerEventBP(EWeaponEvent* WeaponEvent, struct FEventEffectParams* Params);
	void STATIC_ExecuteUbergraph_MeleeLt_SentrySabre_Shared_Visuals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
