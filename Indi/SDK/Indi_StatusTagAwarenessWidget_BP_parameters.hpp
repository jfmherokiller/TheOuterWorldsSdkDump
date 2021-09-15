#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatusTagAwarenessWidget_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.Construct
struct UStatusTagAwarenessWidget_BP_C_Construct_Params
{
};

// Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.SetTextures
struct UStatusTagAwarenessWidget_BP_C_SetTextures_Params
{
	class UTexture2D**                                 BackingTexture;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 FillTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C.ExecuteUbergraph_StatusTagAwarenessWidget_BP
struct UStatusTagAwarenessWidget_BP_C_ExecuteUbergraph_StatusTagAwarenessWidget_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
