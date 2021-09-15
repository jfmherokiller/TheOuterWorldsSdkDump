#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_DamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_DamageType.Base_DamageType_C
// 0x0038 (0x00E8 - 0x00B0)
class UBase_DamageType_C : public UIndianaDamageType
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_DamageType.Base_DamageType_C");
		return ptr;
	}


	void STATIC_TriggerMuzzleFx(class USceneComponent** AttachComponent);
	void STATIC_SetupSecondaryImpactFx(class UParticleSystemComponent** ParentEffect, bool* bGraze, bool* bCritical, bool* bWeakSpot, bool* bRadial, float* Radius);
	void STATIC_SetupImpactFx(class UParticleSystemComponent** ParentEffect, bool* bGraze, bool* bCritical, bool* bWeakSpot, bool* bRadial, float* Radius);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
