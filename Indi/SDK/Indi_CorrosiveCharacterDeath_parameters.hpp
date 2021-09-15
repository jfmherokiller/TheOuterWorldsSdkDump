#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CorrosiveCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.Execute
struct UCorrosiveCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.Tick
struct UCorrosiveCharacterDeath_C_Tick_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.ExecuteOnReload
struct UCorrosiveCharacterDeath_C_ExecuteOnReload_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.ExecuteUbergraph_CorrosiveCharacterDeath
struct UCorrosiveCharacterDeath_C_ExecuteUbergraph_CorrosiveCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
