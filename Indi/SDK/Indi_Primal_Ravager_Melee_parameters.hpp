#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Primal_Ravager_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Primal_Ravager_Melee.Primal_Ravager_Melee_C.UserConstructionScript
struct UPrimal_Ravager_Melee_C_UserConstructionScript_Params
{
};

// Function Primal_Ravager_Melee.Primal_Ravager_Melee_C.ReceiveBeginPlay
struct UPrimal_Ravager_Melee_C_ReceiveBeginPlay_Params
{
};

// Function Primal_Ravager_Melee.Primal_Ravager_Melee_C.ReceiveActorBeginOverlap
struct UPrimal_Ravager_Melee_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Primal_Ravager_Melee.Primal_Ravager_Melee_C.ReceiveTick
struct UPrimal_Ravager_Melee_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Primal_Ravager_Melee.Primal_Ravager_Melee_C.ExecuteUbergraph_Primal_Ravager_Melee
struct UPrimal_Ravager_Melee_C_ExecuteUbergraph_Primal_Ravager_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
