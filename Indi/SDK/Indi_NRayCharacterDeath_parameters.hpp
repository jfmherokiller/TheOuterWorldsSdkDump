#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NRayCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NRayCharacterDeath.NRayCharacterDeath_C.Execute
struct UNRayCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NRayCharacterDeath.NRayCharacterDeath_C.Tick
struct UNRayCharacterDeath_C_Tick_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteOnReload
struct UNRayCharacterDeath_C_ExecuteOnReload_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteUbergraph_NRayCharacterDeath
struct UNRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
