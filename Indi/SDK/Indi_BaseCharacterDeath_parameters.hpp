#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BaseCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseCharacterDeath.BaseCharacterDeath_C.UpdatePileDissolve
struct UBaseCharacterDeath_C_UpdatePileDissolve_Params
{
	float                                              CurrentTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DissolveDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDeath.BaseCharacterDeath_C.UpdateTransitionCompletionDelay
struct UBaseCharacterDeath_C_UpdateTransitionCompletionDelay_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDeath.BaseCharacterDeath_C.CreateAshPile
struct UBaseCharacterDeath_C_CreateAshPile_Params
{
	class UStaticMesh*                                 LootablePile;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LootablePileMaterial;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Ash_MID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnSpine
struct UBaseCharacterDeath_C_TriggerParticlesOnSpine_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDeath.BaseCharacterDeath_C.CalcBodyTypeImpact
struct UBaseCharacterDeath_C_CalcBodyTypeImpact_Params
{
};

// Function BaseCharacterDeath.BaseCharacterDeath_C.FindAndPostAudioEvents
struct UBaseCharacterDeath_C_FindAndPostAudioEvents_Params
{
};

// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnBreakSockets
struct UBaseCharacterDeath_C_TriggerParticlesOnBreakSockets_Params
{
	bool                                               TriggerImpactSpray;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachedSocket;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DetachedSocket;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseCharacterDeath.BaseCharacterDeath_C.ApplyDeathMaterials
struct UBaseCharacterDeath_C_ApplyDeathMaterials_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
