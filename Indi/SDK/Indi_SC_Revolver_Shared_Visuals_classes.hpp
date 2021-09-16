#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_Revolver_Shared_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_Revolver_Shared_Visuals.SC_Revolver_Shared_Visuals_C
// 0x0038 (0x0238 - 0x0200)
class USC_Revolver_Shared_Visuals_C : public USharedWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0200(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_Revolver_Shared_Visuals.SC_Revolver_Shared_Visuals_C");
		return ptr;
	}


	void STATIC_TriggerEventBP(EWeaponEvent* WeaponEvent, struct FEventEffectParams* Params);
	void STATIC_TriggerCustomEventBP(struct FName* EventName, struct FEventEffectParams* Params);
	void STATIC_EnterStateBP(EWeaponState* WeaponState, struct FEventEffectParams* Params);
	void STATIC_ExecuteUbergraph_SC_Revolver_Shared_Visuals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
