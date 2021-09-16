#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_FX_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function 0002_FX.0002_FX_C.Fog__FinishedFunc
struct A0002_FX_C_Fog__FinishedFunc_Params
{
};

// Function 0002_FX.0002_FX_C.Fog__UpdateFunc
struct A0002_FX_C_Fog__UpdateFunc_Params
{
};

// Function 0002_FX.0002_FX_C.Fog_Check_Start
struct A0002_FX_C_Fog_Check_Start_Params
{
	EPhaseOfDay                                        NewPhase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0002_FX.0002_FX_C.Fog_Check
struct A0002_FX_C_Fog_Check_Params
{
};

// Function 0002_FX.0002_FX_C.Fog_Check_Reverse
struct A0002_FX_C_Fog_Check_Reverse_Params
{
};

// Function 0002_FX.0002_FX_C.ReceiveBeginPlay
struct A0002_FX_C_ReceiveBeginPlay_Params
{
};

// Function 0002_FX.0002_FX_C.ExecuteUbergraph_0002_FX
struct A0002_FX_C_ExecuteUbergraph_0002_FX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
