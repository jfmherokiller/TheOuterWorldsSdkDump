#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GibCharacterDeath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GibCharacterDeath.GibCharacterDeath_C.Execute
struct UGibCharacterDeath_C_Execute_Params
{
	class UCharacterDeathComponent**                   InDeathComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GibCharacterDeath.GibCharacterDeath_C.ExecuteUbergraph_GibCharacterDeath
struct UGibCharacterDeath_C_ExecuteUbergraph_GibCharacterDeath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
