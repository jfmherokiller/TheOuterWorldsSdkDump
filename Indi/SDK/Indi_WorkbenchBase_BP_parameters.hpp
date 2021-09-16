#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WorkbenchBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WorkbenchBase_BP.WorkbenchBase_BP_C.UserConstructionScript
struct AWorkbenchBase_BP_C_UserConstructionScript_Params
{
};

// Function WorkbenchBase_BP.WorkbenchBase_BP_C.ReceiveTick
struct AWorkbenchBase_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorkbenchBase_BP.WorkbenchBase_BP_C.ExecuteUbergraph_WorkbenchBase_BP
struct AWorkbenchBase_BP_C_ExecuteUbergraph_WorkbenchBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
