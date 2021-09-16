#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_TeslaCannon_Shared_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C
// 0x0070 (0x0270 - 0x0200)
class UTL_TeslaCannon_Shared_Visuals_C : public USharedWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0200(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TL_TeslaCannon_Shared_Visuals.TL_TeslaCannon_Shared_Visuals_C");
		return ptr;
	}


	void STATIC_InitializeBP(class AActor** NewTarget, class UWeapon** NewWeapon);
	void STATIC_TickBP(float* DeltaTime);
	void STATIC_TriggerEventBP(EWeaponEvent* WeaponEvent, struct FEventEffectParams* Params);
	void STATIC_LeaveStateBP(EWeaponState* WeaponState);
	void STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params);
	void STATIC_ExecuteUbergraph_TL_TeslaCannon_Shared_Visuals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
