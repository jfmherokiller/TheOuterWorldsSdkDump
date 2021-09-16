#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BarkVolume_Companion_Generic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.UserConstructionScript
struct ABarkVolume_Companion_Generic_C_UserConstructionScript_Params
{
};

// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.ReceiveBeginPlay
struct ABarkVolume_Companion_Generic_C_ReceiveBeginPlay_Params
{
};

// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.OnActorBeginOverlap_Event_1
struct ABarkVolume_Companion_Generic_C_OnActorBeginOverlap_Event_1_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BarkVolume_Companion_Generic.BarkVolume_Companion_Generic_C.ExecuteUbergraph_BarkVolume_Companion_Generic
struct ABarkVolume_Companion_Generic_C_ExecuteUbergraph_BarkVolume_Companion_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
