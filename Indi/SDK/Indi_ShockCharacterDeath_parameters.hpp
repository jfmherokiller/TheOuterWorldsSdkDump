#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ShockCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShockCharacterDeath.ShockCharacterDeath_C.Execute
struct UShockCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShockCharacterDeath.ShockCharacterDeath_C.Tick
struct UShockCharacterDeath_C_Tick_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShockCharacterDeath.ShockCharacterDeath_C.ExecuteOnReload
struct UShockCharacterDeath_C_ExecuteOnReload_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShockCharacterDeath.ShockCharacterDeath_C.ExecuteUbergraph_ShockCharacterDeath
struct UShockCharacterDeath_C_ExecuteUbergraph_ShockCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
