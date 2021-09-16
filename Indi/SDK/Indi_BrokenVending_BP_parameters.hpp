#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BrokenVending_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BrokenVending_BP.BrokenVending_BP_C.ApplyLight
struct ABrokenVending_BP_C_ApplyLight_Params
{
};

// Function BrokenVending_BP.BrokenVending_BP_C.GetLightingConfig
struct ABrokenVending_BP_C_GetLightingConfig_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MaterialSlot;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BrokenVending_BP.BrokenVending_BP_C.UserConstructionScript
struct ABrokenVending_BP_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
