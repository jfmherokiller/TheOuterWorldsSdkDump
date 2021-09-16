#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeHvy_TeleStaff_Shared_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C
// 0x001C (0x021C - 0x0200)
class UMeleeHvy_TeleStaff_Shared_Visuals_C : public USharedWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0200(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeHvy_TeleStaff_Shared_Visuals.MeleeHvy_TeleStaff_Shared_Visuals_C");
		return ptr;
	}


	void STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params);
	void STATIC_ExecuteUbergraph_MeleeHvy_TeleStaff_Shared_Visuals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
