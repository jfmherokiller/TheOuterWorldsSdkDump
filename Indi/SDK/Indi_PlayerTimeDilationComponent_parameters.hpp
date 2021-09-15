#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerTimeDilationComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveTick
struct UPlayerTimeDilationComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.OnTimeDilationEnd
struct UPlayerTimeDilationComponent_C_OnTimeDilationEnd_Params
{
};

// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_Start
struct UPlayerTimeDilationComponent_C_TTD_Start_Params
{
};

// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ReceiveBeginPlay
struct UPlayerTimeDilationComponent_C_ReceiveBeginPlay_Params
{
};

// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.TTD_End
struct UPlayerTimeDilationComponent_C_TTD_End_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerTimeDilationComponent.PlayerTimeDilationComponent_C.ExecuteUbergraph_PlayerTimeDilationComponent
struct UPlayerTimeDilationComponent_C_ExecuteUbergraph_PlayerTimeDilationComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
