#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_VF_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VF.BP_VF_C.UserConstructionScript
struct ABP_VF_C_UserConstructionScript_Params
{
};

// Function BP_VF.BP_VF_C.ReceiveBeginPlay
struct ABP_VF_C_ReceiveBeginPlay_Params
{
};

// Function BP_VF.BP_VF_C.Update
struct ABP_VF_C_Update_Params
{
};

// Function BP_VF.BP_VF_C.ExecuteUbergraph_BP_VF
struct ABP_VF_C_ExecuteUbergraph_BP_VF_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
