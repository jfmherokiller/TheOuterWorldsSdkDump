#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Tinkering_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tinkering_BP.Tinkering_BP_C.Construct
struct UTinkering_BP_C_Construct_Params
{
};

// Function Tinkering_BP.Tinkering_BP_C.SetNewBackingMaterialHeight
struct UTinkering_BP_C_SetNewBackingMaterialHeight_Params
{
	float*                                             NewHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tinkering_BP.Tinkering_BP_C.ExecuteUbergraph_Tinkering_BP
struct UTinkering_BP_C_ExecuteUbergraph_Tinkering_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
