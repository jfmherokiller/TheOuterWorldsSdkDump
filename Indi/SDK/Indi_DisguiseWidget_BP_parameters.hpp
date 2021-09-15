#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DisguiseWidget_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.Construct
struct UDisguiseWidget_BP_C_Construct_Params
{
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseBegin
struct UDisguiseWidget_BP_C_OnDisguiseBegin_Params
{
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseEnd
struct UDisguiseWidget_BP_C_OnDisguiseEnd_Params
{
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.OnDisguiseImageLoaded
struct UDisguiseWidget_BP_C_OnDisguiseImageLoaded_Params
{
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterFill
struct UDisguiseWidget_BP_C_UpdateDisguiseMeterFill_Params
{
	float*                                             NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.UpdateDisguiseMeterInnerAnim
struct UDisguiseWidget_BP_C_UpdateDisguiseMeterInnerAnim_Params
{
	int*                                               CurrentFrame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.ShowDisguiseMeterTip
struct UDisguiseWidget_BP_C_ShowDisguiseMeterTip_Params
{
	float*                                             StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.HideDisguiseMeterTip
struct UDisguiseWidget_BP_C_HideDisguiseMeterTip_Params
{
	float*                                             StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DisguiseWidget_BP.DisguiseWidget_BP_C.ExecuteUbergraph_DisguiseWidget_BP
struct UDisguiseWidget_BP_C_ExecuteUbergraph_DisguiseWidget_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
