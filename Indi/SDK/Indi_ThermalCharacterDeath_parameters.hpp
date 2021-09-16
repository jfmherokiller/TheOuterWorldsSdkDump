#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ThermalCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ThermalCharacterDeath.ThermalCharacterDeath_C.TriggerParticleEffects
struct UThermalCharacterDeath_C_TriggerParticleEffects_Params
{
};

// Function ThermalCharacterDeath.ThermalCharacterDeath_C.Execute
struct UThermalCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ThermalCharacterDeath.ThermalCharacterDeath_C.Tick
struct UThermalCharacterDeath_C_Tick_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThermalCharacterDeath.ThermalCharacterDeath_C.ExecuteOnReload
struct UThermalCharacterDeath_C_ExecuteOnReload_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ThermalCharacterDeath.ThermalCharacterDeath_C.ExecuteUbergraph_ThermalCharacterDeath
struct UThermalCharacterDeath_C_ExecuteUbergraph_ThermalCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
