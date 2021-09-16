#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Unarmed_WeaponBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Unarmed_WeaponBP.Unarmed_WeaponBP_C.UserConstructionScript
struct UUnarmed_WeaponBP_C_UserConstructionScript_Params
{
};

// Function Unarmed_WeaponBP.Unarmed_WeaponBP_C.ReceiveBeginPlay
struct UUnarmed_WeaponBP_C_ReceiveBeginPlay_Params
{
};

// Function Unarmed_WeaponBP.Unarmed_WeaponBP_C.ReceiveActorBeginOverlap
struct UUnarmed_WeaponBP_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Unarmed_WeaponBP.Unarmed_WeaponBP_C.ReceiveTick
struct UUnarmed_WeaponBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Unarmed_WeaponBP.Unarmed_WeaponBP_C.ExecuteUbergraph_Unarmed_WeaponBP
struct UUnarmed_WeaponBP_C_ExecuteUbergraph_Unarmed_WeaponBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
