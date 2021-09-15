#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DismemberCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DismemberCharacterDeath.DismemberCharacterDeath_C.AddTorsoGibParticles
struct UDismemberCharacterDeath_C_AddTorsoGibParticles_Params
{
};

// Function DismemberCharacterDeath.DismemberCharacterDeath_C.Execute
struct UDismemberCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DismemberCharacterDeath.DismemberCharacterDeath_C.ExecuteUbergraph_DismemberCharacterDeath
struct UDismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
