#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_VFX_Trigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Update_Beam_Endpoints
struct ABP_VFX_Trigger_C_Update_Beam_Endpoints_Params
{
	class UParticleSystemComponent*                    PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Bind_Events
struct ABP_VFX_Trigger_C_Bind_Events_Params
{
	class UParticleSystemComponent*                    PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TEnumAsByte<EN_Particle_Event_Bindings>>    Bindings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.UserConstructionScript
struct ABP_VFX_Trigger_C_UserConstructionScript_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Collide
struct ABP_VFX_Trigger_C_Particle_Collide_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Burst
struct ABP_VFX_Trigger_C_Particle_Burst_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Particle_Death
struct ABP_VFX_Trigger_C_Particle_Death_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.ParticleSpawn
struct ABP_VFX_Trigger_C_ParticleSpawn_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.ReceiveBeginPlay
struct ABP_VFX_Trigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Trigger
struct ABP_VFX_Trigger_C_Trigger_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Update_Endpoints
struct ABP_VFX_Trigger_C_Update_Endpoints_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Store_Endpoint_Locations
struct ABP_VFX_Trigger_C_Store_Endpoint_Locations_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Restore_Endpoint_Loactions
struct ABP_VFX_Trigger_C_Restore_Endpoint_Loactions_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.Deactivate
struct ABP_VFX_Trigger_C_Deactivate_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.SpawnAK
struct ABP_VFX_Trigger_C_SpawnAK_Params
{
};

// Function BP_VFX_Trigger.BP_VFX_Trigger_C.ExecuteUbergraph_BP_VFX_Trigger
struct ABP_VFX_Trigger_C_ExecuteUbergraph_BP_VFX_Trigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
