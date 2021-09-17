#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_SplineEmitter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SplineEmitter.BP_SplineEmitter_C.SmoothEmitterJump
struct ABP_SplineEmitter_C_SmoothEmitterJump_Params
{
	struct FVector                                     NewEmitterWorldLocation;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SmoothSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SmoothedEmitterWorldLocation;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineEmitter.BP_SplineEmitter_C.GetEmitterLocationDeltaLength
struct ABP_SplineEmitter_C_GetEmitterLocationDeltaLength_Params
{
	struct FVector                                     NewEmitterWorldLocation;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterWorldLocationDeltaLength;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineEmitter.BP_SplineEmitter_C.GetPlayerWorldLocation
struct ABP_SplineEmitter_C_GetPlayerWorldLocation_Params
{
	struct FVector                                     PlayerWorldLocation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineEmitter.BP_SplineEmitter_C.UserConstructionScript
struct ABP_SplineEmitter_C_UserConstructionScript_Params
{
};

// Function BP_SplineEmitter.BP_SplineEmitter_C.ReceiveTick
struct ABP_SplineEmitter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplineEmitter.BP_SplineEmitter_C.ReceiveBeginPlay
struct ABP_SplineEmitter_C_ReceiveBeginPlay_Params
{
};

// Function BP_SplineEmitter.BP_SplineEmitter_C.ExecuteUbergraph_BP_SplineEmitter
struct ABP_SplineEmitter_C_ExecuteUbergraph_BP_SplineEmitter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
