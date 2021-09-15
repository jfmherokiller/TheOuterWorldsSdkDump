#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BaseCharacterDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCharacterDeath.BaseCharacterDeath_C
// 0x0031 (0x0151 - 0x0120)
class UBaseCharacterDeath_C : public UDeathClass
{
public:
	unsigned char                                      UnknownData00[0x31];                                      // 0x0120(0x0031) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseCharacterDeath.BaseCharacterDeath_C");
		return ptr;
	}


	void STATIC_UpdatePileDissolve(float DissolveDuration, class UMaterialInstanceDynamic* Material, float* CurrentTime);
	void STATIC_UpdateTransitionCompletionDelay(float Delta);
	void STATIC_CreateAshPile(class UStaticMesh* LootablePile, class UMaterialInterface* LootablePileMaterial, class UMaterialInstanceDynamic** Ash_MID);
	void STATIC_TriggerParticlesOnSpine(class UParticleSystem* EmitterTemplate);
	void STATIC_CalcBodyTypeImpact();
	void STATIC_FindAndPostAudioEvents();
	void STATIC_TriggerParticlesOnBreakSockets(bool TriggerImpactSpray, const struct FName& AttachedSocket, const struct FName& DetachedSocket);
	void STATIC_ApplyDeathMaterials();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
