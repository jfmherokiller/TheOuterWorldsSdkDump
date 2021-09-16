#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CashRegister_A_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CashRegister_A_BP.CashRegister_A_BP_C.GetLightingConfig
struct ACashRegister_A_BP_C_GetLightingConfig_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MaterialSlot;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CashRegister_A_BP.CashRegister_A_BP_C.UserConstructionScript
struct ACashRegister_A_BP_C_UserConstructionScript_Params
{
};

// Function CashRegister_A_BP.CashRegister_A_BP_C.ApplyLight
struct ACashRegister_A_BP_C_ApplyLight_Params
{
};

// Function CashRegister_A_BP.CashRegister_A_BP_C.ExecuteUbergraph_CashRegister_A_BP
struct ACashRegister_A_BP_C_ExecuteUbergraph_CashRegister_A_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
