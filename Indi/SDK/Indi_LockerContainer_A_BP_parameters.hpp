#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LockerContainer_A_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LockerContainer_A_BP.LockerContainer_A_BP_C.GetLightingConfig
struct ALockerContainer_A_BP_C_GetLightingConfig_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MaterialSlot;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LockerContainer_A_BP.LockerContainer_A_BP_C.UserConstructionScript
struct ALockerContainer_A_BP_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
