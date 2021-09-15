#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaUI_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IndianaUI_BP.IndianaUI_BP_C.UserConstructionScript
struct AIndianaUI_BP_C_UserConstructionScript_Params
{
};

// Function IndianaUI_BP.IndianaUI_BP_C.SetObjective
struct AIndianaUI_BP_C_SetObjective_Params
{
	class AActor*                                      Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ObjectiveName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IndianaUI_BP.IndianaUI_BP_C.ExecuteUbergraph_IndianaUI_BP
struct AIndianaUI_BP_C_ExecuteUbergraph_IndianaUI_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
