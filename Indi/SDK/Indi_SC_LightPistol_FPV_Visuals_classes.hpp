#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_LightPistol_FPV_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_LightPistol_FPV_Visuals.SC_LightPistol_FPV_Visuals_C
// 0x0008 (0x0250 - 0x0248)
class USC_LightPistol_FPV_Visuals_C : public UPrimaryWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_LightPistol_FPV_Visuals.SC_LightPistol_FPV_Visuals_C");
		return ptr;
	}


	void STATIC_TriggerEventBP(EWeaponEvent* WeaponEvent, struct FEventEffectParams* Params);
	void STATIC_ExecuteUbergraph_SC_LightPistol_FPV_Visuals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
