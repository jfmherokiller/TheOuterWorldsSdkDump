#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EnergyCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EnergyCharacterDeath.EnergyCharacterDeath_C.Execute
struct UEnergyCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnergyCharacterDeath.EnergyCharacterDeath_C.Tick
struct UEnergyCharacterDeath_C_Tick_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnergyCharacterDeath.EnergyCharacterDeath_C.ExecuteOnReload
struct UEnergyCharacterDeath_C_ExecuteOnReload_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnergyCharacterDeath.EnergyCharacterDeath_C.ExecuteUbergraph_EnergyCharacterDeath
struct UEnergyCharacterDeath_C_ExecuteUbergraph_EnergyCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
