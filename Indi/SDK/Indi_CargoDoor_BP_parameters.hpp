#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CargoDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CargoDoor_BP.CargoDoor_BP_C.UserConstructionScript
struct ACargoDoor_BP_C_UserConstructionScript_Params
{
};

// Function CargoDoor_BP.CargoDoor_BP_C.AnimateDoors__FinishedFunc
struct ACargoDoor_BP_C_AnimateDoors__FinishedFunc_Params
{
};

// Function CargoDoor_BP.CargoDoor_BP_C.AnimateDoors__UpdateFunc
struct ACargoDoor_BP_C_AnimateDoors__UpdateFunc_Params
{
};

// Function CargoDoor_BP.CargoDoor_BP_C.OnAnimateOpen
struct ACargoDoor_BP_C_OnAnimateOpen_Params
{
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CargoDoor_BP.CargoDoor_BP_C.OnAnimateClose
struct ACargoDoor_BP_C_OnAnimateClose_Params
{
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CargoDoor_BP.CargoDoor_BP_C.OnStateChanged
struct ACargoDoor_BP_C_OnStateChanged_Params
{
};

// Function CargoDoor_BP.CargoDoor_BP_C.ExecuteUbergraph_CargoDoor_BP
struct ACargoDoor_BP_C_ExecuteUbergraph_CargoDoor_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
