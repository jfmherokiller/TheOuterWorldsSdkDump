#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_UnarmedRagdollCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UnarmedRagdollCharacterDeath.UnarmedRagdollCharacterDeath_C.Execute
struct UUnarmedRagdollCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnarmedRagdollCharacterDeath.UnarmedRagdollCharacterDeath_C.ExecuteUbergraph_UnarmedRagdollCharacterDeath
struct UUnarmedRagdollCharacterDeath_C_ExecuteUbergraph_UnarmedRagdollCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
