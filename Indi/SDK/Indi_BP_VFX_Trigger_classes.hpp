#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_VFX_Trigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VFX_Trigger.BP_VFX_Trigger_C
// 0x011C (0x04A4 - 0x0388)
class ABP_VFX_Trigger_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x11C];                                     // 0x0388(0x011C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VFX_Trigger.BP_VFX_Trigger_C");
		return ptr;
	}


	void STATIC_Update_Beam_Endpoints(class UParticleSystemComponent* PS);
	void STATIC_Bind_Events(class UParticleSystemComponent* PS, TArray<TEnumAsByte<EN_Particle_Event_Bindings>>* Bindings);
	void STATIC_UserConstructionScript();
	void STATIC_Particle_Collide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void STATIC_Particle_Burst(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void STATIC_Particle_Death(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction);
	void STATIC_ParticleSpawn(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void STATIC_ReceiveBeginPlay();
	void STATIC_Trigger();
	void STATIC_Update_Endpoints();
	void STATIC_Store_Endpoint_Locations();
	void STATIC_Restore_Endpoint_Loactions();
	void STATIC_Deactivate();
	void STATIC_SpawnAK();
	void STATIC_ExecuteUbergraph_BP_VFX_Trigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
