#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_FX_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function 0001_FX.0001_FX_C.ReceiveBeginPlay
struct A0001_FX_C_ReceiveBeginPlay_Params
{
};

// Function 0001_FX.0001_FX_C.Activate_Ash
struct A0001_FX_C_Activate_Ash_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0001_FX.0001_FX_C.Deactivate_Ash
struct A0001_FX_C_Deactivate_Ash_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 0001_FX.0001_FX_C.ExecuteUbergraph_0001_FX
struct A0001_FX_C_ExecuteUbergraph_0001_FX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
