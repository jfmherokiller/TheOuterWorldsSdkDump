#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaAiController_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndianaAiController_BP.IndianaAiController_BP_C
// 0x0000 (0x0578 - 0x0578)
class AIndianaAiController_BP_C : public AIndianaAiController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndianaAiController_BP.IndianaAiController_BP_C");
		return ptr;
	}


	float GetFootstepAwarenessIncrease(bool* bIsStealthed, int* OwnerPerceptionSkill, int* TargetSneakSkill, EAlertState* InAlertState, float* BaseFootstepAwareness, float* Distance, float* SoundRadius);
	float GetSightAwarenessDecreaseRate(bool* bIsStealthed, int* OwnerPerceptionSkill, int* TargetSneakSkill, EAlertState* InAlertState, bool* bLost, bool* bDeadBodyKiller);
	float GetSightAwarenessIncreaseRate(bool* bIsStealthed, int* OwnerPerceptionSkill, int* TargetSneakSkill, EAlertState* InAlertState, float* Distance, float* SightRadius, bool* bAllowTargeting);
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
